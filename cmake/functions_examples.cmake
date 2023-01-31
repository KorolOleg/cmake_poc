set(CALCULATION_COMPONENTS calculation-component0 calculation-component1)

foreach(component ${CALCULATION_COMPONENTS})
    string(REGEX REPLACE "calculation-(.*))" "\\1" component_name_suffix ${component})
    string(TOUPPER ${component_name_suffix} component_name_suffix_upper)
    set(fc_source_dir "FETCHCONTENT_SOURCE_DIR_CALCULATION_${component_name_suffix_upper}")
    set(${fc_src_dir} ${PROJECT_SOURCE_DIR}/extern/${component})
endforeach()