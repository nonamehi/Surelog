
// This file is automatically generated by generate_parser_listener.tcl
// DO NOT EDIT

#ifndef VOBJECTTYPES_H
#define VOBJECTTYPES_H
typedef enum {
      sl0 = 0,
      sl1 = 1,
      slAccelerate_directive = 2,
      slAction_block = 3,
      slActual_arg_expr = 4,
      slActual_arg_list = 5,
      slAlways_construct = 6,
      slAlwaysKeywd_Always = 7,
      slAlwaysKeywd_Comb = 8,
      slAlwaysKeywd_FF = 9,
      slAlwaysKeywd_Latch = 10,
      slAnd_call = 11,
      slAnonymous_program = 12,
      slAnonymous_program_item = 13,
      slAnsi_port_declaration = 14,
      slArray_manipulation_call = 15,
      slArray_member_label = 16,
      slArray_method_name = 17,
      slArray_pattern_key = 18,
      slArray_range_expression = 19,
      slAssert_property_statement = 20,
      slAssertion_item = 21,
      slAssertion_item_declaration = 22,
      slAssertion_variable_declaration = 23,
      slAssignment_pattern = 24,
      slAssignment_pattern_expression = 25,
      slAssignment_pattern_expression_type = 26,
      slAssignment_pattern_key = 27,
      slAssignment_pattern_net_lvalue = 28,
      slAssignment_pattern_variable_lvalue = 29,
      slAssignOp_Add = 30,
      slAssignOp_ArithShiftLeft = 31,
      slAssignOp_ArithShiftRight = 32,
      slAssignOp_Assign = 33,
      slAssignOp_BitwAnd = 34,
      slAssignOp_BitwLeftShift = 35,
      slAssignOp_BitwOr = 36,
      slAssignOp_BitwRightShift = 37,
      slAssignOp_BitwXor = 38,
      slAssignOp_Div = 39,
      slAssignOp_Modulo = 40,
      slAssignOp_Mult = 41,
      slAssignOp_Sub = 42,
      slAssociative_dimension = 43,
      slAssume_property_statement = 44,
      slAttr_name = 45,
      slAttr_spec = 46,
      slAttribute_instance = 47,
      slAutoexpand_vectornets_directive = 48,
      slBind_directive = 49,
      slBind_instantiation = 50,
      slBinModOp_BitwAnd = 51,
      slBinModOp_BitwOr = 52,
      slBinModOp_BitwXor = 53,
      slBinModOp_Equiv = 54,
      slBinModOp_LogicAnd = 55,
      slBinModOp_LogicOr = 56,
      slBinModOp_NotEqual = 57,
      slBinModOp_ReductXnor1 = 58,
      slBinModOp_ReductXnor2 = 59,
      slBinOp_ArithShiftLeft = 60,
      slBinOp_ArithShiftRight = 61,
      slBinOp_BitwAnd = 62,
      slBinOp_BitwOr = 63,
      slBinOp_BitwXor = 64,
      slBinOp_Div = 65,
      slBinOp_Equiv = 66,
      slBinOp_Equivalence = 67,
      slBinOp_FourStateLogicEqual = 68,
      slBinOp_FourStateLogicNotEqual = 69,
      slBinOp_Great = 70,
      slBinOp_GreatEqual = 71,
      slBinOp_Imply = 72,
      slBinOp_Less = 73,
      slBinOp_LessEqual = 74,
      slBinOp_LogicAnd = 75,
      slBinOp_LogicOr = 76,
      slBinOp_Minus = 77,
      slBinOp_Mult = 78,
      slBinOp_MultMult = 79,
      slBinOp_Not = 80,
      slBinOp_Percent = 81,
      slBinOp_Plus = 82,
      slBinOp_ReductNand = 83,
      slBinOp_ReductNor = 84,
      slBinOp_ReductXnor1 = 85,
      slBinOp_ReductXnor2 = 86,
      slBinOp_ShiftLeft = 87,
      slBinOp_ShiftRight = 88,
      slBinOp_WildcardEqual = 89,
      slBinOp_WildcardNotEqual = 90,
      slBinOp_WildEqual = 91,
      slBinOp_WildNotEqual = 92,
      slBins_Bins = 93,
      slBins_expression = 94,
      slBins_Ignore = 95,
      slBins_Illegal = 96,
      slBins_or_empty = 97,
      slBins_or_options = 98,
      slBins_selection = 99,
      slBins_selection_or_option = 100,
      slBit_select = 101,
      slBlock_event_expression = 102,
      slBlock_item_declaration = 103,
      slBlocking_assignment = 104,
      slBoolean_abbrev = 105,
      slBuilt_in_method_call = 106,
      slCase_generate_construct = 107,
      slCase_generate_item = 108,
      slCase_inside_item = 109,
      slCase_item = 110,
      slCase_pattern_item = 111,
      slCase_statement = 112,
      slCaseKeyword_Case = 113,
      slCaseKeyword_CaseX = 114,
      slCaseKeyword_CaseZ = 115,
      slCast = 116,
      slCasting_type = 117,
      slCell_clause = 118,
      slCelldefine_directive = 119,
      slChandle_type = 120,
      slChargeStrength_Large = 121,
      slChargeStrength_Medium = 122,
      slChargeStrength_Small = 123,
      slChecker = 124,
      slChecker_declaration = 125,
      slChecker_generate_item = 126,
      slChecker_instantiation = 127,
      slChecker_or_generate_item = 128,
      slChecker_or_generate_item_declaration = 129,
      slChecker_port_item = 130,
      slChecker_port_list = 131,
      slClass = 132,
      slClass_constraint = 133,
      slClass_constructor_declaration = 134,
      slClass_constructor_prototype = 135,
      slClass_declaration = 136,
      slClass_item = 137,
      slClass_keyword = 138,
      slClass_method = 139,
      slClass_new = 140,
      slClass_property = 141,
      slClass_scope = 142,
      slClass_type = 143,
      slClassItemQualifier_Local = 144,
      slClassItemQualifier_Protected = 145,
      slClassItemQualifier_Static = 146,
      slClocking_decl_assign = 147,
      slClocking_declaration = 148,
      slClocking_drive = 149,
      slClocking_event = 150,
      slClocking_item = 151,
      slClocking_skew = 152,
      slClockingDir_Inout = 153,
      slClockingDir_Input = 154,
      slClockingDir_InputOutput = 155,
      slClockingDir_Output = 156,
      slClockvar = 157,
      slClockvar_expression = 158,
      slCmos_switch_instance = 159,
      slCmosSwitchType_Cmos = 160,
      slCmosSwitchType_RCmos = 161,
      slCombinational_body = 162,
      slCombinational_entry = 163,
      slComments = 164,
      slComplex_func_call = 165,
      slConcatenation = 166,
      slConcurrent_assertion_item = 167,
      slConcurrent_assertion_item_declaration = 168,
      slConcurrent_assertion_statement = 169,
      slCond_predicate = 170,
      slConditional_generate_construct = 171,
      slConditional_statement = 172,
      slConfig_declaration = 173,
      slConfig_rule_statement = 174,
      slConsecutive_repetition = 175,
      slConst_or_range_expression = 176,
      slConst_type = 177,
      slConstant_assignment_pattern_expression = 178,
      slConstant_bit_select = 179,
      slConstant_cast = 180,
      slConstant_concatenation = 181,
      slConstant_expression = 182,
      slConstant_indexed_range = 183,
      slConstant_mintypmax_expression = 184,
      slConstant_multiple_concatenation = 185,
      slConstant_param_expression = 186,
      slConstant_part_select_range = 187,
      slConstant_primary = 188,
      slConstant_range = 189,
      slConstant_range_expression = 190,
      slConstant_select = 191,
      slConstantSelect = 192,
      slConstraint_block = 193,
      slConstraint_block_item = 194,
      slConstraint_declaration = 195,
      slConstraint_expression = 196,
      slConstraint_primary = 197,
      slConstraint_prototype = 198,
      slConstraint_set = 199,
      slConstSelect = 200,
      slContext_keyword = 201,
      slContinuous_assign = 202,
      slControlled_timing_check_event = 203,
      slCover_cross = 204,
      slCover_point = 205,
      slCover_property_statement = 206,
      slCover_sequence_statement = 207,
      slCoverage_event = 208,
      slCoverage_option = 209,
      slCoverage_spec = 210,
      slCoverage_spec_or_option = 211,
      slCovergroup_declaration = 212,
      slCross_body = 213,
      slCross_body_item = 214,
      slCross_item = 215,
      slCycle_delay = 216,
      slCycle_delay_const_range_expression = 217,
      slCycle_delay_range = 218,
      slData_declaration = 219,
      slData_type = 220,
      slData_type_or_implicit = 221,
      slData_type_or_void = 222,
      slDefault_clause = 223,
      slDefault_decay_time_directive = 224,
      slDefault_nettype_directive = 225,
      slDefault_trireg_strenght_directive = 226,
      slDefaultSkew_Intput = 227,
      slDefaultSkew_IntputOutput = 228,
      slDefaultSkew_Output = 229,
      slDeferred_immediate_assert_statement = 230,
      slDeferred_immediate_assertion_item = 231,
      slDeferred_immediate_assertion_statement = 232,
      slDeferred_immediate_assume_statement = 233,
      slDeferred_immediate_cover_statement = 234,
      slDefparam_assignment = 235,
      slDelay2 = 236,
      slDelay3 = 237,
      slDelay_control = 238,
      slDelay_mode_distributed_directive = 239,
      slDelay_mode_path_directive = 240,
      slDelay_mode_unit_directive = 241,
      slDelay_mode_zero_directive = 242,
      slDelay_or_event_control = 243,
      slDelay_value = 244,
      slDelayed_data = 245,
      slDelayed_reference = 246,
      slDescription = 247,
      slDesign_statement = 248,
      slDisable_portfaults_directive = 249,
      slDisable_statement = 250,
      slDist_item = 251,
      slDist_list = 252,
      slDistWeight_AssignRange = 253,
      slDistWeight_AssignValue = 254,
      slDollar_fullskew_timing_check = 255,
      slDollar_hold_timing_check = 256,
      slDollar_keyword = 257,
      slDollar_nochange_timing_check = 258,
      slDollar_period_timing_check = 259,
      slDollar_recovery_timing_check = 260,
      slDollar_recrem_timing_check = 261,
      slDollar_removal_timing_check = 262,
      slDollar_root_keyword = 263,
      slDollar_setup_timing_check = 264,
      slDollar_setuphold_timing_check = 265,
      slDollar_skew_timing_check = 266,
      slDollar_timeskew_timing_check = 267,
      slDollar_width_timing_check = 268,
      slDpi_import_export = 269,
      slDrive_strength = 270,
      slDynamic_array_new = 271,
      slEdge_control_specifier = 272,
      slEdge_descriptor = 273,
      slEdge_Edge = 274,
      slEdge_indicator = 275,
      slEdge_input_list = 276,
      slEdge_Negedge = 277,
      slEdge_Posedge = 278,
      slEdge_sensitive_path_declaration = 279,
      slEdge_symbol = 280,
      slElaboration_system_task = 281,
      slEmpty_queue = 282,
      slEnable_gate_instance = 283,
      slEnable_portfaults_directive = 284,
      slEnableGateType_Bufif0 = 285,
      slEnableGateType_Bufif1 = 286,
      slEnableGateType_Notif0 = 287,
      slEnableGateType_Notif1 = 288,
      slEnd = 289,
      slEnd_edge_offset = 290,
      slEndcase = 291,
      slEndcelldefine_directive = 292,
      slEndchecker = 293,
      slEndclass = 294,
      slEndclocking = 295,
      slEndconfig = 296,
      slEndfunction = 297,
      slEndgenerate = 298,
      slEndgroup = 299,
      slEndinterface = 300,
      slEndmodule = 301,
      slEndpackage = 302,
      slEndprimitive = 303,
      slEndprogram = 304,
      slEndproperty = 305,
      slEndprotect_directive = 306,
      slEndprotected_directive = 307,
      slEndsequence = 308,
      slEndspecify = 309,
      slEndtable = 310,
      slEndtask = 311,
      slEnum_base_type = 312,
      slEnum_keyword = 313,
      slEnum_name_declaration = 314,
      slEvent_based_flag = 315,
      slEvent_control = 316,
      slEvent_expression = 317,
      slEvent_trigger = 318,
      slEvent_type = 319,
      slExpand_vectornets_directive = 320,
      slExpect_property_statement = 321,
      slExpression = 322,
      slExpression_or_cond_pattern = 323,
      slExpression_or_dist = 324,
      slExtern_constraint_declaration = 325,
      slExtern_qualifier = 326,
      slExtern_tf_declaration = 327,
      slFinal_construct = 328,
      slFor_initialization = 329,
      slFor_step = 330,
      slFor_step_assignment = 331,
      slFor_variable_declaration = 332,
      slForever_keyword = 333,
      slFormal_list_item = 334,
      slFull_edge_sensitive_path_description = 335,
      slFull_path_description = 336,
      slFunction_body_declaration = 337,
      slFunction_data_type = 338,
      slFunction_data_type_or_implicit = 339,
      slFunction_declaration = 340,
      slFunction_name_decl = 341,
      slFunction_prototype = 342,
      slFunction_statement_or_null = 343,
      slGate_instantiation = 344,
      slGenerate_block = 345,
      slGenerate_interface_block = 346,
      slGenerate_interface_case_statement = 347,
      slGenerate_interface_conditional_statement = 348,
      slGenerate_interface_item = 349,
      slGenerate_interface_loop_statement = 350,
      slGenerate_interface_named_block = 351,
      slGenerate_item = 352,
      slGenerate_module_block = 353,
      slGenerate_module_case_statement = 354,
      slGenerate_module_conditional_statement = 355,
      slGenerate_module_item = 356,
      slGenerate_module_loop_statement = 357,
      slGenerate_module_named_block = 358,
      slGenerate_region = 359,
      slGenerated_interface_instantiation = 360,
      slGenerated_module_instantiation = 361,
      slGenericElementType = 362,
      slGenvar_assignment = 363,
      slGenvar_decl_assignment = 364,
      slGenvar_declaration = 365,
      slGenvar_initialization = 366,
      slGenvar_interface_case_item = 367,
      slGenvar_iteration = 368,
      slGenvar_module_case_item = 369,
      slGoto_repetition = 370,
      slHierarchical_btf_identifier = 371,
      slHierarchical_identifier = 372,
      slHierarchical_instance = 373,
      slIdentifier_list = 374,
      slIf_generate_construct = 375,
      slImmediate_assertion_statement = 376,
      slImplicit_class_handle = 377,
      slImplicit_data_type = 378,
      slInc_or_dec_expression = 379,
      slIncDec_MinusMinus = 380,
      slIncDec_PlusPlus = 381,
      slInclude_statement = 382,
      slIndexed_range = 383,
      slInitial_construct = 384,
      slInitVal_1TickB0 = 385,
      slInitVal_1Tickb0 = 386,
      slInitVal_1TickB1 = 387,
      slInitVal_1Tickb1 = 388,
      slInitVal_1TickBX = 389,
      slInitVal_1TickBx = 390,
      slInitVal_1TickbX = 391,
      slInitVal_1Tickbx = 392,
      slInitVal_Integral = 393,
      slInout_declaration = 394,
      slInput_declaration = 395,
      slInst_clause = 396,
      slInst_name = 397,
      slIntConst = 398,
      slInteger_type = 399,
      slIntegerAtomType_Byte = 400,
      slIntegerAtomType_Int = 401,
      slIntegerAtomType_LongInt = 402,
      slIntegerAtomType_Shortint = 403,
      slIntegerAtomType_Time = 404,
      slInterface = 405,
      slInterface_ansi_header = 406,
      slInterface_class_declaration = 407,
      slInterface_class_item = 408,
      slInterface_class_keyword = 409,
      slInterface_class_method = 410,
      slInterface_class_type = 411,
      slInterface_declaration = 412,
      slInterface_identifier = 413,
      slInterface_instantiation = 414,
      slInterface_item = 415,
      slInterface_nonansi_header = 416,
      slInterface_or_generate_item = 417,
      slInterface_port_declaration = 418,
      slInterface_port_header = 419,
      slIntVec_TypeBit = 420,
      slIntVec_TypeLogic = 421,
      slIntVec_TypeReg = 422,
      slJoin_any_keyword = 423,
      slJoin_keyword = 424,
      slJoin_none_keyword = 425,
      slJump_statement = 426,
      slLet_declaration = 427,
      slLet_formal_type = 428,
      slLet_port_item = 429,
      slLet_port_list = 430,
      slLevel_input_list = 431,
      slLevel_symbol = 432,
      slLiblist_clause = 433,
      slLibrary_declaration = 434,
      slLibrary_descriptions = 435,
      slLibrary_text = 436,
      slLifetime_Automatic = 437,
      slLifetime_Static = 438,
      slList_of_arguments = 439,
      slList_of_checker_port_connections = 440,
      slList_of_clocking_decl_assign = 441,
      slList_of_cross_items = 442,
      slList_of_defparam_assignments = 443,
      slList_of_formals = 444,
      slList_of_interface_identifiers = 445,
      slList_of_net_assignments = 446,
      slList_of_net_decl_assignments = 447,
      slList_of_param_assignments = 448,
      slList_of_parameter_assignments = 449,
      slList_of_path_delay_expressions = 450,
      slList_of_path_inputs = 451,
      slList_of_path_outputs = 452,
      slList_of_port_connections = 453,
      slList_of_port_declarations = 454,
      slList_of_port_identifiers = 455,
      slList_of_ports = 456,
      slList_of_specparam_assignments = 457,
      slList_of_tf_variable_identifiers = 458,
      slList_of_type_assignments = 459,
      slList_of_variable_assignments = 460,
      slList_of_variable_decl_assignments = 461,
      slList_of_variable_identifiers = 462,
      slList_of_variable_port_identifiers = 463,
      slList_of_virtual_interface_decl = 464,
      slLocal_parameter_declaration = 465,
      slLoop_generate_construct = 466,
      slLoop_statement = 467,
      slLoop_variables = 468,
      slMethod_call = 469,
      slMethod_call_body = 470,
      slMethod_call_root = 471,
      slMethod_prototype = 472,
      slMethodQualifier_ClassItem = 473,
      slMethodQualifier_Virtual = 474,
      slMintypmax_expression = 475,
      slModport_hierarchical_ports_declaration = 476,
      slModport_item = 477,
      slModport_ports_declaration = 478,
      slModport_simple_port = 479,
      slModport_simple_ports_declaration = 480,
      slModport_tf_port = 481,
      slModport_tf_ports_declaration = 482,
      slModule = 483,
      slModule_ansi_header = 484,
      slModule_common_item = 485,
      slModule_declaration = 486,
      slModule_instantiation = 487,
      slModule_item = 488,
      slModule_keyword = 489,
      slModule_nonansi_header = 490,
      slModule_or_generate_item = 491,
      slModule_or_generate_item_declaration = 492,
      slModule_path_concatenation = 493,
      slModule_path_expression = 494,
      slModule_path_mintypmax_expression = 495,
      slModule_path_multiple_concatenation = 496,
      slModule_path_primary = 497,
      slModuleInstance = 498,
      slMos_switch_instance = 499,
      slMosSwitchType_NMos = 500,
      slMosSwitchType_PMos = 501,
      slMosSwitchType_RNMos = 502,
      slMosSwitchType_RPMos = 503,
      slMultiple_concatenation = 504,
      slN_input_gate_instance = 505,
      slN_output_gate_instance = 506,
      slName_of_instance = 507,
      slNamed_checker_port_connection = 508,
      slNamed_parameter_assignment = 509,
      slNamed_port_connection = 510,
      slNet_alias = 511,
      slNet_assignment = 512,
      slNet_decl_assignment = 513,
      slNet_declaration = 514,
      slNet_lvalue = 515,
      slNet_port_header = 516,
      slNet_port_type = 517,
      slNet_type_declaration = 518,
      slNetType_Supply0 = 519,
      slNetType_Supply1 = 520,
      slNetType_Tri = 521,
      slNetType_Tri0 = 522,
      slNetType_Tri1 = 523,
      slNetType_TriAnd = 524,
      slNetType_TriOr = 525,
      slNetType_TriReg = 526,
      slNetType_Uwire = 527,
      slNetType_Wand = 528,
      slNetType_Wire = 529,
      slNetType_Wor = 530,
      slNext_state = 531,
      slNInpGate_And = 532,
      slNInpGate_Nand = 533,
      slNInpGate_Nor = 534,
      slNInpGate_Or = 535,
      slNInpGate_Xnor = 536,
      slNInpGate_Xor = 537,
      slNoaccelerate_directive = 538,
      slNoexpand_vectornets_directive = 539,
      slNon_consecutive_repetition = 540,
      slNon_port_interface_item = 541,
      slNon_port_module_item = 542,
      slNon_port_program_item = 543,
      slNonblocking_assignment = 544,
      slNonIntType_Real = 545,
      slNonIntType_RealTime = 546,
      slNonIntType_ShortReal = 547,
      slNonrange_select = 548,
      slNonrange_variable_lvalue = 549,
      slNoremove_gatenames_directive = 550,
      slNoremove_netnames_directive = 551,
      slNosuppress_faults_directive = 552,
      slNotifier = 553,
      slNoType = 554,
      slNounconnected_drive_directive = 555,
      slNOutGate_Buf = 556,
      slNOutGate_Not = 557,
      slNull_keyword = 558,
      slNull_rule = 559,
      slNumber_1TickB0 = 560,
      slNumber_1Tickb0 = 561,
      slNumber_1TickB1 = 562,
      slNumber_1Tickb1 = 563,
      slNumber_1TickBX = 564,
      slNumber_1TickBx = 565,
      slNumber_1TickbX = 566,
      slNumber_1Tickbx = 567,
      slNumber_Tick0 = 568,
      slNumber_Tick1 = 569,
      slNumber_TickB0 = 570,
      slNumber_Tickb0 = 571,
      slNumber_TickB1 = 572,
      slNumber_Tickb1 = 573,
      slOpen_range_list = 574,
      slOperator_assignment = 575,
      slOr_call = 576,
      slOrdered_checker_port_connection = 577,
      slOrdered_parameter_assignment = 578,
      slOrdered_port_connection = 579,
      slOutput_declaration = 580,
      slOutput_symbol = 581,
      slOverload_declaration = 582,
      slOverload_proto_formals = 583,
      slOverloadOp_Div = 584,
      slOverloadOp_Equal = 585,
      slOverloadOp_Equiv = 586,
      slOverloadOp_Greater = 587,
      slOverloadOp_GreaterEqual = 588,
      slOverloadOp_Less = 589,
      slOverloadOp_LessEqual = 590,
      slOverloadOp_Minus = 591,
      slOverloadOp_MinusMinus = 592,
      slOverloadOp_Mult = 593,
      slOverloadOp_NotEqual = 594,
      slOverloadOp_Percent = 595,
      slOverloadOp_Plus = 596,
      slOverloadOp_PlusPlus = 597,
      slOverloadOp_StarStar = 598,
      slPackage = 599,
      slPackage_declaration = 600,
      slPackage_export_declaration = 601,
      slPackage_import_declaration = 602,
      slPackage_import_item = 603,
      slPackage_item = 604,
      slPackage_or_generate_item_declaration = 605,
      slPacked_dimension = 606,
      slPacked_keyword = 607,
      slPar_block = 608,
      slParallel_edge_sensitive_path_description = 609,
      slParallel_path_description = 610,
      slParam_assignment = 611,
      slParam_expression = 612,
      slParameter_declaration = 613,
      slParameter_override = 614,
      slParameter_port_declaration = 615,
      slParameter_port_list = 616,
      slParameter_value_assignment = 617,
      slPart_select_range = 618,
      slPass_enable_switch_instance = 619,
      slPass_switch_instance = 620,
      slPassEnSwitch_RTranif0 = 621,
      slPassEnSwitch_RTranif1 = 622,
      slPassEnSwitch_Tranif0 = 623,
      slPassEnSwitch_Tranif1 = 624,
      slPassSwitch_RTran = 625,
      slPassSwitch_Tran = 626,
      slPath_declaration = 627,
      slPath_delay_expression = 628,
      slPath_delay_value = 629,
      slPattern = 630,
      slPort = 631,
      slPort_declaration = 632,
      slPort_expression = 633,
      slPort_reference = 634,
      slPortDir_Inout = 635,
      slPortDir_Inp = 636,
      slPortDir_Out = 637,
      slPortDir_Ref = 638,
      slPortInst = 639,
      slPound_delay_value = 640,
      slPragma_directive = 641,
      slPragma_expression = 642,
      slPragma_value = 643,
      slPrimary = 644,
      slPrimary_literal = 645,
      slPrimitive = 646,
      slPrimitiveInstance = 647,
      slProcedural_assertion_statement = 648,
      slProcedural_continuous_assignment = 649,
      slProcedural_timing_control = 650,
      slProcedural_timing_control_statement = 651,
      slProduction = 652,
      slProduction_item = 653,
      slProgram = 654,
      slProgram_ansi_header = 655,
      slProgram_declaration = 656,
      slProgram_generate_item = 657,
      slProgram_instantiation = 658,
      slProgram_item = 659,
      slProgram_nonansi_header = 660,
      slProperty_actual_arg = 661,
      slProperty_case_item = 662,
      slProperty_declaration = 663,
      slProperty_expr = 664,
      slProperty_formal_type = 665,
      slProperty_instance = 666,
      slProperty_spec = 667,
      slPropQualifier_ClassItem = 668,
      slPropQualifier_Rand = 669,
      slPropQualifier_Randc = 670,
      slProtect_directive = 671,
      slProtected_directive = 672,
      slPs_identifier = 673,
      slPs_or_hierarchical_array_identifier = 674,
      slPs_or_hierarchical_identifier = 675,
      slPs_or_hierarchical_sequence_identifier = 676,
      slPs_type_identifier = 677,
      slPull_gate_instance = 678,
      slPulldownStrength_0 = 679,
      slPulldownStrength_01 = 680,
      slPulldownStrength_10 = 681,
      slPullupStrength_1 = 682,
      slPullupStrength_01 = 683,
      slPullupStrength_10 = 684,
      slPulse_control_specparam = 685,
      slPulsestyle_declaration = 686,
      slPure_keyword = 687,
      slPure_virtual_qualifier = 688,
      slQueue_dimension = 689,
      slRandcase_item = 690,
      slRandcase_statement = 691,
      slRandomize_call = 692,
      slRandomQualifier_Rand = 693,
      slRandomQualifier_RandC = 694,
      slRandsequence_statement = 695,
      slRange_expression = 696,
      slRange_list = 697,
      slRealConst = 698,
      slRef_declaration = 699,
      slReference_event = 700,
      slRemain_active_flag = 701,
      slRemove_gatename_directive = 702,
      slRemove_netname_directive = 703,
      slRepeat_keyword = 704,
      slRepeat_range = 705,
      slRestrict_property_statement = 706,
      slRs_case = 707,
      slRs_case_item = 708,
      slRs_code_block = 709,
      slRs_if_else = 710,
      slRs_prod = 711,
      slRs_production_list = 712,
      slRs_repeat = 713,
      slRs_rule = 714,
      slScalar_1TickB0 = 715,
      slScalar_1Tickb0 = 716,
      slScalar_1TickB1 = 717,
      slScalar_1Tickb1 = 718,
      slScalar_Integral = 719,
      slScalar_TickB0 = 720,
      slScalar_Tickb0 = 721,
      slScalar_TickB1 = 722,
      slScalar_Tickb1 = 723,
      slScalar_timing_check_condition = 724,
      slSelect = 725,
      slSelect_condition = 726,
      slSelect_expression = 727,
      slSeq_block = 728,
      slSeq_input_list = 729,
      slSeqFormatType_Data = 730,
      slSeqFormatType_Sequence = 731,
      slSeqFormatType_Untyped = 732,
      slSequence_actual_arg = 733,
      slSequence_declaration = 734,
      slSequence_expr = 735,
      slSequence_instance = 736,
      slSequence_list_of_arguments = 737,
      slSequence_match_item = 738,
      slSequence_method_call = 739,
      slSequential_body = 740,
      slSequential_entry = 741,
      slShowcancelled_declaration = 742,
      slSigned_directive = 743,
      slSigning_Signed = 744,
      slSigning_Unsigned = 745,
      slSimple_immediate_assert_statement = 746,
      slSimple_immediate_assertion_statement = 747,
      slSimple_immediate_assume_statement = 748,
      slSimple_immediate_cover_statement = 749,
      slSimple_path_declaration = 750,
      slSimple_type = 751,
      slSlice_size = 752,
      slSolve_before_list = 753,
      slSource_text = 754,
      slSpecify_block = 755,
      slSpecify_input_terminal_descriptor = 756,
      slSpecify_item = 757,
      slSpecify_output_terminal_descriptor = 758,
      slSpecify_terminal_descriptor = 759,
      slSpecparam_assignment = 760,
      slSpecparam_declaration = 761,
      slStamptime_condition = 762,
      slStart_edge_offset = 763,
      slState_dependent_path_declaration = 764,
      slStatement = 765,
      slStatement_item = 766,
      slStatement_or_null = 767,
      slStream_concatenation = 768,
      slStream_expression = 769,
      slStream_operator = 770,
      slStreaming_concatenation = 771,
      slStrength0_Pull0 = 772,
      slStrength0_Strong0 = 773,
      slStrength0_Supply0 = 774,
      slStrength0_Weak0 = 775,
      slStrength1_Pull1 = 776,
      slStrength1_Strong1 = 777,
      slStrength1_Supply1 = 778,
      slStrength1_Weak1 = 779,
      slString_type = 780,
      slStringConst = 781,
      slStringLiteral = 782,
      slStruct_keyword = 783,
      slStruct_union = 784,
      slStruct_union_member = 785,
      slStructure_pattern_key = 786,
      slSubroutine_call = 787,
      slSubroutine_call_statement = 788,
      slSuper_dot_new = 789,
      slSuper_keyword = 790,
      slSuppress_faults_directive = 791,
      slSurelog_macro_not_defined = 792,
      slSystem_task = 793,
      slSystem_task_names = 794,
      slSystem_timing_check = 795,
      slT0x_path_delay_expression = 796,
      slT0z_path_delay_expression = 797,
      slT01_path_delay_expression = 798,
      slT1x_path_delay_expression = 799,
      slT1z_path_delay_expression = 800,
      slT10_path_delay_expression = 801,
      slT_path_delay_expression = 802,
      slTagged_keyword = 803,
      slTagged_union_expression = 804,
      slTask_body_declaration = 805,
      slTask_declaration = 806,
      slTask_name_decl = 807,
      slTask_prototype = 808,
      slTf_item_declaration = 809,
      slTf_port_declaration = 810,
      slTf_port_item = 811,
      slTf_port_list = 812,
      slTfall_path_delay_expression = 813,
      slTfPortDir_ConstRef = 814,
      slTfPortDir_Inout = 815,
      slTfPortDir_Inp = 816,
      slTfPortDir_Out = 817,
      slTfPortDir_Ref = 818,
      slThis = 819,
      slThis_dot_super = 820,
      slThis_keyword = 821,
      slThreshold = 822,
      slTime_literal = 823,
      slTime_unit = 824,
      slTimescale_directive = 825,
      slTimeUnitsDecl_TimePrecision = 826,
      slTimeUnitsDecl_TimePrecisionTimeUnit = 827,
      slTimeUnitsDecl_TimeUnit = 828,
      slTimeUnitsDecl_TimeUnitDiv = 829,
      slTimeUnitsDecl_TimeUnitTimePrecision = 830,
      slTiming_check_condition = 831,
      slTiming_check_event = 832,
      slTiming_check_limit = 833,
      slTimingCheckEventControl_Edge = 834,
      slTimingCheckEventControl_Negedge = 835,
      slTimingCheckEventControl_Posedge = 836,
      slTop_directives = 837,
      slTop_level_library_rule = 838,
      slTop_level_rule = 839,
      slTrans_list = 840,
      slTrans_range_list = 841,
      slTrans_set = 842,
      slTrise_path_delay_expression = 843,
      slTx0_path_delay_expression = 844,
      slTx1_path_delay_expression = 845,
      slTxz_path_delay_expression = 846,
      slType_declaration = 847,
      slType_reference = 848,
      slTz0_path_delay_expression = 849,
      slTz1_path_delay_expression = 850,
      slTz_path_delay_expression = 851,
      slTzx_path_delay_expression = 852,
      slUdp_ansi_declaration = 853,
      slUdp_body = 854,
      slUdp_declaration = 855,
      slUdp_declaration_port_list = 856,
      slUdp_initial_statement = 857,
      slUdp_input_declaration = 858,
      slUdp_instance = 859,
      slUdp_instantiation = 860,
      slUdp_nonansi_declaration = 861,
      slUdp_output_declaration = 862,
      slUdp_port_declaration = 863,
      slUdp_port_list = 864,
      slUdp_reg_declaration = 865,
      slUnary_BitwAnd = 866,
      slUnary_BitwOr = 867,
      slUnary_BitwXor = 868,
      slUnary_Minus = 869,
      slUnary_Not = 870,
      slUnary_Plus = 871,
      slUnary_ReductNand = 872,
      slUnary_ReductNor = 873,
      slUnary_ReductXnor1 = 874,
      slUnary_ReductXnor2 = 875,
      slUnary_Tilda = 876,
      slUnaryModOp_BitwAnd = 877,
      slUnaryModOp_BitwOr = 878,
      slUnaryModOp_BitwXor = 879,
      slUnaryModOp_Not = 880,
      slUnaryModOp_ReductNand = 881,
      slUnaryModOp_ReductNor = 882,
      slUnaryModOp_ReductXNor1 = 883,
      slUnaryModOp_ReductXnor2 = 884,
      slUnaryModOp_Tilda = 885,
      slUnconnected_drive_directive = 886,
      slUnion_keyword = 887,
      slUnique_call = 888,
      slUnique_priority = 889,
      slUniqueness_constraint = 890,
      slUnpacked_dimension = 891,
      slUnsigned_directive = 892,
      slUnsized_dimension = 893,
      slUse_clause = 894,
      slUse_clause_config = 895,
      slUselib_directive = 896,
      slValue_range = 897,
      slVar_data_type = 898,
      slVariable_assignment = 899,
      slVariable_decl_assignment = 900,
      slVariable_declaration = 901,
      slVariable_dimension = 902,
      slVariable_lvalue = 903,
      slVariable_port_header = 904,
      slVariable_port_type = 905,
      slVirtual_interface_declaration = 906,
      slWait_statement = 907,
      slWhile_keyword = 908,
      slX = 909,
      slXor_call = 910,
      slZ = 911,
} VObjectType;

#endif /* VOBJECTTYPES_H */

