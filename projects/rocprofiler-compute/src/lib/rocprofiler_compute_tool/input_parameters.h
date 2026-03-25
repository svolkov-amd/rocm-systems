#pragma once

namespace rocprof_compute_tool
{
class InputParameters
{
    virtual char* get_output_path()                 = 0;
    virtual char* get_requested_counters()          = 0;
    virtual char* get_iteration_multiplexing()      = 0;
    virtual char* get_kernel_filter_include_regex() = 0;
    virtual char* get_kernel_filter_range()         = 0;
};

class EnvInputParameters : public InputParameters
{
    char* get_output_path() override;
    char* get_requested_counters() override;
    char* get_iteration_multiplexing() override;
    char* get_kernel_filter_include_regex() override;
    char* get_kernel_filter_range() override;
};
}  // namespace rocprof_compute_tool