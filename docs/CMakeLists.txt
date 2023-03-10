find_package(Doxygen OPTIONAL_COMPONENTS dot)

# https://aliceo2group.github.io/advanced/doxygen.html
# After running make doc the generated files are to moved to <build>/doc/html

set(DOCS_FOLDERS
        ${CMAKE_CURRENT_SOURCE_DIR}/../src
        ${CMAKE_CURRENT_SOURCE_DIR}/../include
        )

if(DOXYGEN_FOUND)
    if((${CMAKE_VERSION} VERSION_GREATER 3.9))
        set(DOXYGEN_GENERATE_TREEVIEW YES)
        set(DOXYGEN_HIDE_UNDOC_RELATIONS NO)
        set(DOXYGEN_HAVE_DOT YES)
        set(DOXYGEN_DOT_NUM_THREADS 1)
        set(DOXYGEN_UML_LOOK YES)
        set(DOXYGEN_UML_LIMIT_NUM_FIELDS 50)
        set(DOXYGEN_TEMPLATE_RELATIONS YES)
        set(DOXYGEN_DOT_IMAGE_FORMAT svg)
        set(DOXYGEN_INTERACTIVE_SVG YES)
        set(DOXYGEN_DOT_GRAPH_MAX_NODES 100)
        set(DOXYGEN_DOT_TRANSPARENT YES)
        set(DOXYGEN_USE_MDFILE_AS_MAINPAGE "${CMAKE_CURRENT_SOURCE_DIR}/README.md")
        doxygen_add_docs(doc
                ${DOCS_FOLDERS}
                COMMENT "Generating doxygen documentation for ${PROJECT_NAME}"
                )
    endif()
endif(DOXYGEN_FOUND)