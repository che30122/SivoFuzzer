
void prob_fuzzer(testcase_file* one,int no_iterations,int no_execs_block,float min_running_time,Time iteration_start_time){
	START_TIMER(begin_time);
	string original_input=one->testcase_filename;

	prepare_tmp_input(original_input);

	int lenx;
	byte* x=read_binary_file(TMP_INPUT,lenx);
	float   found_new;
	int     INIT_NO_ITERATIONS          = no_iterations;
	float   INIT_MIN_RUNNING_TIME       = min_running_time;
	bool    not_increased_no_iterations = true;
	int found_any_new_cov=false;
	int     begin_important_tc          = count_current_important_tc();
	auto time_pre_init  = TIME_DIFFERENCE_SECONDS( begin_time ) ;
	START_TIMER( time_init );

	fuzzer_init_time        += TIME_DIFFERENCE_SECONDS( begin_time );
    auto time_only_init     =  TIME_DIFFERENCE_SECONDS( begin_time ) - time_pre_init;
}
