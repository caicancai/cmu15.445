/* A Bison parser, made by GNU Bison 2.3.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C

   Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2, or (at your option)
   any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 51 Franklin Street, Fifth Floor,
   Boston, MA 02110-1301, USA.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "2.3"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 1

/* Using locations.  */
#define YYLSP_NEEDED 1

/* Substitute the variable and function names.  */
#define yyparse base_yyparse
#define yylex   base_yylex
#define yyerror base_yyerror
#define yylval  base_yylval
#define yychar  base_yychar
#define yydebug base_yydebug
#define yynerrs base_yynerrs
#define yylloc base_yylloc

/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     IDENT = 258,
     FCONST = 259,
     SCONST = 260,
     BCONST = 261,
     XCONST = 262,
     Op = 263,
     ICONST = 264,
     PARAM = 265,
     TYPECAST = 266,
     DOT_DOT = 267,
     COLON_EQUALS = 268,
     EQUALS_GREATER = 269,
     POWER_OF = 270,
     LAMBDA_ARROW = 271,
     DOUBLE_ARROW = 272,
     LESS_EQUALS = 273,
     GREATER_EQUALS = 274,
     NOT_EQUALS = 275,
     ABORT_P = 276,
     ABSOLUTE_P = 277,
     ACCESS = 278,
     ACTION = 279,
     ADD_P = 280,
     ADMIN = 281,
     AFTER = 282,
     AGGREGATE = 283,
     ALL = 284,
     ALSO = 285,
     ALTER = 286,
     ALWAYS = 287,
     ANALYSE = 288,
     ANALYZE = 289,
     AND = 290,
     ANY = 291,
     ARRAY = 292,
     AS = 293,
     ASC_P = 294,
     ASSERTION = 295,
     ASSIGNMENT = 296,
     ASYMMETRIC = 297,
     AT = 298,
     ATTACH = 299,
     ATTRIBUTE = 300,
     AUTHORIZATION = 301,
     BACKWARD = 302,
     BEFORE = 303,
     BEGIN_P = 304,
     BETWEEN = 305,
     BIGINT = 306,
     BINARY = 307,
     BIT = 308,
     BOOLEAN_P = 309,
     BOTH = 310,
     BY = 311,
     CACHE = 312,
     CALL_P = 313,
     CALLED = 314,
     CASCADE = 315,
     CASCADED = 316,
     CASE = 317,
     CAST = 318,
     CATALOG_P = 319,
     CHAIN = 320,
     CHAR_P = 321,
     CHARACTER = 322,
     CHARACTERISTICS = 323,
     CHECK_P = 324,
     CHECKPOINT = 325,
     CLASS = 326,
     CLOSE = 327,
     CLUSTER = 328,
     COALESCE = 329,
     COLLATE = 330,
     COLLATION = 331,
     COLUMN = 332,
     COLUMNS = 333,
     COMMENT = 334,
     COMMENTS = 335,
     COMMIT = 336,
     COMMITTED = 337,
     COMPRESSION = 338,
     CONCURRENTLY = 339,
     CONFIGURATION = 340,
     CONFLICT = 341,
     CONNECTION = 342,
     CONSTRAINT = 343,
     CONSTRAINTS = 344,
     CONTENT_P = 345,
     CONTINUE_P = 346,
     CONVERSION_P = 347,
     COPY = 348,
     COST = 349,
     CREATE_P = 350,
     CROSS = 351,
     CSV = 352,
     CUBE = 353,
     CURRENT_P = 354,
     CURRENT_CATALOG = 355,
     CURRENT_DATE = 356,
     CURRENT_ROLE = 357,
     CURRENT_SCHEMA = 358,
     CURRENT_TIME = 359,
     CURRENT_TIMESTAMP = 360,
     CURRENT_USER = 361,
     CURSOR = 362,
     CYCLE = 363,
     DATA_P = 364,
     DATABASE = 365,
     DAY_P = 366,
     DAYS_P = 367,
     DEALLOCATE = 368,
     DEC = 369,
     DECIMAL_P = 370,
     DECLARE = 371,
     DEFAULT = 372,
     DEFAULTS = 373,
     DEFERRABLE = 374,
     DEFERRED = 375,
     DEFINER = 376,
     DELETE_P = 377,
     DELIMITER = 378,
     DELIMITERS = 379,
     DEPENDS = 380,
     DESC_P = 381,
     DESCRIBE = 382,
     DETACH = 383,
     DICTIONARY = 384,
     DISABLE_P = 385,
     DISCARD = 386,
     DISTINCT = 387,
     DO = 388,
     DOCUMENT_P = 389,
     DOMAIN_P = 390,
     DOUBLE_P = 391,
     DROP = 392,
     EACH = 393,
     ELSE = 394,
     ENABLE_P = 395,
     ENCODING = 396,
     ENCRYPTED = 397,
     END_P = 398,
     ENUM_P = 399,
     ESCAPE = 400,
     EVENT = 401,
     EXCEPT = 402,
     EXCLUDE = 403,
     EXCLUDING = 404,
     EXCLUSIVE = 405,
     EXECUTE = 406,
     EXISTS = 407,
     EXPLAIN = 408,
     EXPORT_P = 409,
     EXPORT_STATE = 410,
     EXTENSION = 411,
     EXTERNAL = 412,
     EXTRACT = 413,
     FALSE_P = 414,
     FAMILY = 415,
     FETCH = 416,
     FILTER = 417,
     FIRST_P = 418,
     FLOAT_P = 419,
     FOLLOWING = 420,
     FOR = 421,
     FORCE = 422,
     FOREIGN = 423,
     FORWARD = 424,
     FREEZE = 425,
     FROM = 426,
     FULL = 427,
     FUNCTION = 428,
     FUNCTIONS = 429,
     GENERATED = 430,
     GLOB = 431,
     GLOBAL = 432,
     GRANT = 433,
     GRANTED = 434,
     GROUP_P = 435,
     GROUPING = 436,
     GROUPING_ID = 437,
     HANDLER = 438,
     HAVING = 439,
     HEADER_P = 440,
     HOLD = 441,
     HOUR_P = 442,
     HOURS_P = 443,
     IDENTITY_P = 444,
     IF_P = 445,
     IGNORE_P = 446,
     ILIKE = 447,
     IMMEDIATE = 448,
     IMMUTABLE = 449,
     IMPLICIT_P = 450,
     IMPORT_P = 451,
     IN_P = 452,
     INCLUDING = 453,
     INCREMENT = 454,
     INDEX = 455,
     INDEXES = 456,
     INHERIT = 457,
     INHERITS = 458,
     INITIALLY = 459,
     INLINE_P = 460,
     INNER_P = 461,
     INOUT = 462,
     INPUT_P = 463,
     INSENSITIVE = 464,
     INSERT = 465,
     INSTALL = 466,
     INSTEAD = 467,
     INT_P = 468,
     INTEGER = 469,
     INTERSECT = 470,
     INTERVAL = 471,
     INTO = 472,
     INVOKER = 473,
     IS = 474,
     ISNULL = 475,
     ISOLATION = 476,
     JOIN = 477,
     JSON = 478,
     KEY = 479,
     LABEL = 480,
     LANGUAGE = 481,
     LARGE_P = 482,
     LAST_P = 483,
     LATERAL_P = 484,
     LEADING = 485,
     LEAKPROOF = 486,
     LEFT = 487,
     LEVEL = 488,
     LIKE = 489,
     LIMIT = 490,
     LISTEN = 491,
     LOAD = 492,
     LOCAL = 493,
     LOCALTIME = 494,
     LOCALTIMESTAMP = 495,
     LOCATION = 496,
     LOCK_P = 497,
     LOCKED = 498,
     LOGGED = 499,
     MACRO = 500,
     MAP = 501,
     MAPPING = 502,
     MATCH = 503,
     MATERIALIZED = 504,
     MAXVALUE = 505,
     METHOD = 506,
     MICROSECOND_P = 507,
     MICROSECONDS_P = 508,
     MILLISECOND_P = 509,
     MILLISECONDS_P = 510,
     MINUTE_P = 511,
     MINUTES_P = 512,
     MINVALUE = 513,
     MODE = 514,
     MONTH_P = 515,
     MONTHS_P = 516,
     MOVE = 517,
     NAME_P = 518,
     NAMES = 519,
     NATIONAL = 520,
     NATURAL = 521,
     NCHAR = 522,
     NEW = 523,
     NEXT = 524,
     NO = 525,
     NONE = 526,
     NOT = 527,
     NOTHING = 528,
     NOTIFY = 529,
     NOTNULL = 530,
     NOWAIT = 531,
     NULL_P = 532,
     NULLIF = 533,
     NULLS_P = 534,
     NUMERIC = 535,
     OBJECT_P = 536,
     OF = 537,
     OFF = 538,
     OFFSET = 539,
     OIDS = 540,
     OLD = 541,
     ON = 542,
     ONLY = 543,
     OPERATOR = 544,
     OPTION = 545,
     OPTIONS = 546,
     OR = 547,
     ORDER = 548,
     ORDINALITY = 549,
     OUT_P = 550,
     OUTER_P = 551,
     OVER = 552,
     OVERLAPS = 553,
     OVERLAY = 554,
     OVERRIDING = 555,
     OWNED = 556,
     OWNER = 557,
     PARALLEL = 558,
     PARSER = 559,
     PARTIAL = 560,
     PARTITION = 561,
     PASSING = 562,
     PASSWORD = 563,
     PERCENT = 564,
     PLACING = 565,
     PLANS = 566,
     POLICY = 567,
     POSITION = 568,
     PRAGMA_P = 569,
     PRECEDING = 570,
     PRECISION = 571,
     PREPARE = 572,
     PREPARED = 573,
     PRESERVE = 574,
     PRIMARY = 575,
     PRIOR = 576,
     PRIVILEGES = 577,
     PROCEDURAL = 578,
     PROCEDURE = 579,
     PROGRAM = 580,
     PUBLICATION = 581,
     QUALIFY = 582,
     QUOTE = 583,
     RANGE = 584,
     READ_P = 585,
     REAL = 586,
     REASSIGN = 587,
     RECHECK = 588,
     RECURSIVE = 589,
     REF = 590,
     REFERENCES = 591,
     REFERENCING = 592,
     REFRESH = 593,
     REINDEX = 594,
     RELATIVE_P = 595,
     RELEASE = 596,
     RENAME = 597,
     REPEATABLE = 598,
     REPLACE = 599,
     REPLICA = 600,
     RESET = 601,
     RESPECT_P = 602,
     RESTART = 603,
     RESTRICT = 604,
     RETURNING = 605,
     RETURNS = 606,
     REVOKE = 607,
     RIGHT = 608,
     ROLE = 609,
     ROLLBACK = 610,
     ROLLUP = 611,
     ROW = 612,
     ROWS = 613,
     RULE = 614,
     SAMPLE = 615,
     SAVEPOINT = 616,
     SCHEMA = 617,
     SCHEMAS = 618,
     SCROLL = 619,
     SEARCH = 620,
     SECOND_P = 621,
     SECONDS_P = 622,
     SECURITY = 623,
     SELECT = 624,
     SEQUENCE = 625,
     SEQUENCES = 626,
     SERIALIZABLE = 627,
     SERVER = 628,
     SESSION = 629,
     SESSION_USER = 630,
     SET = 631,
     SETOF = 632,
     SETS = 633,
     SHARE = 634,
     SHOW = 635,
     SIMILAR = 636,
     SIMPLE = 637,
     SKIP = 638,
     SMALLINT = 639,
     SNAPSHOT = 640,
     SOME = 641,
     SQL_P = 642,
     STABLE = 643,
     STANDALONE_P = 644,
     START = 645,
     STATEMENT = 646,
     STATISTICS = 647,
     STDIN = 648,
     STDOUT = 649,
     STORAGE = 650,
     STORED = 651,
     STRICT_P = 652,
     STRIP_P = 653,
     STRUCT = 654,
     SUBSCRIPTION = 655,
     SUBSTRING = 656,
     SUMMARIZE = 657,
     SYMMETRIC = 658,
     SYSID = 659,
     SYSTEM_P = 660,
     TABLE = 661,
     TABLES = 662,
     TABLESAMPLE = 663,
     TABLESPACE = 664,
     TEMP = 665,
     TEMPLATE = 666,
     TEMPORARY = 667,
     TEXT_P = 668,
     THEN = 669,
     TIME = 670,
     TIMESTAMP = 671,
     TO = 672,
     TRAILING = 673,
     TRANSACTION = 674,
     TRANSFORM = 675,
     TREAT = 676,
     TRIGGER = 677,
     TRIM = 678,
     TRUE_P = 679,
     TRUNCATE = 680,
     TRUSTED = 681,
     TRY_CAST = 682,
     TYPE_P = 683,
     TYPES_P = 684,
     UNBOUNDED = 685,
     UNCOMMITTED = 686,
     UNENCRYPTED = 687,
     UNION = 688,
     UNIQUE = 689,
     UNKNOWN = 690,
     UNLISTEN = 691,
     UNLOGGED = 692,
     UNTIL = 693,
     UPDATE = 694,
     USER = 695,
     USING = 696,
     VACUUM = 697,
     VALID = 698,
     VALIDATE = 699,
     VALIDATOR = 700,
     VALUE_P = 701,
     VALUES = 702,
     VARCHAR = 703,
     VARIADIC = 704,
     VARYING = 705,
     VERBOSE = 706,
     VERSION_P = 707,
     VIEW = 708,
     VIEWS = 709,
     VIRTUAL = 710,
     VOLATILE = 711,
     WHEN = 712,
     WHERE = 713,
     WHITESPACE_P = 714,
     WINDOW = 715,
     WITH = 716,
     WITHIN = 717,
     WITHOUT = 718,
     WORK = 719,
     WRAPPER = 720,
     WRITE_P = 721,
     XML_P = 722,
     XMLATTRIBUTES = 723,
     XMLCONCAT = 724,
     XMLELEMENT = 725,
     XMLEXISTS = 726,
     XMLFOREST = 727,
     XMLNAMESPACES = 728,
     XMLPARSE = 729,
     XMLPI = 730,
     XMLROOT = 731,
     XMLSERIALIZE = 732,
     XMLTABLE = 733,
     YEAR_P = 734,
     YEARS_P = 735,
     YES_P = 736,
     ZONE = 737,
     NOT_LA = 738,
     NULLS_LA = 739,
     WITH_LA = 740,
     POSTFIXOP = 741,
     UMINUS = 742
   };
#endif
/* Tokens.  */
#define IDENT 258
#define FCONST 259
#define SCONST 260
#define BCONST 261
#define XCONST 262
#define Op 263
#define ICONST 264
#define PARAM 265
#define TYPECAST 266
#define DOT_DOT 267
#define COLON_EQUALS 268
#define EQUALS_GREATER 269
#define POWER_OF 270
#define LAMBDA_ARROW 271
#define DOUBLE_ARROW 272
#define LESS_EQUALS 273
#define GREATER_EQUALS 274
#define NOT_EQUALS 275
#define ABORT_P 276
#define ABSOLUTE_P 277
#define ACCESS 278
#define ACTION 279
#define ADD_P 280
#define ADMIN 281
#define AFTER 282
#define AGGREGATE 283
#define ALL 284
#define ALSO 285
#define ALTER 286
#define ALWAYS 287
#define ANALYSE 288
#define ANALYZE 289
#define AND 290
#define ANY 291
#define ARRAY 292
#define AS 293
#define ASC_P 294
#define ASSERTION 295
#define ASSIGNMENT 296
#define ASYMMETRIC 297
#define AT 298
#define ATTACH 299
#define ATTRIBUTE 300
#define AUTHORIZATION 301
#define BACKWARD 302
#define BEFORE 303
#define BEGIN_P 304
#define BETWEEN 305
#define BIGINT 306
#define BINARY 307
#define BIT 308
#define BOOLEAN_P 309
#define BOTH 310
#define BY 311
#define CACHE 312
#define CALL_P 313
#define CALLED 314
#define CASCADE 315
#define CASCADED 316
#define CASE 317
#define CAST 318
#define CATALOG_P 319
#define CHAIN 320
#define CHAR_P 321
#define CHARACTER 322
#define CHARACTERISTICS 323
#define CHECK_P 324
#define CHECKPOINT 325
#define CLASS 326
#define CLOSE 327
#define CLUSTER 328
#define COALESCE 329
#define COLLATE 330
#define COLLATION 331
#define COLUMN 332
#define COLUMNS 333
#define COMMENT 334
#define COMMENTS 335
#define COMMIT 336
#define COMMITTED 337
#define COMPRESSION 338
#define CONCURRENTLY 339
#define CONFIGURATION 340
#define CONFLICT 341
#define CONNECTION 342
#define CONSTRAINT 343
#define CONSTRAINTS 344
#define CONTENT_P 345
#define CONTINUE_P 346
#define CONVERSION_P 347
#define COPY 348
#define COST 349
#define CREATE_P 350
#define CROSS 351
#define CSV 352
#define CUBE 353
#define CURRENT_P 354
#define CURRENT_CATALOG 355
#define CURRENT_DATE 356
#define CURRENT_ROLE 357
#define CURRENT_SCHEMA 358
#define CURRENT_TIME 359
#define CURRENT_TIMESTAMP 360
#define CURRENT_USER 361
#define CURSOR 362
#define CYCLE 363
#define DATA_P 364
#define DATABASE 365
#define DAY_P 366
#define DAYS_P 367
#define DEALLOCATE 368
#define DEC 369
#define DECIMAL_P 370
#define DECLARE 371
#define DEFAULT 372
#define DEFAULTS 373
#define DEFERRABLE 374
#define DEFERRED 375
#define DEFINER 376
#define DELETE_P 377
#define DELIMITER 378
#define DELIMITERS 379
#define DEPENDS 380
#define DESC_P 381
#define DESCRIBE 382
#define DETACH 383
#define DICTIONARY 384
#define DISABLE_P 385
#define DISCARD 386
#define DISTINCT 387
#define DO 388
#define DOCUMENT_P 389
#define DOMAIN_P 390
#define DOUBLE_P 391
#define DROP 392
#define EACH 393
#define ELSE 394
#define ENABLE_P 395
#define ENCODING 396
#define ENCRYPTED 397
#define END_P 398
#define ENUM_P 399
#define ESCAPE 400
#define EVENT 401
#define EXCEPT 402
#define EXCLUDE 403
#define EXCLUDING 404
#define EXCLUSIVE 405
#define EXECUTE 406
#define EXISTS 407
#define EXPLAIN 408
#define EXPORT_P 409
#define EXPORT_STATE 410
#define EXTENSION 411
#define EXTERNAL 412
#define EXTRACT 413
#define FALSE_P 414
#define FAMILY 415
#define FETCH 416
#define FILTER 417
#define FIRST_P 418
#define FLOAT_P 419
#define FOLLOWING 420
#define FOR 421
#define FORCE 422
#define FOREIGN 423
#define FORWARD 424
#define FREEZE 425
#define FROM 426
#define FULL 427
#define FUNCTION 428
#define FUNCTIONS 429
#define GENERATED 430
#define GLOB 431
#define GLOBAL 432
#define GRANT 433
#define GRANTED 434
#define GROUP_P 435
#define GROUPING 436
#define GROUPING_ID 437
#define HANDLER 438
#define HAVING 439
#define HEADER_P 440
#define HOLD 441
#define HOUR_P 442
#define HOURS_P 443
#define IDENTITY_P 444
#define IF_P 445
#define IGNORE_P 446
#define ILIKE 447
#define IMMEDIATE 448
#define IMMUTABLE 449
#define IMPLICIT_P 450
#define IMPORT_P 451
#define IN_P 452
#define INCLUDING 453
#define INCREMENT 454
#define INDEX 455
#define INDEXES 456
#define INHERIT 457
#define INHERITS 458
#define INITIALLY 459
#define INLINE_P 460
#define INNER_P 461
#define INOUT 462
#define INPUT_P 463
#define INSENSITIVE 464
#define INSERT 465
#define INSTALL 466
#define INSTEAD 467
#define INT_P 468
#define INTEGER 469
#define INTERSECT 470
#define INTERVAL 471
#define INTO 472
#define INVOKER 473
#define IS 474
#define ISNULL 475
#define ISOLATION 476
#define JOIN 477
#define JSON 478
#define KEY 479
#define LABEL 480
#define LANGUAGE 481
#define LARGE_P 482
#define LAST_P 483
#define LATERAL_P 484
#define LEADING 485
#define LEAKPROOF 486
#define LEFT 487
#define LEVEL 488
#define LIKE 489
#define LIMIT 490
#define LISTEN 491
#define LOAD 492
#define LOCAL 493
#define LOCALTIME 494
#define LOCALTIMESTAMP 495
#define LOCATION 496
#define LOCK_P 497
#define LOCKED 498
#define LOGGED 499
#define MACRO 500
#define MAP 501
#define MAPPING 502
#define MATCH 503
#define MATERIALIZED 504
#define MAXVALUE 505
#define METHOD 506
#define MICROSECOND_P 507
#define MICROSECONDS_P 508
#define MILLISECOND_P 509
#define MILLISECONDS_P 510
#define MINUTE_P 511
#define MINUTES_P 512
#define MINVALUE 513
#define MODE 514
#define MONTH_P 515
#define MONTHS_P 516
#define MOVE 517
#define NAME_P 518
#define NAMES 519
#define NATIONAL 520
#define NATURAL 521
#define NCHAR 522
#define NEW 523
#define NEXT 524
#define NO 525
#define NONE 526
#define NOT 527
#define NOTHING 528
#define NOTIFY 529
#define NOTNULL 530
#define NOWAIT 531
#define NULL_P 532
#define NULLIF 533
#define NULLS_P 534
#define NUMERIC 535
#define OBJECT_P 536
#define OF 537
#define OFF 538
#define OFFSET 539
#define OIDS 540
#define OLD 541
#define ON 542
#define ONLY 543
#define OPERATOR 544
#define OPTION 545
#define OPTIONS 546
#define OR 547
#define ORDER 548
#define ORDINALITY 549
#define OUT_P 550
#define OUTER_P 551
#define OVER 552
#define OVERLAPS 553
#define OVERLAY 554
#define OVERRIDING 555
#define OWNED 556
#define OWNER 557
#define PARALLEL 558
#define PARSER 559
#define PARTIAL 560
#define PARTITION 561
#define PASSING 562
#define PASSWORD 563
#define PERCENT 564
#define PLACING 565
#define PLANS 566
#define POLICY 567
#define POSITION 568
#define PRAGMA_P 569
#define PRECEDING 570
#define PRECISION 571
#define PREPARE 572
#define PREPARED 573
#define PRESERVE 574
#define PRIMARY 575
#define PRIOR 576
#define PRIVILEGES 577
#define PROCEDURAL 578
#define PROCEDURE 579
#define PROGRAM 580
#define PUBLICATION 581
#define QUALIFY 582
#define QUOTE 583
#define RANGE 584
#define READ_P 585
#define REAL 586
#define REASSIGN 587
#define RECHECK 588
#define RECURSIVE 589
#define REF 590
#define REFERENCES 591
#define REFERENCING 592
#define REFRESH 593
#define REINDEX 594
#define RELATIVE_P 595
#define RELEASE 596
#define RENAME 597
#define REPEATABLE 598
#define REPLACE 599
#define REPLICA 600
#define RESET 601
#define RESPECT_P 602
#define RESTART 603
#define RESTRICT 604
#define RETURNING 605
#define RETURNS 606
#define REVOKE 607
#define RIGHT 608
#define ROLE 609
#define ROLLBACK 610
#define ROLLUP 611
#define ROW 612
#define ROWS 613
#define RULE 614
#define SAMPLE 615
#define SAVEPOINT 616
#define SCHEMA 617
#define SCHEMAS 618
#define SCROLL 619
#define SEARCH 620
#define SECOND_P 621
#define SECONDS_P 622
#define SECURITY 623
#define SELECT 624
#define SEQUENCE 625
#define SEQUENCES 626
#define SERIALIZABLE 627
#define SERVER 628
#define SESSION 629
#define SESSION_USER 630
#define SET 631
#define SETOF 632
#define SETS 633
#define SHARE 634
#define SHOW 635
#define SIMILAR 636
#define SIMPLE 637
#define SKIP 638
#define SMALLINT 639
#define SNAPSHOT 640
#define SOME 641
#define SQL_P 642
#define STABLE 643
#define STANDALONE_P 644
#define START 645
#define STATEMENT 646
#define STATISTICS 647
#define STDIN 648
#define STDOUT 649
#define STORAGE 650
#define STORED 651
#define STRICT_P 652
#define STRIP_P 653
#define STRUCT 654
#define SUBSCRIPTION 655
#define SUBSTRING 656
#define SUMMARIZE 657
#define SYMMETRIC 658
#define SYSID 659
#define SYSTEM_P 660
#define TABLE 661
#define TABLES 662
#define TABLESAMPLE 663
#define TABLESPACE 664
#define TEMP 665
#define TEMPLATE 666
#define TEMPORARY 667
#define TEXT_P 668
#define THEN 669
#define TIME 670
#define TIMESTAMP 671
#define TO 672
#define TRAILING 673
#define TRANSACTION 674
#define TRANSFORM 675
#define TREAT 676
#define TRIGGER 677
#define TRIM 678
#define TRUE_P 679
#define TRUNCATE 680
#define TRUSTED 681
#define TRY_CAST 682
#define TYPE_P 683
#define TYPES_P 684
#define UNBOUNDED 685
#define UNCOMMITTED 686
#define UNENCRYPTED 687
#define UNION 688
#define UNIQUE 689
#define UNKNOWN 690
#define UNLISTEN 691
#define UNLOGGED 692
#define UNTIL 693
#define UPDATE 694
#define USER 695
#define USING 696
#define VACUUM 697
#define VALID 698
#define VALIDATE 699
#define VALIDATOR 700
#define VALUE_P 701
#define VALUES 702
#define VARCHAR 703
#define VARIADIC 704
#define VARYING 705
#define VERBOSE 706
#define VERSION_P 707
#define VIEW 708
#define VIEWS 709
#define VIRTUAL 710
#define VOLATILE 711
#define WHEN 712
#define WHERE 713
#define WHITESPACE_P 714
#define WINDOW 715
#define WITH 716
#define WITHIN 717
#define WITHOUT 718
#define WORK 719
#define WRAPPER 720
#define WRITE_P 721
#define XML_P 722
#define XMLATTRIBUTES 723
#define XMLCONCAT 724
#define XMLELEMENT 725
#define XMLEXISTS 726
#define XMLFOREST 727
#define XMLNAMESPACES 728
#define XMLPARSE 729
#define XMLPI 730
#define XMLROOT 731
#define XMLSERIALIZE 732
#define XMLTABLE 733
#define YEAR_P 734
#define YEARS_P 735
#define YES_P 736
#define ZONE 737
#define NOT_LA 738
#define NULLS_LA 739
#define WITH_LA 740
#define POSTFIXOP 741
#define UMINUS 742




/* Copy the first part of user declarations.  */
#line 1 "third_party/libpg_query/grammar/grammar.y.tmp"

#line 1 "third_party/libpg_query/grammar/grammar.hpp"
/*#define YYDEBUG 1*/
/*-------------------------------------------------------------------------
 *
 * gram.y
 *	  POSTGRESQL BISON rules/actions
 *
 * Portions Copyright (c) 1996-2017, PostgreSQL Global Development PGGroup
 * Portions Copyright (c) 1994, Regents of the University of California
 *
 *
 * IDENTIFICATION
 *	  src/backend/parser/gram.y
 *
 * HISTORY
 *	  AUTHOR			DATE			MAJOR EVENT
 *	  Andrew Yu			Sept, 1994		POSTQUEL to SQL conversion
 *	  Andrew Yu			Oct, 1994		lispy code conversion
 *
 * NOTES
 *	  CAPITALS are used to represent terminal symbols.
 *	  non-capitals are used to represent non-terminals.
 *
 *	  In general, nothing in this file should initiate database accesses
 *	  nor depend on changeable state (such as SET variables).  If you do
 *	  database accesses, your code will fail when we have aborted the
 *	  current transaction and are just parsing commands to find the next
 *	  ROLLBACK or COMMIT.  If you make use of SET variables, then you
 *	  will do the wrong thing in multi-query strings like this:
 *			SET constraint_exclusion TO off; SELECT * FROM foo;
 *	  because the entire string is parsed by gram.y before the SET gets
 *	  executed.  Anything that depends on the database or changeable state
 *	  should be handled during parse analysis so that it happens at the
 *	  right time not the wrong time.
 *
 * WARNINGS
 *	  If you use a list, make sure the datum is a node so that the printing
 *	  routines work.
 *
 *	  Sometimes we assign constants to makeStrings. Make sure we don't free
 *	  those.
 *
 *-------------------------------------------------------------------------
 */
#include "pg_functions.hpp"
#include <string.h>

#include <ctype.h>
#include <limits.h>

#include "nodes/makefuncs.hpp"
#include "nodes/nodeFuncs.hpp"
#include "parser/gramparse.hpp"
#include "parser/parser.hpp"
#include "utils/datetime.hpp"

namespace duckdb_libpgquery {
#define DEFAULT_SCHEMA "main"

/*
 * Location tracking support --- simpler than bison's default, since we only
 * want to track the start position not the end position of each nonterminal.
 */
#define YYLLOC_DEFAULT(Current, Rhs, N) \
	do { \
		if ((N) > 0) \
			(Current) = (Rhs)[1]; \
		else \
			(Current) = (-1); \
	} while (0)

/*
 * The above macro assigns -1 (unknown) as the parse location of any
 * nonterminal that was reduced from an empty rule, or whose leftmost
 * component was reduced from an empty rule.  This is problematic
 * for nonterminals defined like
 *		OptFooList: / * EMPTY * / { ... } | OptFooList Foo { ... } ;
 * because we'll set -1 as the location during the first reduction and then
 * copy it during each subsequent reduction, leaving us with -1 for the
 * location even when the list is not empty.  To fix that, do this in the
 * action for the nonempty rule(s):
 *		if (@$ < 0) @$ = @2;
 * (Although we have many nonterminals that follow this pattern, we only
 * bother with fixing @$ like this when the nonterminal's parse location
 * is actually referenced in some rule.)
 *
 * A cleaner answer would be to make YYLLOC_DEFAULT scan all the Rhs
 * locations until it's found one that's not -1.  Then we'd get a correct
 * location for any nonterminal that isn't entirely empty.  But this way
 * would add overhead to every rule reduction, and so far there's not been
 * a compelling reason to pay that overhead.
 */

/*
 * Bison doesn't allocate anything that needs to live across parser calls,
 * so we can easily have it use palloc instead of malloc.  This prevents
 * memory leaks if we error out during parsing.  Note this only works with
 * bison >= 2.0.  However, in bison 1.875 the default is to use alloca()
 * if possible, so there's not really much problem anyhow, at least if
 * you're building with gcc.
 */
#define YYMALLOC palloc
#define YYFREE   pfree
#define YYINITDEPTH 1000

/* yields an integer bitmask of these flags: */
#define CAS_NOT_DEFERRABLE			0x01
#define CAS_DEFERRABLE				0x02
#define CAS_INITIALLY_IMMEDIATE		0x04
#define CAS_INITIALLY_DEFERRED		0x08
#define CAS_NOT_VALID				0x10
#define CAS_NO_INHERIT				0x20


#define parser_yyerror(msg)  scanner_yyerror(msg, yyscanner)
#define parser_errposition(pos)  scanner_errposition(pos, yyscanner)

static void base_yyerror(YYLTYPE *yylloc, core_yyscan_t yyscanner,
						 const char *msg);
static PGRawStmt *makeRawStmt(PGNode *stmt, int stmt_location);
static void updateRawStmtEnd(PGRawStmt *rs, int end_location);
static PGNode *makeColumnRef(char *colname, PGList *indirection,
						   int location, core_yyscan_t yyscanner);
static PGNode *makeTypeCast(PGNode *arg, PGTypeName *tpname, int trycast, int location);
static PGNode *makeStringConst(char *str, int location);
static PGNode *makeStringConstCast(char *str, int location, PGTypeName *tpname);
static PGNode *makeIntervalNode(char *str, int location, PGList *typmods);
static PGNode *makeIntervalNode(int val, int location, PGList *typmods);
static PGNode *makeIntervalNode(PGNode *arg, int location, PGList *typmods);
static PGNode *makeSampleSize(PGValue *sample_size, bool is_percentage);
static PGNode *makeSampleOptions(PGNode *sample_size, char *method, int *seed, int location);
static PGNode *makeIntConst(int val, int location);
static PGNode *makeFloatConst(char *str, int location);
static PGNode *makeBitStringConst(char *str, int location);
static PGNode *makeNullAConst(int location);
static PGNode *makeAConst(PGValue *v, int location);
static PGNode *makeBoolAConst(bool state, int location);
static PGNode *makeParamRef(int number, int location);
static void check_qualified_name(PGList *names, core_yyscan_t yyscanner);
static PGList *check_func_name(PGList *names, core_yyscan_t yyscanner);
static PGList *check_indirection(PGList *indirection, core_yyscan_t yyscanner);
static void insertSelectOptions(PGSelectStmt *stmt,
								PGList *sortClause, PGList *lockingClause,
								PGNode *limitOffset, PGNode *limitCount,
								PGWithClause *withClause,
								core_yyscan_t yyscanner);
static PGNode *makeSetOp(PGSetOperation op, bool all, PGNode *larg, PGNode *rarg);
static PGNode *doNegate(PGNode *n, int location);
static void doNegateFloat(PGValue *v);
static PGNode *makeAndExpr(PGNode *lexpr, PGNode *rexpr, int location);
static PGNode *makeOrExpr(PGNode *lexpr, PGNode *rexpr, int location);
static PGNode *makeNotExpr(PGNode *expr, int location);
static PGNode *makeSQLValueFunction(PGSQLValueFunctionOp op, int32_t typmod,
								  int location);
static void SplitColQualList(PGList *qualList,
							 PGList **constraintList, PGCollateClause **collClause,
							 core_yyscan_t yyscanner);
static void processCASbits(int cas_bits, int location, const char *constrType,
			   bool *deferrable, bool *initdeferred, bool *not_valid,
			   bool *no_inherit, core_yyscan_t yyscanner);
static PGNode *makeRecursiveViewSelect(char *relname, PGList *aliases, PGNode *query);
static PGNode *makeLimitPercent(PGNode *limit_percent);



/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif

#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
#line 14 "third_party/libpg_query/grammar/grammar.y"
{
	core_YYSTYPE		core_yystype;
	/* these fields must match core_YYSTYPE: */
	int					ival;
	char				*str;
	const char			*keyword;
	const char          *conststr;

	char				chr;
	bool				boolean;
	PGJoinType			jtype;
	PGDropBehavior		dbehavior;
	PGOnCommitAction		oncommit;
	PGOnCreateConflict		oncreateconflict;
	PGList				*list;
	PGNode				*node;
	PGValue				*value;
	PGObjectType			objtype;
	PGTypeName			*typnam;
	PGObjectWithArgs		*objwithargs;
	PGDefElem				*defelt;
	PGSortBy				*sortby;
	PGWindowDef			*windef;
	PGJoinExpr			*jexpr;
	PGIndexElem			*ielem;
	PGAlias				*alias;
	PGRangeVar			*range;
	PGIntoClause			*into;
	PGWithClause			*with;
	PGInferClause			*infer;
	PGOnConflictClause	*onconflict;
	PGAIndices			*aind;
	PGResTarget			*target;
	PGInsertStmt			*istmt;
	PGVariableSetStmt		*vsetstmt;
	PGOverridingKind       override;
	PGSortByDir            sortorder;
	PGSortByNulls          nullorder;
	PGConstrType           constr;
	PGLockClauseStrength lockstrength;
	PGLockWaitPolicy lockwaitpolicy;
	PGSubLinkType subquerytype;
	PGViewCheckOption viewcheckoption;
}
/* Line 187 of yacc.c.  */
#line 1289 "third_party/libpg_query/grammar/grammar_out.cpp"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif

#if ! defined YYLTYPE && ! defined YYLTYPE_IS_DECLARED
typedef struct YYLTYPE
{
  int first_line;
  int first_column;
  int last_line;
  int last_column;
} YYLTYPE;
# define yyltype YYLTYPE /* obsolescent; will be withdrawn */
# define YYLTYPE_IS_DECLARED 1
# define YYLTYPE_IS_TRIVIAL 1
#endif


/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 1314 "third_party/libpg_query/grammar/grammar_out.cpp"

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(e) ((void) (e))
#else
# define YYUSE(e) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(n) (n)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int i)
#else
static int
YYID (i)
    int i;
#endif
{
  return i;
}
#endif

#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef _STDLIB_H
#      define _STDLIB_H 1
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined _STDLIB_H \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef _STDLIB_H
#    define _STDLIB_H 1
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
	 || (defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL \
	     && defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss;
  YYSTYPE yyvs;
    YYLTYPE yyls;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE) + sizeof (YYLTYPE)) \
      + 2 * YYSTACK_GAP_MAXIMUM)

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  YYSIZE_T yyi;				\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (YYID (0))
#  endif
# endif

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack)					\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack, Stack, yysize);				\
	Stack = &yyptr->Stack;						\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  630
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   57211

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  509
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  395
/* YYNRULES -- Number of rules.  */
#define YYNRULES  1916
/* YYNRULES -- Number of states.  */
#define YYNSTATES  3100

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   742

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint16 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,   506,     2,   494,     2,     2,
     499,   500,   492,   490,   503,   491,   501,   493,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,   508,   502,
     486,   488,   487,   507,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,   497,     2,   498,   495,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,   504,     2,   505,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,   114,
     115,   116,   117,   118,   119,   120,   121,   122,   123,   124,
     125,   126,   127,   128,   129,   130,   131,   132,   133,   134,
     135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
     145,   146,   147,   148,   149,   150,   151,   152,   153,   154,
     155,   156,   157,   158,   159,   160,   161,   162,   163,   164,
     165,   166,   167,   168,   169,   170,   171,   172,   173,   174,
     175,   176,   177,   178,   179,   180,   181,   182,   183,   184,
     185,   186,   187,   188,   189,   190,   191,   192,   193,   194,
     195,   196,   197,   198,   199,   200,   201,   202,   203,   204,
     205,   206,   207,   208,   209,   210,   211,   212,   213,   214,
     215,   216,   217,   218,   219,   220,   221,   222,   223,   224,
     225,   226,   227,   228,   229,   230,   231,   232,   233,   234,
     235,   236,   237,   238,   239,   240,   241,   242,   243,   244,
     245,   246,   247,   248,   249,   250,   251,   252,   253,   254,
     255,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338,   339,   340,   341,   342,   343,   344,
     345,   346,   347,   348,   349,   350,   351,   352,   353,   354,
     355,   356,   357,   358,   359,   360,   361,   362,   363,   364,
     365,   366,   367,   368,   369,   370,   371,   372,   373,   374,
     375,   376,   377,   378,   379,   380,   381,   382,   383,   384,
     385,   386,   387,   388,   389,   390,   391,   392,   393,   394,
     395,   396,   397,   398,   399,   400,   401,   402,   403,   404,
     405,   406,   407,   408,   409,   410,   411,   412,   413,   414,
     415,   416,   417,   418,   419,   420,   421,   422,   423,   424,
     425,   426,   427,   428,   429,   430,   431,   432,   433,   434,
     435,   436,   437,   438,   439,   440,   441,   442,   443,   444,
     445,   446,   447,   448,   449,   450,   451,   452,   453,   454,
     455,   456,   457,   458,   459,   460,   461,   462,   463,   464,
     465,   466,   467,   468,   469,   470,   471,   472,   473,   474,
     475,   476,   477,   478,   479,   480,   481,   482,   483,   484,
     485,   489,   496
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     5,     9,    11,    13,    15,    17,    19,
      21,    23,    25,    27,    29,    31,    33,    35,    37,    39,
      41,    43,    45,    47,    49,    51,    53,    55,    57,    59,
      61,    63,    65,    67,    69,    71,    73,    75,    77,    79,
      80,    83,    85,    87,    89,    92,    96,   104,   115,   125,
     128,   132,   133,   138,   141,   146,   152,   157,   165,   168,
     169,   171,   173,   175,   177,   182,   189,   194,   201,   206,
     213,   218,   225,   227,   230,   234,   237,   239,   243,   246,
     250,   252,   256,   259,   265,   269,   276,   281,   288,   295,
     302,   308,   314,   321,   331,   336,   342,   350,   357,   362,
     371,   376,   379,   384,   388,   395,   400,   403,   406,   409,
     412,   414,   417,   418,   420,   423,   426,   429,   431,   435,
     440,   443,   445,   446,   449,   453,   456,   460,   468,   470,
     473,   477,   480,   481,   484,   485,   495,   508,   520,   521,
     524,   526,   528,   530,   532,   534,   536,   540,   541,   543,
     546,   548,   550,   553,   556,   560,   562,   564,   567,   570,
     572,   575,   579,   585,   589,   592,   598,   600,   602,   604,
     605,   611,   619,   625,   628,   632,   634,   636,   639,   642,
     643,   647,   652,   657,   658,   662,   665,   666,   670,   672,
     674,   676,   678,   680,   682,   684,   686,   688,   690,   694,
     698,   700,   703,   706,   709,   712,   715,   718,   719,   723,
     727,   731,   732,   734,   737,   739,   742,   745,   748,   751,
     755,   760,   762,   766,   768,   770,   772,   774,   778,   780,
     783,   784,   786,   789,   790,   792,   796,   797,   800,   801,
     805,   809,   811,   817,   821,   823,   827,   829,   832,   834,
     839,   845,   851,   858,   862,   870,   875,   887,   889,   893,
     896,   899,   902,   903,   907,   909,   911,   914,   917,   920,
     923,   925,   926,   928,   931,   936,   943,   945,   948,   950,
     952,   953,   955,   958,   961,   963,   966,   969,   971,   974,
     978,   981,   984,   987,   990,   994,   998,  1002,  1004,  1008,
    1010,  1011,  1013,  1016,  1019,  1026,  1035,  1042,  1051,  1058,
    1067,  1070,  1075,  1082,  1089,  1098,  1105,  1114,  1121,  1130,
    1137,  1146,  1155,  1166,  1175,  1186,  1188,  1189,  1193,  1203,
    1216,  1220,  1221,  1224,  1228,  1232,  1236,  1238,  1242,  1246,
    1249,  1253,  1257,  1261,  1265,  1267,  1269,  1271,  1273,  1277,
    1283,  1285,  1287,  1289,  1291,  1295,  1298,  1300,  1306,  1310,
    1311,  1313,  1315,  1317,  1319,  1328,  1336,  1338,  1340,  1343,
    1347,  1361,  1378,  1380,  1383,  1384,  1386,  1387,  1389,  1390,
    1393,  1394,  1396,  1397,  1400,  1405,  1409,  1415,  1417,  1418,
    1420,  1422,  1423,  1425,  1427,  1429,  1431,  1433,  1435,  1437,
    1439,  1441,  1443,  1445,  1447,  1449,  1451,  1453,  1455,  1457,
    1459,  1461,  1463,  1465,  1467,  1469,  1471,  1473,  1475,  1477,
    1479,  1481,  1483,  1485,  1487,  1489,  1491,  1493,  1495,  1499,
    1501,  1503,  1505,  1507,  1509,  1511,  1514,  1516,  1518,  1525,
    1530,  1537,  1542,  1549,  1558,  1563,  1570,  1572,  1574,  1576,
    1578,  1581,  1583,  1586,  1588,  1591,  1593,  1595,  1597,  1601,
    1605,  1609,  1613,  1616,  1619,  1621,  1625,  1627,  1629,  1631,
    1633,  1637,  1639,  1641,  1642,  1644,  1646,  1648,  1650,  1654,
    1664,  1676,  1689,  1704,  1708,  1713,  1718,  1719,  1725,  1734,
    1736,  1737,  1740,  1743,  1747,  1749,  1751,  1754,  1757,  1760,
    1763,  1767,  1772,  1775,  1777,  1779,  1781,  1783,  1787,  1792,
    1798,  1804,  1809,  1816,  1818,  1820,  1822,  1824,  1826,  1828,
    1829,  1831,  1835,  1837,  1838,  1847,  1859,  1869,  1871,  1873,
    1877,  1878,  1880,  1884,  1886,  1887,  1889,  1890,  1892,  1893,
    1895,  1899,  1901,  1903,  1905,  1909,  1910,  1913,  1916,  1917,
    1920,  1921,  1923,  1924,  1926,  1928,  1930,  1934,  1938,  1940,
    1942,  1946,  1950,  1954,  1958,  1963,  1967,  1970,  1972,  1974,
    1976,  1978,  1980,  1984,  1989,  1993,  1995,  1997,  2001,  2005,
    2007,  2010,  2015,  2020,  2023,  2027,  2033,  2039,  2041,  2043,
    2055,  2067,  2069,  2072,  2077,  2082,  2087,  2090,  2093,  2097,
    2099,  2103,  2110,  2113,  2114,  2118,  2122,  2127,  2132,  2137,
    2142,  2146,  2149,  2151,  2153,  2154,  2156,  2158,  2159,  2161,
    2167,  2169,  2170,  2173,  2176,  2177,  2179,  2180,  2184,  2190,
    2196,  2198,  2202,  2207,  2211,  2213,  2215,  2216,  2219,  2222,
    2223,  2226,  2229,  2231,  2233,  2235,  2236,  2239,  2244,  2250,
    2255,  2258,  2262,  2265,  2268,  2271,  2274,  2276,  2279,  2283,
    2284,  2286,  2287,  2293,  2295,  2300,  2307,  2310,  2312,  2313,
    2318,  2319,  2321,  2323,  2326,  2329,  2332,  2334,  2336,  2339,
    2342,  2344,  2346,  2348,  2350,  2352,  2354,  2358,  2362,  2366,
    2367,  2369,  2373,  2375,  2378,  2380,  2382,  2384,  2386,  2388,
    2391,  2396,  2401,  2407,  2409,  2411,  2414,  2415,  2418,  2419,
    2421,  2425,  2427,  2428,  2430,  2433,  2437,  2440,  2445,  2448,
    2452,  2455,  2456,  2458,  2461,  2462,  2467,  2473,  2475,  2478,
    2481,  2482,  2484,  2488,  2490,  2493,  2497,  2501,  2505,  2509,
    2513,  2517,  2519,  2524,  2528,  2533,  2539,  2544,  2550,  2555,
    2561,  2564,  2569,  2571,  2573,  2574,  2576,  2581,  2587,  2592,
    2593,  2596,  2599,  2602,  2604,  2606,  2607,  2612,  2615,  2617,
    2620,  2623,  2628,  2631,  2638,  2641,  2643,  2647,  2652,  2653,
    2656,  2657,  2660,  2661,  2663,  2667,  2671,  2674,  2675,  2678,
    2683,  2685,  2687,  2689,  2690,  2693,  2697,  2703,  2710,  2713,
    2717,  2723,  2729,  2733,  2738,  2739,  2741,  2743,  2745,  2747,
    2749,  2752,  2757,  2759,  2761,  2763,  2765,  2768,  2772,  2773,
    2775,  2777,  2779,  2781,  2783,  2786,  2789,  2792,  2795,  2798,
    2800,  2804,  2805,  2807,  2809,  2811,  2813,  2819,  2822,  2824,
    2826,  2828,  2830,  2835,  2837,  2840,  2843,  2845,  2849,  2853,
    2856,  2858,  2859,  2865,  2868,  2874,  2877,  2879,  2883,  2887,
    2888,  2890,  2892,  2894,  2896,  2898,  2900,  2902,  2904,  2906,
    2908,  2910,  2912,  2914,  2916,  2918,  2920,  2922,  2924,  2926,
    2928,  2930,  2932,  2934,  2936,  2940,  2944,  2948,  2952,  2956,
    2960,  2964,  2965,  2967,  2971,  2975,  2981,  2984,  2987,  2991,
    2995,  2999,  3003,  3007,  3011,  3015,  3019,  3023,  3027,  3031,
    3035,  3039,  3043,  3046,  3049,  3053,  3057,  3060,  3063,  3067,
    3071,  3077,  3082,  3089,  3093,  3099,  3104,  3111,  3116,  3123,
    3129,  3137,  3141,  3144,  3149,  3153,  3156,  3158,  3162,  3166,
    3170,  3174,  3178,  3182,  3187,  3191,  3196,  3200,  3205,  3211,
    3218,  3225,  3233,  3240,  3248,  3255,  3263,  3267,  3272,  3277,
    3284,  3287,  3289,  3294,  3296,  3300,  3303,  3306,  3310,  3314,
    3318,  3322,  3326,  3330,  3334,  3338,  3342,  3346,  3350,  3354,
    3358,  3362,  3365,  3368,  3374,  3381,  3388,  3396,  3398,  3400,
    3403,  3406,  3409,  3414,  3416,  3419,  3421,  3424,  3427,  3432,
    3436,  3443,  3451,  3461,  3469,  3477,  3482,  3488,  3490,  3492,
    3494,  3500,  3502,  3504,  3509,  3511,  3516,  3518,  3523,  3525,
    3530,  3532,  3534,  3536,  3538,  3540,  3542,  3549,  3556,  3561,
    3566,  3571,  3576,  3583,  3589,  3595,  3601,  3606,  3613,  3618,
    3624,  3625,  3631,  3636,  3637,  3639,  3640,  3643,  3644,  3646,
    3650,  3654,  3657,  3660,  3661,  3668,  3670,  3671,  3675,  3676,
    3679,  3682,  3683,  3685,  3690,  3693,  3696,  3699,  3702,  3705,
    3710,  3714,  3716,  3722,  3726,  3728,  3732,  3734,  3737,  3739,
    3741,  3743,  3745,  3747,  3749,  3751,  3753,  3755,  3757,  3759,
    3761,  3763,  3765,  3767,  3769,  3771,  3773,  3775,  3780,  3782,
    3787,  3789,  3794,  3796,  3799,  3801,  3804,  3806,  3809,  3811,
    3815,  3817,  3821,  3823,  3826,  3828,  3829,  3831,  3835,  3837,
    3841,  3845,  3847,  3851,  3855,  3856,  3858,  3860,  3862,  3864,
    3866,  3868,  3870,  3872,  3874,  3876,  3881,  3885,  3888,  3892,
    3893,  3897,  3901,  3904,  3907,  3909,  3910,  3913,  3916,  3920,
    3923,  3925,  3927,  3931,  3937,  3939,  3942,  3947,  3950,  3951,
    3953,  3954,  3956,  3959,  3962,  3966,  3972,  3974,  3975,  3977,
    3980,  3981,  3984,  3986,  3987,  3989,  3990,  3992,  3996,  3998,
    4001,  4005,  4008,  4010,  4014,  4020,  4025,  4028,  4030,  4031,
    4035,  4037,  4041,  4043,  4046,  4051,  4054,  4055,  4057,  4061,
    4063,  4066,  4068,  4072,  4074,  4077,  4079,  4081,  4083,  4086,
    4088,  4090,  4093,  4095,  4097,  4100,  4108,  4111,  4117,  4121,
    4125,  4127,  4129,  4131,  4133,  4135,  4137,  4139,  4141,  4143,
    4145,  4147,  4149,  4151,  4153,  4155,  4157,  4159,  4161,  4163,
    4165,  4168,  4171,  4175,  4179,  4180,  4182,  4184,  4186,  4188,
    4190,  4192,  4194,  4197,  4200,  4203,  4206,  4209,  4212,  4215,
    4217,  4219,  4220,  4228,  4230,  4235,  4240,  4248,  4251,  4253,
    4257,  4262,  4266,  4267,  4269,  4270,  4273,  4277,  4283,  4292,
    4298,  4299,  4305,  4311,  4319,  4322,  4323,  4325,  4327,  4329,
    4333,  4336,  4337,  4339,  4340,  4342,  4346,  4348,  4352,  4354,
    4357,  4359,  4363,  4366,  4372,  4374,  4376,  4378,  4380,  4382,
    4384,  4386,  4388,  4390,  4392,  4394,  4396,  4398,  4400,  4402,
    4404,  4406,  4408,  4410,  4412,  4414,  4416,  4418,  4420,  4422,
    4424,  4426,  4428,  4430,  4432,  4434,  4436,  4438,  4440,  4442,
    4444,  4446,  4448,  4450,  4452,  4454,  4456,  4458,  4460,  4462,
    4464,  4466,  4468,  4470,  4472,  4474,  4476,  4478,  4480,  4482,
    4484,  4486,  4488,  4490,  4492,  4494,  4496,  4498,  4500,  4502,
    4504,  4506,  4508,  4510,  4512,  4514,  4516,  4518,  4520,  4522,
    4524,  4526,  4528,  4530,  4532,  4534,  4536,  4538,  4540,  4542,
    4544,  4546,  4548,  4550,  4552,  4554,  4556,  4558,  4560,  4562,
    4564,  4566,  4568,  4570,  4572,  4574,  4576,  4578,  4580,  4582,
    4584,  4586,  4588,  4590,  4592,  4594,  4596,  4598,  4600,  4602,
    4604,  4606,  4608,  4610,  4612,  4614,  4616,  4618,  4620,  4622,
    4624,  4626,  4628,  4630,  4632,  4634,  4636,  4638,  4640,  4642,
    4644,  4646,  4648,  4650,  4652,  4654,  4656,  4658,  4660,  4662,
    4664,  4666,  4668,  4670,  4672,  4674,  4676,  4678,  4680,  4682,
    4684,  4686,  4688,  4690,  4692,  4694,  4696,  4698,  4700,  4702,
    4704,  4706,  4708,  4710,  4712,  4714,  4716,  4718,  4720,  4722,
    4724,  4726,  4728,  4730,  4732,  4734,  4736,  4738,  4740,  4742,
    4744,  4746,  4748,  4750,  4752,  4754,  4756,  4758,  4760,  4762,
    4764,  4766,  4768,  4770,  4772,  4774,  4776,  4778,  4780,  4782,
    4784,  4786,  4788,  4790,  4792,  4794,  4796,  4798,  4800,  4802,
    4804,  4806,  4808,  4810,  4812,  4814,  4816,  4818,  4820,  4822,
    4824,  4826,  4828,  4830,  4832,  4834,  4836,  4838,  4840,  4842,
    4844,  4846,  4848,  4850,  4852,  4854,  4856,  4858,  4860,  4862,
    4864,  4866,  4868,  4870,  4872,  4874,  4876,  4878,  4880,  4882,
    4884,  4886,  4888,  4890,  4892,  4894,  4896,  4898,  4900,  4902,
    4904,  4906,  4908,  4910,  4912,  4914,  4916,  4918,  4920,  4922,
    4924,  4926,  4928,  4930,  4932,  4934,  4936,  4938,  4940,  4942,
    4944,  4946,  4948,  4950,  4952,  4954,  4956,  4958,  4960,  4962,
    4964,  4966,  4968,  4970,  4972,  4974,  4976,  4978,  4980,  4982,
    4984,  4986,  4988,  4990,  4992,  4994,  4996,  4998,  5000,  5002,
    5004,  5006,  5008,  5010,  5012,  5014,  5016,  5018,  5020,  5022,
    5024,  5026,  5028,  5030,  5032,  5034,  5036,  5038,  5040,  5042,
    5044,  5046,  5048,  5050,  5052,  5054,  5056,  5058,  5060,  5062,
    5064,  5066,  5068,  5070,  5072,  5074,  5076,  5078,  5080,  5082,
    5084,  5086,  5088,  5090,  5092,  5094,  5096,  5098,  5100,  5102,
    5104,  5106,  5108,  5110,  5112,  5114,  5116,  5118,  5120,  5122,
    5124,  5126,  5128,  5130,  5132,  5134,  5136,  5138,  5140,  5142,
    5144,  5146,  5148,  5150,  5152,  5154,  5156,  5158,  5160,  5162,
    5164,  5166,  5168,  5170,  5172,  5174,  5176,  5178,  5180,  5182,
    5184,  5186,  5188,  5190,  5192,  5194,  5196,  5198,  5200,  5202,
    5204,  5206,  5208,  5210,  5212,  5214,  5216,  5218,  5220,  5222,
    5224,  5226,  5228,  5230,  5232,  5234,  5236,  5238,  5240,  5242,
    5244,  5246,  5248,  5250,  5252,  5254,  5256,  5258,  5260,  5262,
    5264,  5266,  5268,  5270,  5272,  5274,  5276,  5278,  5280,  5282,
    5284,  5286,  5288,  5290,  5292,  5294,  5296,  5298,  5300,  5302,
    5304,  5306,  5308,  5310,  5312,  5314,  5316,  5318,  5320,  5322,
    5324,  5326,  5328,  5330,  5332,  5334,  5336,  5338,  5340,  5342,
    5344,  5346,  5348,  5350,  5352,  5354,  5356,  5358,  5360,  5362,
    5364,  5366,  5368,  5370,  5372,  5374,  5376,  5378,  5380,  5382,
    5384,  5386,  5388,  5390,  5392,  5394,  5396,  5398,  5400,  5402,
    5404,  5406,  5408,  5410,  5412,  5414,  5416,  5418,  5420,  5422,
    5424,  5426,  5428,  5430,  5432,  5434,  5436,  5438,  5440,  5442,
    5444,  5446,  5448,  5450,  5452,  5454,  5456,  5458,  5460,  5462,
    5464,  5466,  5468,  5470,  5472,  5474,  5476,  5478,  5480,  5482,
    5484,  5486,  5488,  5490,  5492,  5494,  5496,  5498,  5500,  5502,
    5504,  5506,  5508,  5510,  5512,  5514,  5516,  5518,  5520,  5522,
    5524,  5526,  5528,  5530,  5532,  5534,  5536,  5538,  5540,  5542,
    5544,  5546,  5548,  5550,  5552,  5554,  5556,  5558,  5560,  5562,
    5564,  5566,  5568,  5570,  5572,  5574,  5576,  5578,  5580,  5582,
    5584,  5586,  5588,  5590,  5592,  5594,  5596
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     510,     0,    -1,   511,    -1,   511,   502,   512,    -1,   512,
      -1,   594,    -1,   587,    -1,   523,    -1,   595,    -1,   874,
      -1,   606,    -1,   653,    -1,   516,    -1,   610,    -1,   520,
      -1,   640,    -1,   539,    -1,   896,    -1,   534,    -1,   535,
      -1,   631,    -1,   598,    -1,   620,    -1,   670,    -1,   671,
      -1,   613,    -1,   877,    -1,   642,    -1,   519,    -1,   607,
      -1,   596,    -1,   672,    -1,   875,    -1,   652,    -1,   647,
      -1,   513,    -1,   600,    -1,   644,    -1,   638,    -1,    -1,
     346,   515,    -1,   646,    -1,    29,    -1,   514,    -1,   415,
     482,    -1,   419,   221,   233,    -1,    95,   585,   406,   518,
      38,   672,   517,    -1,    95,   585,   406,   190,   272,   152,
     518,    38,   672,   517,    -1,    95,   292,   344,   585,   406,
     518,    38,   672,   517,    -1,   461,   109,    -1,   461,   270,
     109,    -1,    -1,   854,   574,   561,   553,    -1,   314,   863,
      -1,   314,   863,   488,   605,    -1,   314,   863,   499,   819,
     500,    -1,    95,   362,   863,   521,    -1,    95,   362,   190,
     272,   152,   863,   521,    -1,   521,   522,    -1,    -1,   539,
      -1,   613,    -1,   640,    -1,   638,    -1,    31,   406,   741,
     531,    -1,    31,   406,   190,   152,   741,   531,    -1,    31,
     200,   854,   531,    -1,    31,   200,   190,   152,   854,   531,
      -1,    31,   370,   854,   531,    -1,    31,   370,   190,   152,
     854,   531,    -1,    31,   453,   854,   531,    -1,    31,   453,
     190,   152,   854,   531,    -1,   526,    -1,   524,   526,    -1,
     376,   117,   784,    -1,   137,   117,    -1,   348,    -1,   348,
     589,   590,    -1,   376,   591,    -1,   376,   175,   586,    -1,
     530,    -1,   527,   503,   530,    -1,    25,   566,    -1,    25,
     190,   272,   152,   566,    -1,    25,    77,   566,    -1,    25,
      77,   190,   272,   152,   566,    -1,    31,   597,   863,   525,
      -1,    31,   597,   863,   137,   272,   277,    -1,    31,   597,
     863,   376,   272,   277,    -1,    31,   597,   863,   376,   392,
     593,    -1,    31,   597,   863,   376,   554,    -1,    31,   597,
     863,   346,   554,    -1,    31,   597,   863,   376,   395,   863,
      -1,    31,   597,   863,    25,   175,   586,    38,   189,   542,
      -1,    31,   597,   863,   524,    -1,    31,   597,   863,   137,
     189,    -1,    31,   597,   863,   137,   189,   190,   152,    -1,
     137,   597,   190,   152,   863,   635,    -1,   137,   597,   863,
     635,    -1,    31,   597,   863,   533,   428,   754,   750,   529,
      -1,    31,   597,   863,   532,    -1,    25,   556,    -1,    31,
      88,   857,   540,    -1,   444,    88,   857,    -1,   137,    88,
     190,   152,   857,   635,    -1,   137,    88,   857,   635,    -1,
     376,   244,    -1,   376,   437,    -1,   376,   554,    -1,   346,
     554,    -1,   532,    -1,   441,   784,    -1,    -1,   550,    -1,
     376,   550,    -1,    25,   550,    -1,   137,   564,    -1,   528,
      -1,   531,   503,   528,    -1,   291,   499,   527,   500,    -1,
     376,   109,    -1,   376,    -1,    -1,   113,   857,    -1,   113,
     317,   857,    -1,   113,    29,    -1,   113,   317,    29,    -1,
     881,   122,   171,   536,   538,   537,   886,    -1,   741,    -1,
     741,   863,    -1,   741,    38,   863,    -1,   458,   784,    -1,
      -1,   441,   732,    -1,    -1,    95,   585,   406,   854,   499,
     572,   500,   561,   553,    -1,    95,   585,   406,   190,   272,
     152,   854,   499,   572,   500,   561,   553,    -1,    95,   292,
     344,   585,   406,   854,   499,   572,   500,   561,   553,    -1,
      -1,   540,   565,    -1,   580,    -1,   903,    -1,   813,    -1,
     590,    -1,   862,    -1,   271,    -1,   499,   588,   500,    -1,
      -1,   862,    -1,   270,    24,    -1,   349,    -1,    60,    -1,
     376,   277,    -1,   376,   117,    -1,    88,   857,   546,    -1,
     546,    -1,   560,    -1,    75,   868,    -1,   272,   277,    -1,
     277,    -1,   434,   571,    -1,   320,   224,   571,    -1,    69,
     499,   784,   500,   555,    -1,   441,    83,   857,    -1,   117,
     785,    -1,   336,   854,   574,   583,   552,    -1,   455,    -1,
     396,    -1,   547,    -1,    -1,   175,   586,    38,   189,   542,
      -1,   175,   586,    38,   499,   784,   500,   548,    -1,    38,
     499,   784,   500,   548,    -1,   564,   543,    -1,   287,   439,
     544,    -1,   551,    -1,   576,    -1,   551,   576,    -1,   576,
     551,    -1,    -1,   287,    81,   137,    -1,   287,    81,   122,
     358,    -1,   287,    81,   319,   358,    -1,    -1,   499,   558,
     500,    -1,   270,   202,    -1,    -1,    88,   857,   581,    -1,
     581,    -1,    80,    -1,    89,    -1,   118,    -1,   189,    -1,
     201,    -1,   392,    -1,   395,    -1,    29,    -1,   577,    -1,
     558,   503,   577,    -1,   441,   200,   568,    -1,   119,    -1,
     272,   119,    -1,   204,   120,    -1,   204,   193,    -1,   461,
     554,    -1,   461,   285,    -1,   463,   285,    -1,    -1,   499,
     567,   500,    -1,   563,   198,   557,    -1,   563,   149,   557,
      -1,    -1,   872,    -1,   272,   119,    -1,   119,    -1,   204,
     193,    -1,   204,   120,    -1,   272,   443,    -1,   270,   202,
      -1,   863,   754,   575,    -1,   863,   753,   549,   575,    -1,
     570,    -1,   567,   503,   570,    -1,   863,    -1,   566,    -1,
     584,    -1,   556,    -1,   872,   488,   541,    -1,   872,    -1,
     461,   562,    -1,    -1,   582,    -1,   582,   503,    -1,    -1,
     863,    -1,   499,   578,   500,    -1,    -1,   575,   545,    -1,
      -1,   287,   122,   544,    -1,   872,   488,   541,    -1,   872,
      -1,   872,   501,   872,   488,   541,    -1,   872,   501,   872,
      -1,   573,    -1,   578,   503,   573,    -1,   578,    -1,   578,
     503,    -1,   754,    -1,   865,   869,   494,   428,    -1,   377,
     865,   869,   494,   428,    -1,    69,   499,   784,   500,   540,
      -1,   434,   499,   579,   500,   571,   540,    -1,   434,   559,
     540,    -1,   320,   224,   499,   579,   500,   571,   540,    -1,
     320,   224,   559,   540,    -1,   168,   224,   499,   579,   500,
     336,   854,   574,   583,   552,   540,    -1,   569,    -1,   582,
     503,   569,    -1,   248,   172,    -1,   248,   305,    -1,   248,
     382,    -1,    -1,   234,   854,   563,    -1,   412,    -1,   410,
      -1,   238,   412,    -1,   238,   410,    -1,   177,   412,    -1,
     177,   410,    -1,   437,    -1,    -1,    32,    -1,    56,   117,
      -1,    31,   370,   854,   588,    -1,    31,   370,   190,   152,
     854,   588,    -1,   591,    -1,   588,   591,    -1,   461,    -1,
     485,    -1,    -1,     4,    -1,   490,     4,    -1,   491,     4,
      -1,   593,    -1,    38,   756,    -1,    57,   590,    -1,   108,
      -1,   270,   108,    -1,   199,   592,   590,    -1,   250,   590,
      -1,   258,   590,    -1,   270,   250,    -1,   270,   258,    -1,
     301,    56,   868,    -1,   370,   263,   868,    -1,   390,   589,
     590,    -1,   348,    -1,   348,   589,   590,    -1,    56,    -1,
      -1,   861,    -1,   490,   861,    -1,   491,   861,    -1,    31,
     406,   741,   376,   362,   857,    -1,    31,   406,   190,   152,
     741,   376,   362,   857,    -1,    31,   370,   854,   376,   362,
     857,    -1,    31,   370,   190,   152,   854,   376,   362,   857,
      -1,    31,   453,   854,   376,   362,   857,    -1,    31,   453,
     190,   152,   854,   376,   362,   857,    -1,   627,   621,    -1,
     627,   621,   854,   870,    -1,    31,   362,   857,   342,   417,
     857,    -1,    31,   406,   741,   342,   417,   857,    -1,    31,
     406,   190,   152,   741,   342,   417,   857,    -1,    31,   370,
     854,   342,   417,   857,    -1,    31,   370,   190,   152,   854,
     342,   417,   857,    -1,    31,   453,   854,   342,   417,   857,
      -1,    31,   453,   190,   152,   854,   342,   417,   857,    -1,
      31,   200,   854,   342,   417,   857,    -1,    31,   200,   190,
     152,   854,   342,   417,   857,    -1,    31,   406,   741,   342,
     597,   857,   417,   857,    -1,    31,   406,   190,   152,   741,
     342,   597,   857,   417,   857,    -1,    31,   406,   741,   342,
      88,   857,   417,   857,    -1,    31,   406,   190,   152,   741,
     342,    88,   857,   417,   857,    -1,    77,    -1,    -1,   151,
     857,   599,    -1,    95,   585,   406,   518,    38,   151,   857,
     599,   517,    -1,    95,   585,   406,   190,   272,   152,   518,
      38,   151,   857,   599,   517,    -1,   499,   817,   500,    -1,
      -1,   376,   601,    -1,   376,   238,   601,    -1,   376,   374,
     601,    -1,   376,   177,   601,    -1,   602,    -1,   646,   171,
      99,    -1,   415,   482,   604,    -1,   362,   862,    -1,   646,
     417,   605,    -1,   646,   488,   605,    -1,   646,   417,   117,
      -1,   646,   488,   117,    -1,   628,    -1,   590,    -1,   862,
      -1,     3,    -1,   773,   862,   783,    -1,   773,   499,   861,
     500,   862,    -1,   590,    -1,   117,    -1,   238,    -1,   603,
      -1,   605,   503,   603,    -1,   167,    70,    -1,    70,    -1,
     317,   857,   608,    38,   609,    -1,   499,   821,   500,    -1,
      -1,   672,    -1,   877,    -1,   652,    -1,   535,    -1,    95,
     585,   611,   854,   612,    38,   406,   672,    -1,    95,   585,
     611,   854,   612,    38,   784,    -1,   173,    -1,   245,    -1,
     499,   500,    -1,   499,   819,   500,    -1,    95,   619,   200,
     616,   617,   287,   854,   615,   499,   894,   500,   618,   747,
      -1,    95,   619,   200,   616,   190,   272,   152,   568,   287,
     854,   615,   499,   894,   500,   618,   747,    -1,   863,    -1,
     441,   614,    -1,    -1,    84,    -1,    -1,   568,    -1,    -1,
     461,   554,    -1,    -1,   434,    -1,    -1,   153,   623,    -1,
     153,   627,   621,   623,    -1,   153,   451,   623,    -1,   153,
     499,   626,   500,   623,    -1,   451,    -1,    -1,   628,    -1,
     590,    -1,    -1,   594,    -1,   587,    -1,   523,    -1,   874,
      -1,   606,    -1,   653,    -1,   516,    -1,   610,    -1,   520,
      -1,   640,    -1,   539,    -1,   896,    -1,   534,    -1,   535,
      -1,   631,    -1,   598,    -1,   613,    -1,   877,    -1,   642,
      -1,   519,    -1,   607,    -1,   596,    -1,   672,    -1,   875,
      -1,   652,    -1,   647,    -1,   513,    -1,   600,    -1,   644,
      -1,   638,    -1,     3,    -1,   897,    -1,   901,    -1,   624,
      -1,   862,    -1,   629,    -1,   626,   503,   629,    -1,    34,
      -1,    33,    -1,   424,    -1,   159,    -1,   287,    -1,   625,
      -1,   630,   622,    -1,   624,    -1,   627,    -1,   137,   632,
     190,   152,   634,   635,    -1,   137,   632,   634,   635,    -1,
     137,   633,   190,   152,   855,   635,    -1,   137,   633,   855,
     635,    -1,   137,   636,   857,   287,   868,   635,    -1,   137,
     636,   190,   152,   857,   287,   868,   635,    -1,   137,   428,
     637,   635,    -1,   137,   428,   190,   152,   637,   635,    -1,
     406,    -1,   370,    -1,   173,    -1,   245,    -1,   245,   406,
      -1,   453,    -1,   249,   453,    -1,   200,    -1,   168,   406,
      -1,    76,    -1,    92,    -1,   392,    -1,   413,   365,   304,
      -1,   413,   365,   129,    -1,   413,   365,   411,    -1,   413,
     365,    85,    -1,    23,   251,    -1,   146,   422,    -1,   156,
      -1,   168,   109,   465,    -1,   326,    -1,   362,    -1,   373,
      -1,   868,    -1,   634,   503,   868,    -1,    60,    -1,   349,
      -1,    -1,   312,    -1,   359,    -1,   422,    -1,   754,    -1,
     637,   503,   754,    -1,    95,   585,   453,   854,   574,   618,
      38,   672,   639,    -1,    95,   292,   344,   585,   453,   854,
     574,   618,    38,   672,   639,    -1,    95,   585,   334,   453,
     854,   499,   578,   500,   618,    38,   672,   639,    -1,    95,
     292,   344,   585,   334,   453,   854,   499,   578,   500,   618,
      38,   672,   639,    -1,   461,    69,   290,    -1,   461,    61,
      69,   290,    -1,   461,   238,    69,   290,    -1,    -1,    95,
     585,   370,   854,   641,    -1,    95,   585,   370,   190,   272,
     152,   854,   641,    -1,   588,    -1,    -1,   237,   643,    -1,
     211,   643,    -1,   167,   211,   643,    -1,   862,    -1,   863,
      -1,   645,   672,    -1,   402,   672,    -1,   402,   646,    -1,
     645,   646,    -1,   645,   415,   482,    -1,   645,   419,   221,
     233,    -1,   645,    29,    -1,   645,    -1,   380,    -1,   127,
      -1,   863,    -1,   646,   501,   863,    -1,   442,   649,   651,
     621,    -1,   442,   649,   651,   621,   854,    -1,   442,   649,
     651,   621,   595,    -1,   442,   499,   650,   500,    -1,   442,
     499,   650,   500,   854,   870,    -1,   627,    -1,   451,    -1,
     170,    -1,   172,    -1,     3,    -1,   172,    -1,    -1,   648,
      -1,   650,   503,   648,    -1,   170,    -1,    -1,   881,   439,
     536,   376,   893,   730,   537,   886,    -1,    93,   665,   854,
     574,   663,   654,   659,   668,   655,   589,   660,    -1,    93,
     499,   672,   500,   417,   659,   668,   589,   660,    -1,   171,
      -1,   417,    -1,   657,   124,   862,    -1,    -1,   667,    -1,
     656,   503,   667,    -1,   441,    -1,    -1,    38,    -1,    -1,
     325,    -1,    -1,   664,    -1,   499,   669,   500,    -1,   628,
      -1,   590,    -1,   492,    -1,   499,   656,   500,    -1,    -1,
     872,   661,    -1,   461,   285,    -1,    -1,   664,   666,    -1,
      -1,    52,    -1,    -1,    52,    -1,   285,    -1,   170,    -1,
     123,   658,   862,    -1,   277,   658,   862,    -1,    97,    -1,
     185,    -1,   328,   658,   862,    -1,   145,   658,   862,    -1,
     167,   328,   578,    -1,   167,   328,   492,    -1,   167,   272,
     277,   578,    -1,   167,   277,   578,    -1,   141,   862,    -1,
     628,    -1,   862,    -1,   393,    -1,   394,    -1,   662,    -1,
     669,   503,   662,    -1,   154,   110,   862,   660,    -1,   196,
     110,   862,    -1,   674,    -1,   673,    -1,   499,   674,   500,
      -1,   499,   673,   500,    -1,   676,    -1,   675,   688,    -1,
     675,   687,   721,   694,    -1,   675,   687,   693,   722,    -1,
     677,   675,    -1,   677,   675,   688,    -1,   677,   675,   687,
     721,   694,    -1,   677,   675,   687,   693,   722,    -1,   676,
      -1,   673,    -1,   369,   685,   843,   680,   730,   747,   710,
     719,   794,   720,   698,    -1,   369,   684,   845,   680,   730,
     747,   710,   719,   794,   720,   698,    -1,   729,    -1,   406,
     741,    -1,   675,   433,   683,   675,    -1,   675,   215,   683,
     675,    -1,   675,   147,   683,   675,    -1,   461,   678,    -1,
     485,   678,    -1,   461,   334,   678,    -1,   679,    -1,   678,
     503,   679,    -1,   857,   870,    38,   499,   609,   500,    -1,
     217,   681,    -1,    -1,   412,   682,   854,    -1,   410,   682,
     854,    -1,   238,   412,   682,   854,    -1,   238,   410,   682,
     854,    -1,   177,   412,   682,   854,    -1,   177,   410,   682,
     854,    -1,   437,   682,   854,    -1,   406,   854,    -1,   854,
      -1,   406,    -1,    -1,    29,    -1,   132,    -1,    -1,   132,
      -1,   132,   287,   499,   817,   500,    -1,    29,    -1,    -1,
     191,   279,    -1,   347,   279,    -1,    -1,   688,    -1,    -1,
     293,    56,   689,    -1,   293,    56,    29,   691,   692,    -1,
     293,    56,   492,   691,   692,    -1,   690,    -1,   689,   503,
     690,    -1,   784,   441,   813,   692,    -1,   784,   691,   692,
      -1,    39,    -1,   126,    -1,    -1,   484,   163,    -1,   484,
     228,    -1,    -1,   695,   696,    -1,   696,   695,    -1,   695,
      -1,   696,    -1,   693,    -1,    -1,   235,   704,    -1,   235,
     704,   503,   705,    -1,   161,   709,   706,   708,   288,    -1,
     161,   709,   708,   288,    -1,   284,   705,    -1,   284,   706,
     708,    -1,     4,   494,    -1,     9,   494,    -1,     4,   309,
      -1,     9,   309,    -1,     9,    -1,     9,   358,    -1,   441,
     360,   700,    -1,    -1,   863,    -1,    -1,   699,   499,   697,
     500,   703,    -1,   697,    -1,   697,   499,   863,   500,    -1,
     697,   499,   863,   503,     9,   500,    -1,   408,   700,    -1,
     701,    -1,    -1,   343,   499,     9,   500,    -1,    -1,   784,
      -1,    29,    -1,   784,   494,    -1,     4,   309,    -1,     9,
     309,    -1,   784,    -1,   786,    -1,   490,   707,    -1,   491,
     707,    -1,   861,    -1,     4,    -1,   357,    -1,   358,    -1,
     163,    -1,   269,    -1,   180,    56,   712,    -1,   180,    56,
      29,    -1,   180,    56,   492,    -1,    -1,   713,    -1,   711,
     503,   713,    -1,   711,    -1,   711,   503,    -1,   784,    -1,
     714,    -1,   716,    -1,   715,    -1,   717,    -1,   499,   500,
      -1,   356,   499,   817,   500,    -1,    98,   499,   817,   500,
      -1,   181,   378,   499,   712,   500,    -1,   181,    -1,   182,
      -1,   184,   784,    -1,    -1,   327,   784,    -1,    -1,   723,
      -1,   166,   330,   288,    -1,   721,    -1,    -1,   724,    -1,
     723,   724,    -1,   725,   726,   727,    -1,   166,   439,    -1,
     166,   270,   224,   439,    -1,   166,   379,    -1,   166,   224,
     379,    -1,   282,   853,    -1,    -1,   276,    -1,   383,   243,
      -1,    -1,   447,   499,   817,   500,    -1,   728,   503,   499,
     817,   500,    -1,   728,    -1,   728,   503,    -1,   171,   732,
      -1,    -1,   733,    -1,   731,   503,   733,    -1,   731,    -1,
     731,   503,    -1,   741,   736,   702,    -1,   742,   737,   702,
      -1,   729,   735,   702,    -1,   229,   742,   737,    -1,   673,
     736,   702,    -1,   229,   673,   736,    -1,   734,    -1,   499,
     734,   500,   735,    -1,   499,   734,   500,    -1,   733,    96,
     222,   733,    -1,   733,   738,   222,   733,   740,    -1,   733,
     222,   733,   740,    -1,   733,   266,   738,   222,   733,    -1,
     733,   266,   222,   733,    -1,    38,   864,   499,   856,   500,
      -1,    38,   864,    -1,   863,   499,   856,   500,    -1,   863,
      -1,   735,    -1,    -1,   735,    -1,    38,   499,   748,   500,
      -1,    38,   864,   499,   748,   500,    -1,   863,   499,   748,
     500,    -1,    -1,   172,   739,    -1,   232,   739,    -1,   353,
     739,    -1,   206,    -1,   296,    -1,    -1,   441,   499,   856,
     500,    -1,   287,   784,    -1,   854,    -1,   854,   492,    -1,
     288,   854,    -1,   288,   499,   854,   500,    -1,   789,   746,
      -1,   358,   171,   499,   744,   500,   746,    -1,   789,   745,
      -1,   743,    -1,   744,   503,   743,    -1,    38,   499,   748,
     500,    -1,    -1,   485,   294,    -1,    -1,   458,   784,    -1,
      -1,   749,    -1,   748,   503,   749,    -1,   864,   754,   750,
      -1,    75,   868,    -1,    -1,   863,   754,    -1,   751,   503,
     863,   754,    -1,   357,    -1,   399,    -1,   754,    -1,    -1,
     756,   755,    -1,   377,   756,   755,    -1,   756,    37,   497,
     861,   498,    -1,   377,   756,    37,   497,   861,   498,    -1,
     756,    37,    -1,   377,   756,    37,    -1,   752,   499,   751,
     500,   755,    -1,   246,   499,   821,   500,   755,    -1,   755,
     497,   498,    -1,   755,   497,   861,   498,    -1,    -1,   758,
      -1,   760,    -1,   762,    -1,   766,    -1,   772,    -1,   773,
     783,    -1,   773,   499,   861,   500,    -1,   760,    -1,   763,
      -1,   767,    -1,   772,    -1,   867,   759,    -1,   499,   818,
     500,    -1,    -1,   213,    -1,   214,    -1,   384,    -1,    51,
      -1,   331,    -1,   164,   761,    -1,   136,   316,    -1,   115,
     759,    -1,   114,   759,    -1,   280,   759,    -1,    54,    -1,
     499,   861,   500,    -1,    -1,   764,    -1,   765,    -1,   764,
      -1,   765,    -1,    53,   771,   499,   817,   500,    -1,    53,
     771,    -1,   768,    -1,   769,    -1,   768,    -1,   769,    -1,
     770,   499,   861,   500,    -1,   770,    -1,    67,   771,    -1,
      66,   771,    -1,   448,    -1,   265,    67,   771,    -1,   265,
      66,   771,    -1,   267,   771,    -1,   450,    -1,    -1,   416,
     499,   861,   500,   774,    -1,   416,   774,    -1,   415,   499,
     861,   500,   774,    -1,   415,   774,    -1,   216,    -1,   485,
     415,   482,    -1,   463,   415,   482,    -1,    -1,   479,    -1,
     480,    -1,   260,    -1,   261,    -1,   111,    -1,   112,    -1,
     187,    -1,   188,    -1,   256,    -1,   257,    -1,   366,    -1,
     367,    -1,   254,    -1,   255,    -1,   252,    -1,   253,    -1,
     775,    -1,   776,    -1,   777,    -1,   778,    -1,   779,    -1,
     780,    -1,   781,    -1,   782,    -1,   775,   417,   776,    -1,
     777,   417,   778,    -1,   777,   417,   779,    -1,   777,   417,
     780,    -1,   778,   417,   779,    -1,   778,   417,   780,    -1,
     779,   417,   780,    -1,    -1,   786,    -1,   784,    11,   754,
      -1,   784,    75,   868,    -1,   784,    43,   415,   482,   784,
      -1,   490,   784,    -1,   491,   784,    -1,   784,   490,   784,
      -1,   784,   491,   784,    -1,   784,   492,   784,    -1,   784,
     493,   784,    -1,   784,   494,   784,    -1,   784,   495,   784,
      -1,   784,    15,   784,    -1,   784,   486,   784,    -1,   784,
     487,   784,    -1,   784,   488,   784,    -1,   784,    18,   784,
      -1,   784,    19,   784,    -1,   784,    20,   784,    -1,   784,
     812,   784,    -1,   812,   784,    -1,   784,   812,    -1,   784,
      35,   784,    -1,   784,   292,   784,    -1,   272,   784,    -1,
     483,   784,    -1,   784,   176,   784,    -1,   784,   234,   784,
      -1,   784,   234,   784,   145,   784,    -1,   784,   483,   234,
     784,    -1,   784,   483,   234,   784,   145,   784,    -1,   784,
     192,   784,    -1,   784,   192,   784,   145,   784,    -1,   784,
     483,   192,   784,    -1,   784,   483,   192,   784,   145,   784,
      -1,   784,   381,   417,   784,    -1,   784,   381,   417,   784,
     145,   784,    -1,   784,   483,   381,   417,   784,    -1,   784,
     483,   381,   417,   784,   145,   784,    -1,   784,   219,   277,
      -1,   784,   220,    -1,   784,   219,   272,   277,    -1,   784,
     272,   277,    -1,   784,   275,    -1,   805,    -1,   504,   808,
     505,    -1,   497,   818,   498,    -1,   784,    16,   784,    -1,
     784,    17,   784,    -1,   805,   298,   805,    -1,   784,   219,
     424,    -1,   784,   219,   272,   424,    -1,   784,   219,   159,
      -1,   784,   219,   272,   159,    -1,   784,   219,   435,    -1,
     784,   219,   272,   435,    -1,   784,   219,   132,   171,   784,
      -1,   784,   219,   272,   132,   171,   784,    -1,   784,   219,
     282,   499,   821,   500,    -1,   784,   219,   272,   282,   499,
     821,   500,    -1,   784,    50,   842,   785,    35,   784,    -1,
     784,   483,    50,   842,   785,    35,   784,    -1,   784,    50,
     403,   785,    35,   784,    -1,   784,   483,    50,   403,   785,
      35,   784,    -1,   784,   197,   831,    -1,   784,   483,   197,
     831,    -1,   784,   814,   809,   673,    -1,   784,   814,   809,
     499,   784,   500,    -1,    37,   673,    -1,   117,    -1,    37,
     497,   818,   498,    -1,   786,    -1,   785,    11,   754,    -1,
     490,   785,    -1,   491,   785,    -1,   785,   490,   785,    -1,
     785,   491,   785,    -1,   785,   492,   785,    -1,   785,   493,
     785,    -1,   785,   494,   785,    -1,   785,   495,   785,    -1,
     785,    15,   785,    -1,   785,   486,   785,    -1,   785,   487,
     785,    -1,   785,   488,   785,    -1,   785,    18,   785,    -1,
     785,    19,   785,    -1,   785,    20,   785,    -1,   785,   812,
     785,    -1,   812,   785,    -1,   785,   812,    -1,   785,   219,
     132,   171,   785,    -1,   785,   219,   272,   132,   171,   785,
      -1,   785,   219,   282,   499,   821,   500,    -1,   785,   219,
     272,   282,   499,   821,   500,    -1,   837,    -1,   860,    -1,
     506,     9,    -1,   507,   841,    -1,    10,   841,    -1,   499,
     784,   500,   841,    -1,   832,    -1,   788,   841,    -1,   673,
      -1,   673,   840,    -1,   152,   673,    -1,   718,   499,   817,
     500,    -1,   859,   499,   500,    -1,   859,   499,   819,   687,
     686,   500,    -1,   859,   499,   449,   820,   687,   686,   500,
      -1,   859,   499,   819,   503,   449,   820,   687,   686,   500,
      -1,   859,   499,    29,   819,   687,   686,   500,    -1,   859,
     499,   132,   819,   687,   686,   500,    -1,   859,   499,   492,
     500,    -1,   787,   791,   792,   793,   797,    -1,   790,    -1,
     787,    -1,   790,    -1,    76,   166,   499,   784,   500,    -1,
     101,    -1,   104,    -1,   104,   499,   861,   500,    -1,   105,
      -1,   105,   499,   861,   500,    -1,   239,    -1,   239,   499,
     861,   500,    -1,   240,    -1,   240,   499,   861,   500,    -1,
     102,    -1,   106,    -1,   375,    -1,   440,    -1,   100,    -1,
     103,    -1,    63,   499,   784,    38,   754,   500,    -1,   427,
     499,   784,    38,   754,   500,    -1,   158,   499,   822,   500,
      -1,   299,   499,   824,   500,    -1,   313,   499,   826,   500,
      -1,   401,   499,   827,   500,    -1,   421,   499,   784,    38,
     754,   500,    -1,   423,   499,    55,   830,   500,    -1,   423,
     499,   230,   830,   500,    -1,   423,   499,   418,   830,   500,
      -1,   423,   499,   830,   500,    -1,   278,   499,   784,   503,
     784,   500,    -1,    74,   499,   817,   500,    -1,   462,   180,
     499,   688,   500,    -1,    -1,   162,   499,   458,   784,   500,
      -1,   162,   499,   784,   500,    -1,    -1,   155,    -1,    -1,
     460,   795,    -1,    -1,   796,    -1,   795,   503,   796,    -1,
     863,    38,   798,    -1,   297,   798,    -1,   297,   863,    -1,
      -1,   499,   799,   800,   687,   801,   500,    -1,   863,    -1,
      -1,   306,    56,   816,    -1,    -1,   329,   802,    -1,   358,
     802,    -1,    -1,   803,    -1,    50,   803,    35,   803,    -1,
     430,   315,    -1,   430,   165,    -1,    99,   357,    -1,   784,
     315,    -1,   784,   165,    -1,   357,   499,   817,   500,    -1,
     357,   499,   500,    -1,   804,    -1,   499,   816,   503,   784,
     500,    -1,   864,   508,   784,    -1,   806,    -1,   807,   503,
     806,    -1,   807,    -1,   807,   503,    -1,    36,    -1,   386,
      -1,    29,    -1,     8,    -1,   811,    -1,   490,    -1,   491,
      -1,   492,    -1,   493,    -1,   494,    -1,   495,    -1,    15,
      -1,   486,    -1,   487,    -1,   488,    -1,    18,    -1,    19,
      -1,    20,    -1,     8,    -1,   289,   499,   815,   500,    -1,
     810,    -1,   289,   499,   815,   500,    -1,   810,    -1,   289,
     499,   815,   500,    -1,   234,    -1,   483,   234,    -1,   176,
      -1,   483,   176,    -1,   192,    -1,   483,   192,    -1,   810,
      -1,   863,   501,   815,    -1,   784,    -1,   816,   503,   784,
      -1,   816,    -1,   816,   503,    -1,   817,    -1,    -1,   820,
      -1,   819,   503,   820,    -1,   784,    -1,   871,    13,   784,
      -1,   871,    14,   784,    -1,   754,    -1,   821,   503,   754,
      -1,   823,   171,   784,    -1,    -1,     3,    -1,   775,    -1,
     776,    -1,   777,    -1,   778,    -1,   779,    -1,   780,    -1,
     781,    -1,   782,    -1,   862,    -1,   784,   825,   828,   829,
      -1,   784,   825,   828,    -1,   310,   784,    -1,   785,   197,
     785,    -1,    -1,   784,   828,   829,    -1,   784,   829,   828,
      -1,   784,   828,    -1,   784,   829,    -1,   816,    -1,    -1,
     171,   784,    -1,   166,   784,    -1,   784,   171,   817,    -1,
     171,   817,    -1,   817,    -1,   673,    -1,   499,   817,   500,
      -1,    62,   836,   833,   835,   143,    -1,   834,    -1,   833,
     834,    -1,   457,   784,   414,   784,    -1,   139,   784,    -1,
      -1,   784,    -1,    -1,   863,    -1,   863,   840,    -1,   501,
     858,    -1,   497,   784,   498,    -1,   497,   839,   508,   839,
     498,    -1,   784,    -1,    -1,   838,    -1,   840,   838,    -1,
      -1,   841,   838,    -1,    42,    -1,    -1,   845,    -1,    -1,
     846,    -1,   844,   503,   846,    -1,   844,    -1,   844,   503,
      -1,   784,    38,   873,    -1,   784,     3,    -1,   784,    -1,
     492,   848,   852,    -1,   863,   501,   492,   848,   852,    -1,
     148,   499,   856,   500,    -1,   148,   863,    -1,   847,    -1,
      -1,   784,    38,   863,    -1,   849,    -1,   850,   503,   849,
      -1,   850,    -1,   850,   503,    -1,   344,   499,   851,   500,
      -1,   344,   849,    -1,    -1,   854,    -1,   853,   503,   854,
      -1,   864,    -1,   863,   840,    -1,   857,    -1,   855,   503,
     857,    -1,   855,    -1,   855,   503,    -1,   864,    -1,   872,
      -1,   866,    -1,   863,   840,    -1,   861,    -1,     4,    -1,
     862,   841,    -1,     6,    -1,     7,    -1,   859,   862,    -1,
     859,   499,   819,   687,   686,   500,   862,    -1,   757,   862,
      -1,   773,   499,   784,   500,   783,    -1,   773,   861,   783,
      -1,   773,   862,   783,    -1,   424,    -1,   159,    -1,   277,
      -1,     9,    -1,     5,    -1,     3,    -1,   897,    -1,   898,
      -1,   863,    -1,     5,    -1,     3,    -1,   897,    -1,   902,
      -1,     3,    -1,   897,    -1,   899,    -1,     3,    -1,   897,
      -1,   900,    -1,   863,    -1,   863,   869,    -1,   501,   858,
      -1,   869,   501,   858,    -1,   499,   856,   500,    -1,    -1,
     865,    -1,     3,    -1,   901,    -1,   897,    -1,   903,    -1,
     872,    -1,     5,    -1,    58,   787,    -1,    21,   876,    -1,
      49,   876,    -1,   390,   876,    -1,    81,   876,    -1,   143,
     876,    -1,   355,   876,    -1,   464,    -1,   419,    -1,    -1,
     881,   210,   217,   879,   878,   884,   886,    -1,   672,    -1,
     300,   887,   446,   672,    -1,   499,   891,   500,   672,    -1,
     499,   891,   500,   300,   887,   446,   672,    -1,   117,   447,
      -1,   854,    -1,   854,    38,   863,    -1,   499,   894,   500,
     747,    -1,   287,    88,   857,    -1,    -1,   677,    -1,    -1,
     863,   841,    -1,   895,   488,   784,    -1,   499,   888,   500,
     488,   784,    -1,   287,    86,   880,   133,   439,   376,   893,
     747,    -1,   287,    86,   880,   133,   273,    -1,    -1,   863,
     889,   890,   691,   692,    -1,   789,   889,   890,   691,   692,
      -1,   499,   784,   500,   889,   890,   691,   692,    -1,   350,
     844,    -1,    -1,   440,    -1,   405,    -1,   895,    -1,   888,
     503,   895,    -1,    75,   868,    -1,    -1,   868,    -1,    -1,
     882,    -1,   891,   503,   882,    -1,   883,    -1,   892,   503,
     883,    -1,   892,    -1,   892,   503,    -1,   885,    -1,   894,
     503,   885,    -1,   863,   841,    -1,    95,   428,   868,    38,
     754,    -1,    21,    -1,    22,    -1,    23,    -1,    24,    -1,
      25,    -1,    26,    -1,    27,    -1,    28,    -1,    30,    -1,
      31,    -1,    32,    -1,    40,    -1,    41,    -1,    43,    -1,
      44,    -1,    45,    -1,    47,    -1,    48,    -1,    49,    -1,
      56,    -1,    57,    -1,    58,    -1,    59,    -1,    60,    -1,
      61,    -1,    64,    -1,    65,    -1,    68,    -1,    70,    -1,
      71,    -1,    72,    -1,    73,    -1,    78,    -1,    79,    -1,
      80,    -1,    81,    -1,    82,    -1,    83,    -1,    85,    -1,
      86,    -1,    87,    -1,    89,    -1,    90,    -1,    91,    -1,
      92,    -1,    93,    -1,    94,    -1,    97,    -1,    98,    -1,
      99,    -1,   107,    -1,   108,    -1,   109,    -1,   110,    -1,
     111,    -1,   112,    -1,   113,    -1,   116,    -1,   118,    -1,
     120,    -1,   121,    -1,   122,    -1,   123,    -1,   124,    -1,
     125,    -1,   127,    -1,   128,    -1,   129,    -1,   130,    -1,
     131,    -1,   134,    -1,   135,    -1,   136,    -1,   137,    -1,
     138,    -1,   140,    -1,   141,    -1,   142,    -1,   144,    -1,
     145,    -1,   146,    -1,   148,    -1,   149,    -1,   150,    -1,
     151,    -1,   153,    -1,   154,    -1,   155,    -1,   156,    -1,
     157,    -1,   160,    -1,   162,    -1,   163,    -1,   165,    -1,
     167,    -1,   169,    -1,   173,    -1,   174,    -1,   177,    -1,
     179,    -1,   183,    -1,   185,    -1,   186,    -1,   187,    -1,
     188,    -1,   189,    -1,   190,    -1,   191,    -1,   193,    -1,
     194,    -1,   195,    -1,   196,    -1,   198,    -1,   199,    -1,
     200,    -1,   201,    -1,   202,    -1,   203,    -1,   205,    -1,
     208,    -1,   209,    -1,   210,    -1,   211,    -1,   212,    -1,
     218,    -1,   221,    -1,   223,    -1,   224,    -1,   225,    -1,
     226,    -1,   227,    -1,   228,    -1,   231,    -1,   233,    -1,
     236,    -1,   237,    -1,   238,    -1,   241,    -1,   242,    -1,
     243,    -1,   244,    -1,   245,    -1,   247,    -1,   248,    -1,
     249,    -1,   250,    -1,   251,    -1,   252,    -1,   253,    -1,
     254,    -1,   255,    -1,   256,    -1,   257,    -1,   258,    -1,
     259,    -1,   260,    -1,   261,    -1,   262,    -1,   263,    -1,
     264,    -1,   268,    -1,   269,    -1,   270,    -1,   273,    -1,
     274,    -1,   276,    -1,   279,    -1,   281,    -1,   282,    -1,
     283,    -1,   285,    -1,   286,    -1,   289,    -1,   290,    -1,
     291,    -1,   294,    -1,   297,    -1,   300,    -1,   301,    -1,
     302,    -1,   303,    -1,   304,    -1,   305,    -1,   306,    -1,
     307,    -1,   308,    -1,   309,    -1,   311,    -1,   312,    -1,
     314,    -1,   315,    -1,   317,    -1,   318,    -1,   319,    -1,
     321,    -1,   322,    -1,   323,    -1,   324,    -1,   325,    -1,
     326,    -1,   328,    -1,   329,    -1,   330,    -1,   332,    -1,
     333,    -1,   334,    -1,   335,    -1,   337,    -1,   338,    -1,
     339,    -1,   340,    -1,   341,    -1,   342,    -1,   343,    -1,
     344,    -1,   345,    -1,   346,    -1,   347,    -1,   348,    -1,
     349,    -1,   351,    -1,   352,    -1,   354,    -1,   355,    -1,
     356,    -1,   358,    -1,   359,    -1,   360,    -1,   361,    -1,
     362,    -1,   363,    -1,   364,    -1,   365,    -1,   366,    -1,
     367,    -1,   368,    -1,   370,    -1,   371,    -1,   372,    -1,
     373,    -1,   374,    -1,   376,    -1,   378,    -1,   379,    -1,
     380,    -1,   382,    -1,   383,    -1,   385,    -1,   387,    -1,
     388,    -1,   389,    -1,   390,    -1,   391,    -1,   392,    -1,
     393,    -1,   394,    -1,   395,    -1,   396,    -1,   397,    -1,
     398,    -1,   400,    -1,   402,    -1,   404,    -1,   405,    -1,
     407,    -1,   409,    -1,   410,    -1,   411,    -1,   412,    -1,
     413,    -1,   419,    -1,   420,    -1,   422,    -1,   425,    -1,
     426,    -1,   428,    -1,   429,    -1,   430,    -1,   431,    -1,
     432,    -1,   435,    -1,   436,    -1,   437,    -1,   438,    -1,
     439,    -1,   442,    -1,   443,    -1,   444,    -1,   445,    -1,
     446,    -1,   450,    -1,   452,    -1,   453,    -1,   454,    -1,
     455,    -1,   456,    -1,   459,    -1,   462,    -1,   463,    -1,
     464,    -1,   465,    -1,   466,    -1,   467,    -1,   479,    -1,
     480,    -1,   481,    -1,   482,    -1,    50,    -1,    51,    -1,
      53,    -1,    54,    -1,    66,    -1,    67,    -1,    74,    -1,
     114,    -1,   115,    -1,   152,    -1,   158,    -1,   164,    -1,
     175,    -1,   181,    -1,   182,    -1,   207,    -1,   213,    -1,
     214,    -1,   216,    -1,   246,    -1,   265,    -1,   267,    -1,
     271,    -1,   278,    -1,   280,    -1,   295,    -1,   299,    -1,
     313,    -1,   316,    -1,   331,    -1,   357,    -1,   377,    -1,
     384,    -1,   399,    -1,   401,    -1,   415,    -1,   416,    -1,
     421,    -1,   423,    -1,   427,    -1,   447,    -1,   448,    -1,
     468,    -1,   469,    -1,   470,    -1,   471,    -1,   472,    -1,
     473,    -1,   474,    -1,   475,    -1,   476,    -1,   477,    -1,
     478,    -1,    46,    -1,    52,    -1,    76,    -1,    84,    -1,
      96,    -1,   100,    -1,   101,    -1,   102,    -1,   103,    -1,
     106,    -1,   170,    -1,   172,    -1,   175,    -1,   176,    -1,
     192,    -1,   206,    -1,   219,    -1,   220,    -1,   222,    -1,
     232,    -1,   234,    -1,   246,    -1,   266,    -1,   275,    -1,
     296,    -1,   298,    -1,   353,    -1,   375,    -1,   381,    -1,
     399,    -1,   408,    -1,   440,    -1,   451,    -1,    46,    -1,
      52,    -1,    76,    -1,    84,    -1,    96,    -1,   100,    -1,
     101,    -1,   102,    -1,   103,    -1,   106,    -1,   170,    -1,
     172,    -1,   176,    -1,   192,    -1,   206,    -1,   219,    -1,
     220,    -1,   222,    -1,   232,    -1,   234,    -1,   266,    -1,
     275,    -1,   296,    -1,   298,    -1,   353,    -1,   375,    -1,
     381,    -1,   408,    -1,   427,    -1,   440,    -1,   451,    -1,
      46,    -1,    50,    -1,    51,    -1,    52,    -1,    53,    -1,
      54,    -1,    67,    -1,    66,    -1,    74,    -1,    76,    -1,
      84,    -1,    96,    -1,   100,    -1,   101,    -1,   102,    -1,
     103,    -1,   106,    -1,   114,    -1,   115,    -1,   152,    -1,
     158,    -1,   164,    -1,   170,    -1,   172,    -1,   175,    -1,
     176,    -1,   181,    -1,   182,    -1,   192,    -1,   206,    -1,
     207,    -1,   214,    -1,   216,    -1,   213,    -1,   219,    -1,
     220,    -1,   222,    -1,   232,    -1,   234,    -1,   246,    -1,
     265,    -1,   266,    -1,   267,    -1,   271,    -1,   275,    -1,
     278,    -1,   280,    -1,   296,    -1,   295,    -1,   298,    -1,
     299,    -1,   313,    -1,   316,    -1,   331,    -1,   353,    -1,
     357,    -1,   375,    -1,   377,    -1,   381,    -1,   384,    -1,
     399,    -1,   401,    -1,   408,    -1,   415,    -1,   416,    -1,
     421,    -1,   423,    -1,   427,    -1,   440,    -1,   447,    -1,
     448,    -1,   451,    -1,   468,    -1,   469,    -1,   470,    -1,
     471,    -1,   472,    -1,   473,    -1,   474,    -1,   475,    -1,
     476,    -1,   477,    -1,   478,    -1,    46,    -1,    52,    -1,
      76,    -1,    84,    -1,    96,    -1,   100,    -1,   101,    -1,
     102,    -1,   103,    -1,   106,    -1,   170,    -1,   172,    -1,
     175,    -1,   176,    -1,   192,    -1,   206,    -1,   219,    -1,
     220,    -1,   222,    -1,   232,    -1,   234,    -1,   246,    -1,
     266,    -1,   275,    -1,   296,    -1,   298,    -1,   353,    -1,
     375,    -1,   381,    -1,   399,    -1,   408,    -1,   427,    -1,
     440,    -1,   451,    -1,    29,    -1,    33,    -1,    34,    -1,
      35,    -1,    36,    -1,    37,    -1,    38,    -1,    39,    -1,
      42,    -1,    55,    -1,    62,    -1,    63,    -1,    69,    -1,
      75,    -1,    77,    -1,    88,    -1,    95,    -1,   104,    -1,
     105,    -1,   117,    -1,   119,    -1,   126,    -1,   132,    -1,
     133,    -1,   139,    -1,   143,    -1,   147,    -1,   159,    -1,
     161,    -1,   166,    -1,   168,    -1,   171,    -1,   178,    -1,
     180,    -1,   184,    -1,   197,    -1,   204,    -1,   215,    -1,
     217,    -1,   229,    -1,   230,    -1,   235,    -1,   239,    -1,
     240,    -1,   272,    -1,   277,    -1,   284,    -1,   287,    -1,
     288,    -1,   292,    -1,   293,    -1,   310,    -1,   320,    -1,
     327,    -1,   336,    -1,   350,    -1,   369,    -1,   386,    -1,
     403,    -1,   406,    -1,   414,    -1,   417,    -1,   418,    -1,
     424,    -1,   433,    -1,   434,    -1,   441,    -1,   449,    -1,
     457,    -1,   458,    -1,   460,    -1,   461,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   466,   466,   482,   494,   503,   504,   505,   506,   507,
     508,   509,   510,   511,   512,   513,   514,   515,   516,   517,
     518,   519,   520,   521,   522,   523,   524,   525,   526,   527,
     528,   529,   530,   531,   532,   533,   534,   535,   536,   538,
       2,     7,    14,    24,    25,    32,    11,    24,    37,    54,
      55,    56,    61,     7,    14,    22,     7,    16,    34,    41,
      46,    47,    48,    49,     9,    18,    27,    36,    45,    54,
      63,    72,    85,    87,    93,    94,    99,   103,   107,   118,
     126,   130,   139,   148,   157,   166,   175,   184,   192,   200,
     209,   218,   227,   236,   253,   262,   271,   280,   290,   303,
     318,   327,   335,   350,   358,   368,   378,   385,   392,   400,
     407,   418,   419,   424,   428,   433,   438,   446,   447,   452,
     456,   457,   458,     7,    13,    19,    25,     7,    21,    25,
      32,    43,    44,    50,    51,     7,    21,    36,    56,    57,
      84,    85,    86,    87,    88,    89,    93,    94,    99,   104,
     105,   106,   107,   108,   113,   120,   121,   122,   139,   146,
     153,   163,   173,   185,   193,   202,   220,   221,   225,   226,
     230,   239,   262,   276,   283,   288,   290,   292,   294,   297,
     300,   301,   302,   303,   308,   312,   313,   318,   325,   330,
     331,   332,   333,   334,   335,   336,   337,   343,   344,   348,
     353,   360,   367,   374,   386,   387,   388,   389,   393,   398,
     399,   400,   405,   410,   411,   412,   413,   414,   415,   420,
     440,   469,   470,   474,   478,   479,   480,   484,   488,   496,
     497,   502,   503,   504,   508,   516,   517,   522,   523,   527,
     532,   536,   540,   545,   553,   554,   558,   559,   563,   564,
     570,   581,   594,   608,   622,   636,   650,   673,   677,   684,
     688,   696,   701,   708,   718,   719,   720,   721,   722,   729,
     736,   737,   742,   743,     9,    17,    29,    30,    34,    35,
      36,    41,    42,    43,    48,    52,    56,    60,    64,    68,
      72,    76,    80,    84,    88,    92,    97,   101,   105,   112,
     113,   117,   118,   119,     7,    16,    25,    34,    43,    52,
       9,    19,     6,    15,    25,    35,    45,    55,    65,    75,
      85,    95,   106,   117,   127,   140,   141,     7,    14,    31,
      51,    52,    10,    16,    22,    28,    38,    39,    47,    58,
      70,    78,    86,    93,   103,   105,   111,   115,   119,   134,
     141,   142,   143,   147,   148,     5,    11,     7,    18,    19,
      23,    24,    25,    26,     8,    20,    36,    37,    41,    45,
       8,    33,    62,    66,    67,    72,    73,    78,    79,    83,
      84,    89,    90,     9,    16,    26,    33,    44,    45,    50,
      51,    52,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    90,    91,    92,    97,    98,   103,   107,   115,
     116,   121,   122,   123,   129,   134,   142,   143,     9,    19,
      29,    39,    49,    59,    69,    79,    93,    94,    95,    96,
      97,    98,    99,   100,   101,   102,   103,   104,   105,   106,
     107,   108,   113,   114,   115,   116,   117,   118,   119,   124,
     125,   130,   131,   132,   137,   138,   139,   142,   143,     8,
      21,    34,    52,    74,    75,    76,    77,     9,    19,    32,
      33,     7,    14,    20,    28,    29,     3,    10,    17,    24,
      31,    38,    45,    52,    61,    61,    63,    64,     8,    22,
      36,    48,    56,    70,    71,    72,    73,    74,    87,    88,
      93,    94,    98,    99,     7,     1,    30,    53,    54,    59,
      63,    68,    72,    80,    81,    85,    86,    91,    92,    96,
      97,   102,   103,   104,   105,   106,   111,   119,   123,   128,
     129,   134,   138,   143,   147,   151,   155,   159,   163,   167,
     171,   175,   179,   183,   187,   191,   195,   203,   209,   210,
     211,   216,   220,     7,    20,    47,    48,    52,    53,    68,
      69,    76,    84,    92,   100,   108,   116,   127,   128,   155,
     171,   188,   189,   208,   212,   216,   233,   240,   247,   257,
     258,   261,   273,   284,   292,   297,   302,   307,   312,   320,
     328,   333,   338,   345,   346,   350,   351,   352,   359,   360,
     364,   365,   369,   370,   371,   375,   376,   380,   381,   391,
     404,   405,   408,   417,   428,   429,   430,   433,   434,   435,
     439,   440,   441,   442,   446,   447,   451,   453,   469,   471,
     476,   479,   487,   491,   495,   499,   503,   507,   514,   519,
     526,   527,   531,   536,   540,   544,   552,   559,   560,   565,
     566,   570,   571,   576,   578,   580,   585,   605,   606,   608,
     613,   614,   618,   619,   622,   623,   648,   649,   654,   659,
     663,   664,   668,   669,   673,   674,   675,   676,   677,   681,
     694,   701,   708,   715,   716,   720,   721,   725,   726,   730,
     731,   735,   736,   740,   741,   745,   756,   757,   758,   759,
     763,   764,   769,   770,   771,   780,   786,   795,   796,   809,
     810,   814,   815,   819,   820,   826,   832,   840,   849,   857,
     866,   875,   879,   905,   909,   922,   936,   951,   963,   979,
     985,   990,   996,  1003,  1004,  1012,  1016,  1020,  1026,  1033,
    1038,  1039,  1040,  1041,  1045,  1046,  1058,  1059,  1064,  1071,
    1078,  1085,  1117,  1128,  1141,  1146,  1147,  1150,  1151,  1154,
    1155,  1160,  1161,  1166,  1170,  1176,  1197,  1205,  1218,  1221,
    1225,  1225,  1228,  1229,  1231,  1236,  1243,  1248,  1254,  1259,
    1265,  1271,  1280,  1282,  1285,  1289,  1290,  1291,  1292,  1293,
    1294,  1299,  1319,  1320,  1321,  1322,  1333,  1347,  1348,  1354,
    1359,  1364,  1369,  1374,  1379,  1384,  1389,  1395,  1401,  1407,
    1414,  1436,  1445,  1449,  1457,  1461,  1469,  1481,  1502,  1506,
    1512,  1516,  1529,  1537,  1547,  1549,  1551,  1553,  1555,  1557,
    1562,  1563,  1570,  1579,  1587,  1596,  1607,  1615,  1616,  1617,
    1621,  1621,  1624,  1624,  1627,  1627,  1630,  1630,  1633,  1633,
    1636,  1636,  1639,  1639,  1642,  1642,  1645,  1647,  1649,  1651,
    1653,  1655,  1657,  1659,  1661,  1666,  1671,  1677,  1684,  1689,
    1695,  1701,  1732,  1734,  1736,  1744,  1759,  1761,  1763,  1765,
    1767,  1769,  1771,  1773,  1775,  1777,  1779,  1781,  1783,  1785,
    1787,  1790,  1792,  1794,  1797,  1799,  1801,  1803,  1805,  1810,
    1815,  1822,  1827,  1834,  1839,  1846,  1851,  1859,  1867,  1875,
    1883,  1901,  1909,  1917,  1925,  1933,  1941,  1945,  1949,  1953,
    1961,  1965,  1981,  1989,  1997,  2005,  2013,  2021,  2029,  2033,
    2037,  2041,  2045,  2053,  2061,  2069,  2077,  2097,  2119,  2130,
    2137,  2148,  2162,  2178,  2180,  2182,  2184,  2186,  2188,  2190,
    2192,  2194,  2196,  2198,  2200,  2202,  2204,  2206,  2208,  2210,
    2212,  2214,  2216,  2218,  2222,  2226,  2230,  2244,  2245,  2246,
    2253,  2265,  2280,  2292,  2294,  2306,  2317,  2341,  2352,  2361,
    2365,  2372,  2380,  2388,  2399,  2407,  2435,  2471,  2482,  2483,
    2490,  2496,  2500,  2504,  2508,  2512,  2516,  2520,  2524,  2528,
    2532,  2536,  2540,  2544,  2548,  2552,  2556,  2558,  2560,  2564,
    2573,  2578,  2585,  2600,  2607,  2611,  2615,  2619,  2623,  2637,
    2638,  2642,  2643,  2644,  2648,  2649,  2656,  2657,  2661,  2662,
    2667,  2675,  2677,  2691,  2694,  2721,  2722,  2725,  2726,  2737,
    2743,  2750,  2759,  2776,  2821,  2829,  2837,  2845,  2853,  2874,
    2875,  2878,  2879,  2883,  2893,  2894,  2898,  2899,  2903,  2904,
    2905,  2908,  2909,  2912,  2913,  2914,  2915,  2916,  2917,  2918,
    2919,  2920,  2921,  2922,  2923,  2924,  2927,  2929,  2934,  2936,
    2941,  2943,  2945,  2947,  2949,  2951,  2953,  2955,  2969,  2971,
    2975,  2979,  2986,  2991,  2998,  3003,  3011,  3015,  3021,  3025,
    3034,  3045,  3046,  3050,  3054,  3061,  3062,  3063,  3064,  3065,
    3066,  3067,  3068,  3069,  3070,  3080,  3084,  3091,  3098,  3099,
    3115,  3119,  3124,  3128,  3143,  3148,  3152,  3155,  3158,  3159,
    3160,  3163,  3170,  3180,  3194,  3195,  3199,  3210,  3211,  3214,
    3215,  3218,  3222,  3229,  3233,  3241,  3252,  3253,  3257,  3258,
    3262,  3263,  3266,  3267,  3277,  3278,  3282,  3283,  3287,  3288,
    3291,  3307,  3315,  3323,  3338,  3356,  3357,  3360,  3361,  3364,
    3368,  3369,  3373,  3374,  3377,  3378,  3379,  3389,  3390,  3401,
    3405,  3432,  3434,  3440,  3441,  3444,  3446,  3456,  3459,  3470,
    3474,  3478,  3490,  3494,  3503,  3510,  3548,  3552,  3556,  3560,
    3564,  3568,  3572,  3578,  3579,  3595,  3596,  3597,  3600,  3601,
    3607,  3608,  3609,  3612,  3613,  3614,  3617,  3618,  3619,  3622,
    3623,  3626,  3628,  3633,  3634,  3637,  3645,  3646,  3647,  3648,
    3651,  3652,     6,     2,     9,    15,    21,    28,    35,    45,
      46,    47,     8,    21,    27,    34,    40,    47,    57,    61,
      70,    79,    88,    95,    96,   101,   113,   118,   143,   153,
     163,   169,   180,   191,   206,   207,   213,   214,   219,   220,
     226,   227,   231,   232,   237,   239,   245,   246,   250,   251,
     254,   255,   260,     7,    24,    24,    24,    24,    24,    24,
      24,    24,    24,    24,    24,    24,    24,    24,    24,    24,
      24,    24,    24,    24,    24,    24,    24,    24,    24,    24,
      24,    24,    24,    24,    24,    24,    24,    24,    24,    24,
      24,    24,    24,    24,    24,    24,    24,    24,    24,    24,
      24,    24,    24,    24,    24,    24,    24,    24,    24,    24,
      24,    24,    24,    24,    24,    24,    24,    24,    24,    24,
      24,    24,    24,    24,    24,    24,    24,    24,    24,    24,
      24,    24,    24,    24,    24,    24,    24,    24,    24,    24,
      24,    24,    24,    24,    24,    24,    24,    24,    24,    24,
      24,    24,    24,    24,    24,    24,    24,    24,    24,    24,
      24,    24,    24,    24,    24,    24,    24,    24,    24,    24,
      24,    24,    24,    24,    24,    24,    24,    24,    24,    24,
      24,    24,    24,    24,    24,    24,    24,    24,    24,    24,
      24,    24,    24,    24,    24,    24,    24,    24,    24,    24,
      24,    24,    24,    24,    24,    24,    24,    24,    24,    24,
      24,    24,    24,    24,    24,    24,    24,    24,    24,    24,
      24,    24,    24,    24,    24,    24,    24,    24,    24,    24,
      24,    24,    24,    24,    24,    24,    24,    24,    24,    24,
      24,    24,    24,    24,    24,    24,    24,    24,    24,    24,
      24,    24,    24,    24,    24,    24,    24,    24,    24,    24,
      24,    24,    24,    24,    24,    24,    24,    24,    24,    24,
      24,    24,    24,    24,    24,    24,    24,    24,    24,    24,
      24,    24,    24,    24,    24,    24,    24,    24,    24,    24,
      24,    24,    24,    24,    24,    24,    24,    24,    24,    24,
      24,    24,    24,    24,    24,    24,    24,    24,    24,    24,
      24,    24,    24,    24,    24,    24,    24,    24,    24,    24,
      24,    24,    24,    24,    24,    24,    24,    24,    24,    24,
      24,    24,    24,    24,    24,    24,    24,    24,    24,    24,
      24,    24,    24,    24,    24,    24,    24,    24,    24,    24,
      24,    24,    24,    24,    24,    24,    24,    24,    24,    24,
      24,    25,    25,    25,    25,    25,    25,    25,    25,    25,
      25,    25,    25,    25,    25,    25,    25,    25,    25,    25,
      25,    25,    25,    25,    25,    25,    25,    25,    25,    25,
      25,    25,    25,    25,    25,    25,    25,    25,    25,    25,
      25,    25,    25,    25,    25,    25,    25,    25,    25,    25,
      25,    25,    25,    25,    26,    26,    26,    26,    26,    26,
      26,    26,    26,    26,    26,    26,    26,    26,    26,    26,
      26,    26,    26,    26,    26,    26,    26,    26,    26,    26,
      26,    26,    26,    26,    26,    26,    26,    27,    27,    27,
      27,    27,    27,    27,    27,    27,    27,    27,    27,    27,
      27,    27,    27,    27,    27,    27,    27,    27,    27,    27,
      27,    27,    27,    27,    27,    27,    27,    27,    28,    28,
      28,    28,    28,    28,    28,    28,    28,    28,    28,    28,
      28,    28,    28,    28,    28,    28,    28,    28,    28,    28,
      28,    28,    28,    28,    28,    28,    28,    28,    28,    28,
      28,    28,    28,    28,    28,    28,    28,    28,    28,    28,
      28,    28,    28,    28,    28,    28,    28,    28,    28,    28,
      28,    28,    28,    28,    28,    28,    28,    28,    28,    28,
      28,    28,    28,    28,    28,    28,    28,    28,    28,    28,
      28,    28,    28,    28,    28,    28,    28,    28,    28,    28,
      28,    29,    29,    29,    29,    29,    29,    29,    29,    29,
      29,    29,    29,    29,    29,    29,    29,    29,    29,    29,
      29,    29,    29,    29,    29,    29,    29,    29,    29,    29,
      29,    29,    29,    29,    29,    30,    30,    30,    30,    30,
      30,    30,    30,    30,    30,    30,    30,    30,    30,    30,
      30,    30,    30,    30,    30,    30,    30,    30,    30,    30,
      30,    30,    30,    30,    30,    30,    30,    30,    30,    30,
      30,    30,    30,    30,    30,    30,    30,    30,    30,    30,
      30,    30,    30,    30,    30,    30,    30,    30,    30,    30,
      30,    30,    30,    30,    30,    30,    30,    30,    30,    30,
      30,    30,    30,    30,    30,    30,    30
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "IDENT", "FCONST", "SCONST", "BCONST",
  "XCONST", "Op", "ICONST", "PARAM", "TYPECAST", "DOT_DOT", "COLON_EQUALS",
  "EQUALS_GREATER", "POWER_OF", "LAMBDA_ARROW", "DOUBLE_ARROW",
  "LESS_EQUALS", "GREATER_EQUALS", "NOT_EQUALS", "ABORT_P", "ABSOLUTE_P",
  "ACCESS", "ACTION", "ADD_P", "ADMIN", "AFTER", "AGGREGATE", "ALL",
  "ALSO", "ALTER", "ALWAYS", "ANALYSE", "ANALYZE", "AND", "ANY", "ARRAY",
  "AS", "ASC_P", "ASSERTION", "ASSIGNMENT", "ASYMMETRIC", "AT", "ATTACH",
  "ATTRIBUTE", "AUTHORIZATION", "BACKWARD", "BEFORE", "BEGIN_P", "BETWEEN",
  "BIGINT", "BINARY", "BIT", "BOOLEAN_P", "BOTH", "BY", "CACHE", "CALL_P",
  "CALLED", "CASCADE", "CASCADED", "CASE", "CAST", "CATALOG_P", "CHAIN",
  "CHAR_P", "CHARACTER", "CHARACTERISTICS", "CHECK_P", "CHECKPOINT",
  "CLASS", "CLOSE", "CLUSTER", "COALESCE", "COLLATE", "COLLATION",
  "COLUMN", "COLUMNS", "COMMENT", "COMMENTS", "COMMIT", "COMMITTED",
  "COMPRESSION", "CONCURRENTLY", "CONFIGURATION", "CONFLICT", "CONNECTION",
  "CONSTRAINT", "CONSTRAINTS", "CONTENT_P", "CONTINUE_P", "CONVERSION_P",
  "COPY", "COST", "CREATE_P", "CROSS", "CSV", "CUBE", "CURRENT_P",
  "CURRENT_CATALOG", "CURRENT_DATE", "CURRENT_ROLE", "CURRENT_SCHEMA",
  "CURRENT_TIME", "CURRENT_TIMESTAMP", "CURRENT_USER", "CURSOR", "CYCLE",
  "DATA_P", "DATABASE", "DAY_P", "DAYS_P", "DEALLOCATE", "DEC",
  "DECIMAL_P", "DECLARE", "DEFAULT", "DEFAULTS", "DEFERRABLE", "DEFERRED",
  "DEFINER", "DELETE_P", "DELIMITER", "DELIMITERS", "DEPENDS", "DESC_P",
  "DESCRIBE", "DETACH", "DICTIONARY", "DISABLE_P", "DISCARD", "DISTINCT",
  "DO", "DOCUMENT_P", "DOMAIN_P", "DOUBLE_P", "DROP", "EACH", "ELSE",
  "ENABLE_P", "ENCODING", "ENCRYPTED", "END_P", "ENUM_P", "ESCAPE",
  "EVENT", "EXCEPT", "EXCLUDE", "EXCLUDING", "EXCLUSIVE", "EXECUTE",
  "EXISTS", "EXPLAIN", "EXPORT_P", "EXPORT_STATE", "EXTENSION", "EXTERNAL",
  "EXTRACT", "FALSE_P", "FAMILY", "FETCH", "FILTER", "FIRST_P", "FLOAT_P",
  "FOLLOWING", "FOR", "FORCE", "FOREIGN", "FORWARD", "FREEZE", "FROM",
  "FULL", "FUNCTION", "FUNCTIONS", "GENERATED", "GLOB", "GLOBAL", "GRANT",
  "GRANTED", "GROUP_P", "GROUPING", "GROUPING_ID", "HANDLER", "HAVING",
  "HEADER_P", "HOLD", "HOUR_P", "HOURS_P", "IDENTITY_P", "IF_P",
  "IGNORE_P", "ILIKE", "IMMEDIATE", "IMMUTABLE", "IMPLICIT_P", "IMPORT_P",
  "IN_P", "INCLUDING", "INCREMENT", "INDEX", "INDEXES", "INHERIT",
  "INHERITS", "INITIALLY", "INLINE_P", "INNER_P", "INOUT", "INPUT_P",
  "INSENSITIVE", "INSERT", "INSTALL", "INSTEAD", "INT_P", "INTEGER",
  "INTERSECT", "INTERVAL", "INTO", "INVOKER", "IS", "ISNULL", "ISOLATION",
  "JOIN", "JSON", "KEY", "LABEL", "LANGUAGE", "LARGE_P", "LAST_P",
  "LATERAL_P", "LEADING", "LEAKPROOF", "LEFT", "LEVEL", "LIKE", "LIMIT",
  "LISTEN", "LOAD", "LOCAL", "LOCALTIME", "LOCALTIMESTAMP", "LOCATION",
  "LOCK_P", "LOCKED", "LOGGED", "MACRO", "MAP", "MAPPING", "MATCH",
  "MATERIALIZED", "MAXVALUE", "METHOD", "MICROSECOND_P", "MICROSECONDS_P",
  "MILLISECOND_P", "MILLISECONDS_P", "MINUTE_P", "MINUTES_P", "MINVALUE",
  "MODE", "MONTH_P", "MONTHS_P", "MOVE", "NAME_P", "NAMES", "NATIONAL",
  "NATURAL", "NCHAR", "NEW", "NEXT", "NO", "NONE", "NOT", "NOTHING",
  "NOTIFY", "NOTNULL", "NOWAIT", "NULL_P", "NULLIF", "NULLS_P", "NUMERIC",
  "OBJECT_P", "OF", "OFF", "OFFSET", "OIDS", "OLD", "ON", "ONLY",
  "OPERATOR", "OPTION", "OPTIONS", "OR", "ORDER", "ORDINALITY", "OUT_P",
  "OUTER_P", "OVER", "OVERLAPS", "OVERLAY", "OVERRIDING", "OWNED", "OWNER",
  "PARALLEL", "PARSER", "PARTIAL", "PARTITION", "PASSING", "PASSWORD",
  "PERCENT", "PLACING", "PLANS", "POLICY", "POSITION", "PRAGMA_P",
  "PRECEDING", "PRECISION", "PREPARE", "PREPARED", "PRESERVE", "PRIMARY",
  "PRIOR", "PRIVILEGES", "PROCEDURAL", "PROCEDURE", "PROGRAM",
  "PUBLICATION", "QUALIFY", "QUOTE", "RANGE", "READ_P", "REAL", "REASSIGN",
  "RECHECK", "RECURSIVE", "REF", "REFERENCES", "REFERENCING", "REFRESH",
  "REINDEX", "RELATIVE_P", "RELEASE", "RENAME", "REPEATABLE", "REPLACE",
  "REPLICA", "RESET", "RESPECT_P", "RESTART", "RESTRICT", "RETURNING",
  "RETURNS", "REVOKE", "RIGHT", "ROLE", "ROLLBACK", "ROLLUP", "ROW",
  "ROWS", "RULE", "SAMPLE", "SAVEPOINT", "SCHEMA", "SCHEMAS", "SCROLL",
  "SEARCH", "SECOND_P", "SECONDS_P", "SECURITY", "SELECT", "SEQUENCE",
  "SEQUENCES", "SERIALIZABLE", "SERVER", "SESSION", "SESSION_USER", "SET",
  "SETOF", "SETS", "SHARE", "SHOW", "SIMILAR", "SIMPLE", "SKIP",
  "SMALLINT", "SNAPSHOT", "SOME", "SQL_P", "STABLE", "STANDALONE_P",
  "START", "STATEMENT", "STATISTICS", "STDIN", "STDOUT", "STORAGE",
  "STORED", "STRICT_P", "STRIP_P", "STRUCT", "SUBSCRIPTION", "SUBSTRING",
  "SUMMARIZE", "SYMMETRIC", "SYSID", "SYSTEM_P", "TABLE", "TABLES",
  "TABLESAMPLE", "TABLESPACE", "TEMP", "TEMPLATE", "TEMPORARY", "TEXT_P",
  "THEN", "TIME", "TIMESTAMP", "TO", "TRAILING", "TRANSACTION",
  "TRANSFORM", "TREAT", "TRIGGER", "TRIM", "TRUE_P", "TRUNCATE", "TRUSTED",
  "TRY_CAST", "TYPE_P", "TYPES_P", "UNBOUNDED", "UNCOMMITTED",
  "UNENCRYPTED", "UNION", "UNIQUE", "UNKNOWN", "UNLISTEN", "UNLOGGED",
  "UNTIL", "UPDATE", "USER", "USING", "VACUUM", "VALID", "VALIDATE",
  "VALIDATOR", "VALUE_P", "VALUES", "VARCHAR", "VARIADIC", "VARYING",
  "VERBOSE", "VERSION_P", "VIEW", "VIEWS", "VIRTUAL", "VOLATILE", "WHEN",
  "WHERE", "WHITESPACE_P", "WINDOW", "WITH", "WITHIN", "WITHOUT", "WORK",
  "WRAPPER", "WRITE_P", "XML_P", "XMLATTRIBUTES", "XMLCONCAT",
  "XMLELEMENT", "XMLEXISTS", "XMLFOREST", "XMLNAMESPACES", "XMLPARSE",
  "XMLPI", "XMLROOT", "XMLSERIALIZE", "XMLTABLE", "YEAR_P", "YEARS_P",
  "YES_P", "ZONE", "NOT_LA", "NULLS_LA", "WITH_LA", "'<'", "'>'", "'='",
  "POSTFIXOP", "'+'", "'-'", "'*'", "'/'", "'%'", "'^'", "UMINUS", "'['",
  "']'", "'('", "')'", "'.'", "';'", "','", "'{'", "'}'", "'#'", "'?'",
  "':'", "$accept", "stmtblock", "stmtmulti", "stmt", "VariableResetStmt",
  "generic_reset", "reset_rest", "CreateAsStmt", "opt_with_data",
  "create_as_target", "PragmaStmt", "CreateSchemaStmt", "OptSchemaEltList",
  "schema_stmt", "AlterTableStmt", "alter_identity_column_option_list",
  "alter_column_default", "alter_identity_column_option",
  "alter_generic_option_list", "alter_table_cmd", "alter_using",
  "alter_generic_option_elem", "alter_table_cmds", "alter_generic_options",
  "opt_set_data", "DeallocateStmt", "DeleteStmt",
  "relation_expr_opt_alias", "where_or_current_clause", "using_clause",
  "CreateStmt", "ConstraintAttributeSpec", "def_arg",
  "OptParenthesizedSeqOptList", "generic_option_arg", "key_action",
  "ColConstraint", "ColConstraintElem", "GeneratedColumnType",
  "opt_GeneratedColumnType", "GeneratedConstraintElem",
  "generic_option_elem", "key_update", "key_actions", "OnCommitOption",
  "reloptions", "opt_no_inherit", "TableConstraint", "TableLikeOption",
  "reloption_list", "ExistingIndex", "ConstraintAttr", "OptWith",
  "definition", "TableLikeOptionList", "generic_option_name",
  "ConstraintAttributeElem", "columnDef", "def_list", "index_name",
  "TableElement", "def_elem", "opt_definition", "OptTableElementList",
  "columnElem", "opt_column_list", "ColQualList", "key_delete",
  "reloption_elem", "columnList", "columnList_opt_comma", "func_type",
  "ConstraintElem", "TableElementList", "key_match", "TableLikeClause",
  "OptTemp", "generated_when", "AlterSeqStmt", "SeqOptList", "opt_with",
  "NumericOnly", "SeqOptElem", "opt_by", "SignedIconst",
  "AlterObjectSchemaStmt", "AnalyzeStmt", "RenameStmt", "opt_column",
  "ExecuteStmt", "execute_param_clause", "VariableSetStmt", "set_rest",
  "generic_set", "var_value", "zone_value", "var_list", "CheckPointStmt",
  "PrepareStmt", "prep_type_clause", "PreparableStmt",
  "CreateFunctionStmt", "macro_alias", "param_list", "IndexStmt",
  "access_method", "access_method_clause", "opt_concurrently",
  "opt_index_name", "opt_reloptions", "opt_unique", "ExplainStmt",
  "opt_verbose", "explain_option_arg", "ExplainableStmt",
  "NonReservedWord", "NonReservedWord_or_Sconst", "explain_option_list",
  "analyze_keyword", "opt_boolean_or_string", "explain_option_elem",
  "explain_option_name", "DropStmt", "drop_type_any_name",
  "drop_type_name", "any_name_list", "opt_drop_behavior",
  "drop_type_name_on_any_name", "type_name_list", "ViewStmt",
  "opt_check_option", "CreateSeqStmt", "OptSeqOptList", "LoadStmt",
  "file_name", "VariableShowStmt", "show_or_describe", "var_name",
  "VacuumStmt", "vacuum_option_elem", "opt_full", "vacuum_option_list",
  "opt_freeze", "UpdateStmt", "CopyStmt", "copy_from", "copy_delimiter",
  "copy_generic_opt_arg_list", "opt_using", "opt_as", "opt_program",
  "copy_options", "copy_generic_opt_arg", "copy_generic_opt_elem",
  "opt_oids", "copy_opt_list", "opt_binary", "copy_opt_item",
  "copy_generic_opt_arg_list_item", "copy_file_name",
  "copy_generic_opt_list", "ExportStmt", "ImportStmt", "SelectStmt",
  "select_with_parens", "select_no_parens", "select_clause",
  "simple_select", "with_clause", "cte_list", "common_table_expr",
  "into_clause", "OptTempTableName", "opt_table", "all_or_distinct",
  "distinct_clause", "opt_all_clause", "opt_ignore_nulls",
  "opt_sort_clause", "sort_clause", "sortby_list", "sortby",
  "opt_asc_desc", "opt_nulls_order", "select_limit", "opt_select_limit",
  "limit_clause", "offset_clause", "sample_count", "sample_clause",
  "opt_sample_func", "tablesample_entry", "tablesample_clause",
  "opt_tablesample_clause", "opt_repeatable_clause", "select_limit_value",
  "select_offset_value", "select_fetch_first_value", "I_or_F_const",
  "row_or_rows", "first_or_next", "group_clause", "group_by_list",
  "group_by_list_opt_comma", "group_by_item", "empty_grouping_set",
  "rollup_clause", "cube_clause", "grouping_sets_clause",
  "grouping_or_grouping_id", "having_clause", "qualify_clause",
  "for_locking_clause", "opt_for_locking_clause", "for_locking_items",
  "for_locking_item", "for_locking_strength", "locked_rels_list",
  "opt_nowait_or_skip", "values_clause", "values_clause_opt_comma",
  "from_clause", "from_list", "from_list_opt_comma", "table_ref",
  "joined_table", "alias_clause", "opt_alias_clause", "func_alias_clause",
  "join_type", "join_outer", "join_qual", "relation_expr", "func_table",
  "rowsfrom_item", "rowsfrom_list", "opt_col_def_list", "opt_ordinality",
  "where_clause", "TableFuncElementList", "TableFuncElement",
  "opt_collate_clause", "colid_type_list", "RowOrStruct", "opt_Typename",
  "Typename", "opt_array_bounds", "SimpleTypename", "ConstTypename",
  "GenericType", "opt_type_modifiers", "Numeric", "opt_float", "Bit",
  "ConstBit", "BitWithLength", "BitWithoutLength", "Character",
  "ConstCharacter", "CharacterWithLength", "CharacterWithoutLength",
  "character", "opt_varying", "ConstDatetime", "ConstInterval",
  "opt_timezone", "year_keyword", "month_keyword", "day_keyword",
  "hour_keyword", "minute_keyword", "second_keyword",
  "millisecond_keyword", "microsecond_keyword", "opt_interval", "a_expr",
  "b_expr", "c_expr", "func_application", "func_expr",
  "func_expr_windowless", "func_expr_common_subexpr",
  "within_group_clause", "filter_clause", "export_clause", "window_clause",
  "window_definition_list", "window_definition", "over_clause",
  "window_specification", "opt_existing_window_name",
  "opt_partition_clause", "opt_frame_clause", "frame_extent",
  "frame_bound", "qualified_row", "row", "dict_arg", "dict_arguments",
  "dict_arguments_opt_comma", "sub_type", "all_Op", "MathOp", "qual_Op",
  "qual_all_Op", "subquery_Op", "any_operator", "expr_list",
  "expr_list_opt_comma", "opt_expr_list_opt_comma", "func_arg_list",
  "func_arg_expr", "type_list", "extract_list", "extract_arg",
  "overlay_list", "overlay_placing", "position_list", "substr_list",
  "substr_from", "substr_for", "trim_list", "in_expr", "case_expr",
  "when_clause_list", "when_clause", "case_default", "case_arg",
  "columnref", "indirection_el", "opt_slice_bound", "indirection",
  "opt_indirection", "opt_asymmetric", "opt_target_list_opt_comma",
  "target_list", "target_list_opt_comma", "target_el", "except_list",
  "opt_except_list", "replace_list_el", "replace_list",
  "replace_list_opt_comma", "opt_replace_list", "qualified_name_list",
  "qualified_name", "name_list", "name_list_opt_comma", "name",
  "attr_name", "func_name", "AexprConst", "Iconst", "Sconst", "ColId",
  "ColIdOrString", "type_function_name", "function_name_token",
  "type_name_token", "any_name", "attrs", "opt_name_list", "param_name",
  "ColLabel", "ColLabelOrString", "CallStmt", "TransactionStmt",
  "opt_transaction", "InsertStmt", "insert_rest", "insert_target",
  "opt_conf_expr", "opt_with_clause", "insert_column_item", "set_clause",
  "opt_on_conflict", "index_elem", "returning_clause", "override_kind",
  "set_target_list", "opt_collate", "opt_class", "insert_column_list",
  "set_clause_list", "set_clause_list_opt_comma", "index_params",
  "set_target", "CreateTypeStmt", "unreserved_keyword", "col_name_keyword",
  "func_name_keyword", "type_name_keyword", "other_keyword",
  "type_func_name_keyword", "reserved_keyword", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338,   339,   340,   341,   342,   343,   344,
     345,   346,   347,   348,   349,   350,   351,   352,   353,   354,
     355,   356,   357,   358,   359,   360,   361,   362,   363,   364,
     365,   366,   367,   368,   369,   370,   371,   372,   373,   374,
     375,   376,   377,   378,   379,   380,   381,   382,   383,   384,
     385,   386,   387,   388,   389,   390,   391,   392,   393,   394,
     395,   396,   397,   398,   399,   400,   401,   402,   403,   404,
     405,   406,   407,   408,   409,   410,   411,   412,   413,   414,
     415,   416,   417,   418,   419,   420,   421,   422,   423,   424,
     425,   426,   427,   428,   429,   430,   431,   432,   433,   434,
     435,   436,   437,   438,   439,   440,   441,   442,   443,   444,
     445,   446,   447,   448,   449,   450,   451,   452,   453,   454,
     455,   456,   457,   458,   459,   460,   461,   462,   463,   464,
     465,   466,   467,   468,   469,   470,   471,   472,   473,   474,
     475,   476,   477,   478,   479,   480,   481,   482,   483,   484,
     485,   486,   487,   488,   489,   490,   491,   492,   493,   494,
     495,   496,   497,   498,   499,   500,   501,   502,   503,   504,
     505,   506,   507,   508,   509,   510,   511,   512,   513,   514,
     515,   516,   517,   518,   519,   520,   521,   522,   523,   524,
     525,   526,   527,   528,   529,   530,   531,   532,   533,   534,
     535,   536,   537,   538,   539,   540,   541,   542,   543,   544,
     545,   546,   547,   548,   549,   550,   551,   552,   553,   554,
     555,   556,   557,   558,   559,   560,   561,   562,   563,   564,
     565,   566,   567,   568,   569,   570,   571,   572,   573,   574,
     575,   576,   577,   578,   579,   580,   581,   582,   583,   584,
     585,   586,   587,   588,   589,   590,   591,   592,   593,   594,
     595,   596,   597,   598,   599,   600,   601,   602,   603,   604,
     605,   606,   607,   608,   609,   610,   611,   612,   613,   614,
     615,   616,   617,   618,   619,   620,   621,   622,   623,   624,
     625,   626,   627,   628,   629,   630,   631,   632,   633,   634,
     635,   636,   637,   638,   639,   640,   641,   642,   643,   644,
     645,   646,   647,   648,   649,   650,   651,   652,   653,   654,
     655,   656,   657,   658,   659,   660,   661,   662,   663,   664,
     665,   666,   667,   668,   669,   670,   671,   672,   673,   674,
     675,   676,   677,   678,   679,   680,   681,   682,   683,   684,
     685,   686,   687,   688,   689,   690,   691,   692,   693,   694,
     695,   696,   697,   698,   699,   700,   701,   702,   703,   704,
     705,   706,   707,   708,   709,   710,   711,   712,   713,   714,
     715,   716,   717,   718,   719,   720,   721,   722,   723,   724,
     725,   726,   727,   728,   729,   730,   731,   732,   733,   734,
     735,   736,   737,   738,   739,   740,    60,    62,    61,   741,
      43,    45,    42,    47,    37,    94,   742,    91,    93,    40,
      41,    46,    59,    44,   123,   125,    35,    63,    58
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint16 yyr1[] =
{
       0,   509,   510,   511,   511,   512,   512,   512,   512,   512,
     512,   512,   512,   512,   512,   512,   512,   512,   512,   512,
     512,   512,   512,   512,   512,   512,   512,   512,   512,   512,
     512,   512,   512,   512,   512,   512,   512,   512,   512,   512,
     513,   514,   514,   515,   515,   515,   516,   516,   516,   517,
     517,   517,   518,   519,   519,   519,   520,   520,   521,   521,
     522,   522,   522,   522,   523,   523,   523,   523,   523,   523,
     523,   523,   524,   524,   525,   525,   526,   526,   526,   526,
     527,   527,   528,   528,   528,   528,   528,   528,   528,   528,
     528,   528,   528,   528,   528,   528,   528,   528,   528,   528,
     528,   528,   528,   528,   528,   528,   528,   528,   528,   528,
     528,   529,   529,   530,   530,   530,   530,   531,   531,   532,
     533,   533,   533,   534,   534,   534,   534,   535,   536,   536,
     536,   537,   537,   538,   538,   539,   539,   539,   540,   540,
     541,   541,   541,   541,   541,   541,   542,   542,   543,   544,
     544,   544,   544,   544,   545,   545,   545,   545,   546,   546,
     546,   546,   546,   546,   546,   546,   547,   547,   548,   548,
     549,   549,   549,   550,   551,   552,   552,   552,   552,   552,
     553,   553,   553,   553,   554,   555,   555,   556,   556,   557,
     557,   557,   557,   557,   557,   557,   557,   558,   558,   559,
     560,   560,   560,   560,   561,   561,   561,   561,   562,   563,
     563,   563,   564,   565,   565,   565,   565,   565,   565,   566,
     566,   567,   567,   568,   569,   569,   569,   570,   570,   571,
     571,   572,   572,   572,   573,   574,   574,   575,   575,   576,
     577,   577,   577,   577,   578,   578,   579,   579,   580,   580,
     580,   581,   581,   581,   581,   581,   581,   582,   582,   583,
     583,   583,   583,   584,   585,   585,   585,   585,   585,   585,
     585,   585,   586,   586,   587,   587,   588,   588,   589,   589,
     589,   590,   590,   590,   590,   591,   591,   591,   591,   591,
     591,   591,   591,   591,   591,   591,   591,   591,   591,   592,
     592,   593,   593,   593,   594,   594,   594,   594,   594,   594,
     595,   595,   596,   596,   596,   596,   596,   596,   596,   596,
     596,   596,   596,   596,   596,   597,   597,   598,   598,   598,
     599,   599,   600,   600,   600,   600,   601,   601,   601,   601,
     602,   602,   602,   602,   603,   603,   604,   604,   604,   604,
     604,   604,   604,   605,   605,   606,   606,   607,   608,   608,
     609,   609,   609,   609,   610,   610,   611,   611,   612,   612,
     613,   613,   614,   615,   615,   616,   616,   617,   617,   618,
     618,   619,   619,   620,   620,   620,   620,   621,   621,   622,
     622,   622,   623,   623,   623,   623,   623,   623,   623,   623,
     623,   623,   623,   623,   623,   623,   623,   623,   623,   623,
     623,   623,   623,   623,   623,   623,   623,   623,   623,   623,
     623,   623,   624,   624,   624,   625,   625,   626,   626,   627,
     627,   628,   628,   628,   628,   629,   630,   630,   631,   631,
     631,   631,   631,   631,   631,   631,   632,   632,   632,   632,
     632,   632,   632,   632,   632,   632,   632,   632,   632,   632,
     632,   632,   633,   633,   633,   633,   633,   633,   633,   634,
     634,   635,   635,   635,   636,   636,   636,   637,   637,   638,
     638,   638,   638,   639,   639,   639,   639,   640,   640,   641,
     641,   642,   642,   642,   643,   643,   644,   644,   644,   644,
     644,   644,   644,   644,   645,   645,   646,   646,   647,   647,
     647,   647,   647,   648,   648,   648,   648,   648,   649,   649,
     650,   650,   651,   651,   652,   653,   653,   654,   654,   655,
     655,   656,   656,   657,   657,   658,   658,   659,   659,   660,
     660,   661,   661,   661,   661,   661,   662,   663,   663,   664,
     664,   665,   665,   666,   666,   666,   666,   666,   666,   666,
     666,   666,   666,   666,   666,   666,   666,   667,   668,   668,
     668,   669,   669,   670,   671,   672,   672,   673,   673,   674,
     674,   674,   674,   674,   674,   674,   674,   675,   675,   676,
     676,   676,   676,   676,   676,   676,   677,   677,   677,   678,
     678,   679,   680,   680,   681,   681,   681,   681,   681,   681,
     681,   681,   681,   682,   682,   683,   683,   683,   684,   684,
     685,   685,   686,   686,   686,   687,   687,   688,   688,   688,
     689,   689,   690,   690,   691,   691,   691,   692,   692,   692,
     693,   693,   693,   693,   694,   694,   695,   695,   695,   695,
     696,   696,   697,   697,   697,   697,   697,   697,   698,   698,
     699,   699,   700,   700,   700,   700,   701,   702,   702,   703,
     703,   704,   704,   704,   704,   704,   705,   706,   706,   706,
     707,   707,   708,   708,   709,   709,   710,   710,   710,   710,
     711,   711,   712,   712,   713,   713,   713,   713,   713,   714,
     715,   716,   717,   718,   718,   719,   719,   720,   720,   721,
     721,   722,   722,   723,   723,   724,   725,   725,   725,   725,
     726,   726,   727,   727,   727,   728,   728,   729,   729,   730,
     730,   731,   731,   732,   732,   733,   733,   733,   733,   733,
     733,   733,   733,   734,   734,   734,   734,   734,   734,   735,
     735,   735,   735,   736,   736,   737,   737,   737,   737,   737,
     738,   738,   738,   738,   739,   739,   740,   740,   741,   741,
     741,   741,   742,   742,   743,   744,   744,   745,   745,   746,
     746,   747,   747,   748,   748,   749,   750,   750,   751,   751,
     752,   752,   753,   753,   754,   754,   754,   754,   754,   754,
     754,   754,   755,   755,   755,   756,   756,   756,   756,   756,
     756,   756,   757,   757,   757,   757,   758,   759,   759,   760,
     760,   760,   760,   760,   760,   760,   760,   760,   760,   760,
     761,   761,   762,   762,   763,   763,   764,   765,   766,   766,
     767,   767,   768,   769,   770,   770,   770,   770,   770,   770,
     771,   771,   772,   772,   772,   772,   773,   774,   774,   774,
     775,   775,   776,   776,   777,   777,   778,   778,   779,   779,
     780,   780,   781,   781,   782,   782,   783,   783,   783,   783,
     783,   783,   783,   783,   783,   783,   783,   783,   783,   783,
     783,   783,   784,   784,   784,   784,   784,   784,   784,   784,
     784,   784,   784,   784,   784,   784,   784,   784,   784,   784,
     784,   784,   784,   784,   784,   784,   784,   784,   784,   784,
     784,   784,   784,   784,   784,   784,   784,   784,   784,   784,
     784,   784,   784,   784,   784,   784,   784,   784,   784,   784,
     784,   784,   784,   784,   784,   784,   784,   784,   784,   784,
     784,   784,   784,   784,   784,   784,   784,   784,   784,   784,
     784,   784,   784,   785,   785,   785,   785,   785,   785,   785,
     785,   785,   785,   785,   785,   785,   785,   785,   785,   785,
     785,   785,   785,   785,   785,   785,   785,   786,   786,   786,
     786,   786,   786,   786,   786,   786,   786,   786,   786,   787,
     787,   787,   787,   787,   787,   787,   788,   788,   789,   789,
     790,   790,   790,   790,   790,   790,   790,   790,   790,   790,
     790,   790,   790,   790,   790,   790,   790,   790,   790,   790,
     790,   790,   790,   790,   790,   790,   790,   790,   790,   791,
     791,   792,   792,   792,   793,   793,   794,   794,   795,   795,
     796,   797,   797,   797,   798,   799,   799,   800,   800,   801,
     801,   801,   802,   802,   803,   803,   803,   803,   803,   804,
     804,   805,   805,   806,   807,   807,   808,   808,   809,   809,
     809,   810,   810,   811,   811,   811,   811,   811,   811,   811,
     811,   811,   811,   811,   811,   811,   812,   812,   813,   813,
     814,   814,   814,   814,   814,   814,   814,   814,   815,   815,
     816,   816,   817,   817,   818,   818,   819,   819,   820,   820,
     820,   821,   821,   822,   822,   823,   823,   823,   823,   823,
     823,   823,   823,   823,   823,   824,   824,   825,   826,   826,
     827,   827,   827,   827,   827,   827,   828,   829,   830,   830,
     830,   831,   831,   832,   833,   833,   834,   835,   835,   836,
     836,   837,   837,   838,   838,   838,   839,   839,   840,   840,
     841,   841,   842,   842,   843,   843,   844,   844,   845,   845,
     846,   846,   846,   846,   846,   847,   847,   848,   848,   849,
     850,   850,   851,   851,   852,   852,   852,   853,   853,   854,
     854,   855,   855,   856,   856,   857,   858,   859,   859,   860,
     860,   860,   860,   860,   860,   860,   860,   860,   860,   860,
     860,   860,   860,   861,   862,   863,   863,   863,   864,   864,
     865,   865,   865,   866,   866,   866,   867,   867,   867,   868,
     868,   869,   869,   870,   870,   871,   872,   872,   872,   872,
     873,   873,   874,   875,   875,   875,   875,   875,   875,   876,
     876,   876,   877,   878,   878,   878,   878,   878,   879,   879,
     880,   880,   880,   881,   881,   882,   883,   883,   884,   884,
     884,   885,   885,   885,   886,   886,   887,   887,   888,   888,
     889,   889,   890,   890,   891,   891,   892,   892,   893,   893,
     894,   894,   895,   896,   897,   897,   897,   897,   897,   897,
     897,   897,   897,   897,   897,   897,   897,   897,   897,   897,
     897,   897,   897,   897,   897,   897,   897,   897,   897,   897,
     897,   897,   897,   897,   897,   897,   897,   897,   897,   897,
     897,   897,   897,   897,   897,   897,   897,   897,   897,   897,
     897,   897,   897,   897,   897,   897,   897,   897,   897,   897,
     897,   897,   897,   897,   897,   897,   897,   897,   897,   897,
     897,   897,   897,   897,   897,   897,   897,   897,   897,   897,
     897,   897,   897,   897,   897,   897,   897,   897,   897,   897,
     897,   897,   897,   897,   897,   897,   897,   897,   897,   897,
     897,   897,   897,   897,   897,   897,   897,   897,   897,   897,
     897,   897,   897,   897,   897,   897,   897,   897,   897,   897,
     897,   897,   897,   897,   897,   897,   897,   897,   897,   897,
     897,   897,   897,   897,   897,   897,   897,   897,   897,   897,
     897,   897,   897,   897,   897,   897,   897,   897,   897,   897,
     897,   897,   897,   897,   897,   897,   897,   897,   897,   897,
     897,   897,   897,   897,   897,   897,   897,   897,   897,   897,
     897,   897,   897,   897,   897,   897,   897,   897,   897,   897,
     897,   897,   897,   897,   897,   897,   897,   897,   897,   897,
     897,   897,   897,   897,   897,   897,   897,   897,   897,   897,
     897,   897,   897,   897,   897,   897,   897,   897,   897,   897,
     897,   897,   897,   897,   897,   897,   897,   897,   897,   897,
     897,   897,   897,   897,   897,   897,   897,   897,   897,   897,
     897,   897,   897,   897,   897,   897,   897,   897,   897,   897,
     897,   897,   897,   897,   897,   897,   897,   897,   897,   897,
     897,   897,   897,   897,   897,   897,   897,   897,   897,   897,
     897,   897,   897,   897,   897,   897,   897,   897,   897,   897,
     897,   897,   897,   897,   897,   897,   897,   897,   897,   897,
     897,   897,   897,   897,   897,   897,   897,   897,   897,   897,
     897,   897,   897,   897,   897,   897,   897,   897,   897,   897,
     897,   897,   897,   897,   897,   897,   897,   897,   897,   897,
     897,   898,   898,   898,   898,   898,   898,   898,   898,   898,
     898,   898,   898,   898,   898,   898,   898,   898,   898,   898,
     898,   898,   898,   898,   898,   898,   898,   898,   898,   898,
     898,   898,   898,   898,   898,   898,   898,   898,   898,   898,
     898,   898,   898,   898,   898,   898,   898,   898,   898,   898,
     898,   898,   898,   898,   899,   899,   899,   899,   899,   899,
     899,   899,   899,   899,   899,   899,   899,   899,   899,   899,
     899,   899,   899,   899,   899,   899,   899,   899,   899,   899,
     899,   899,   899,   899,   899,   899,   899,   900,   900,   900,
     900,   900,   900,   900,   900,   900,   900,   900,   900,   900,
     900,   900,   900,   900,   900,   900,   900,   900,   900,   900,
     900,   900,   900,   900,   900,   900,   900,   900,   901,   901,
     901,   901,   901,   901,   901,   901,   901,   901,   901,   901,
     901,   901,   901,   901,   901,   901,   901,   901,   901,   901,
     901,   901,   901,   901,   901,   901,   901,   901,   901,   901,
     901,   901,   901,   901,   901,   901,   901,   901,   901,   901,
     901,   901,   901,   901,   901,   901,   901,   901,   901,   901,
     901,   901,   901,   901,   901,   901,   901,   901,   901,   901,
     901,   901,   901,   901,   901,   901,   901,   901,   901,   901,
     901,   901,   901,   901,   901,   901,   901,   901,   901,   901,
     901,   902,   902,   902,   902,   902,   902,   902,   902,   902,
     902,   902,   902,   902,   902,   902,   902,   902,   902,   902,
     902,   902,   902,   902,   902,   902,   902,   902,   902,   902,
     902,   902,   902,   902,   902,   903,   903,   903,   903,   903,
     903,   903,   903,   903,   903,   903,   903,   903,   903,   903,
     903,   903,   903,   903,   903,   903,   903,   903,   903,   903,
     903,   903,   903,   903,   903,   903,   903,   903,   903,   903,
     903,   903,   903,   903,   903,   903,   903,   903,   903,   903,
     903,   903,   903,   903,   903,   903,   903,   903,   903,   903,
     903,   903,   903,   903,   903,   903,   903,   903,   903,   903,
     903,   903,   903,   903,   903,   903,   903
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     3,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     0,
       2,     1,     1,     1,     2,     3,     7,    10,     9,     2,
       3,     0,     4,     2,     4,     5,     4,     7,     2,     0,
       1,     1,     1,     1,     4,     6,     4,     6,     4,     6,
       4,     6,     1,     2,     3,     2,     1,     3,     2,     3,
       1,     3,     2,     5,     3,     6,     4,     6,     6,     6,
       5,     5,     6,     9,     4,     5,     7,     6,     4,     8,
       4,     2,     4,     3,     6,     4,     2,     2,     2,     2,
       1,     2,     0,     1,     2,     2,     2,     1,     3,     4,
       2,     1,     0,     2,     3,     2,     3,     7,     1,     2,
       3,     2,     0,     2,     0,     9,    12,    11,     0,     2,
       1,     1,     1,     1,     1,     1,     3,     0,     1,     2,
       1,     1,     2,     2,     3,     1,     1,     2,     2,     1,
       2,     3,     5,     3,     2,     5,     1,     1,     1,     0,
       5,     7,     5,     2,     3,     1,     1,     2,     2,     0,
       3,     4,     4,     0,     3,     2,     0,     3,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     3,     3,
       1,     2,     2,     2,     2,     2,     2,     0,     3,     3,
       3,     0,     1,     2,     1,     2,     2,     2,     2,     3,
       4,     1,     3,     1,     1,     1,     1,     3,     1,     2,
       0,     1,     2,     0,     1,     3,     0,     2,     0,     3,
       3,     1,     5,     3,     1,     3,     1,     2,     1,     4,
       5,     5,     6,     3,     7,     4,    11,     1,     3,     2,
       2,     2,     0,     3,     1,     1,     2,     2,     2,     2,
       1,     0,     1,     2,     4,     6,     1,     2,     1,     1,
       0,     1,     2,     2,     1,     2,     2,     1,     2,     3,
       2,     2,     2,     2,     3,     3,     3,     1,     3,     1,
       0,     1,     2,     2,     6,     8,     6,     8,     6,     8,
       2,     4,     6,     6,     8,     6,     8,     6,     8,     6,
       8,     8,    10,     8,    10,     1,     0,     3,     9,    12,
       3,     0,     2,     3,     3,     3,     1,     3,     3,     2,
       3,     3,     3,     3,     1,     1,     1,     1,     3,     5,
       1,     1,     1,     1,     3,     2,     1,     5,     3,     0,
       1,     1,     1,     1,     8,     7,     1,     1,     2,     3,
      13,    16,     1,     2,     0,     1,     0,     1,     0,     2,
       0,     1,     0,     2,     4,     3,     5,     1,     0,     1,
       1,     0,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     3,     1,
       1,     1,     1,     1,     1,     2,     1,     1,     6,     4,
       6,     4,     6,     8,     4,     6,     1,     1,     1,     1,
       2,     1,     2,     1,     2,     1,     1,     1,     3,     3,
       3,     3,     2,     2,     1,     3,     1,     1,     1,     1,
       3,     1,     1,     0,     1,     1,     1,     1,     3,     9,
      11,    12,    14,     3,     4,     4,     0,     5,     8,     1,
       0,     2,     2,     3,     1,     1,     2,     2,     2,     2,
       3,     4,     2,     1,     1,     1,     1,     3,     4,     5,
       5,     4,     6,     1,     1,     1,     1,     1,     1,     0,
       1,     3,     1,     0,     8,    11,     9,     1,     1,     3,
       0,     1,     3,     1,     0,     1,     0,     1,     0,     1,
       3,     1,     1,     1,     3,     0,     2,     2,     0,     2,
       0,     1,     0,     1,     1,     1,     3,     3,     1,     1,
       3,     3,     3,     3,     4,     3,     2,     1,     1,     1,
       1,     1,     3,     4,     3,     1,     1,     3,     3,     1,
       2,     4,     4,     2,     3,     5,     5,     1,     1,    11,
      11,     1,     2,     4,     4,     4,     2,     2,     3,     1,
       3,     6,     2,     0,     3,     3,     4,     4,     4,     4,
       3,     2,     1,     1,     0,     1,     1,     0,     1,     5,
       1,     0,     2,     2,     0,     1,     0,     3,     5,     5,
       1,     3,     4,     3,     1,     1,     0,     2,     2,     0,
       2,     2,     1,     1,     1,     0,     2,     4,     5,     4,
       2,     3,     2,     2,     2,     2,     1,     2,     3,     0,
       1,     0,     5,     1,     4,     6,     2,     1,     0,     4,
       0,     1,     1,     2,     2,     2,     1,     1,     2,     2,
       1,     1,     1,     1,     1,     1,     3,     3,     3,     0,
       1,     3,     1,     2,     1,     1,     1,     1,     1,     2,
       4,     4,     5,     1,     1,     2,     0,     2,     0,     1,
       3,     1,     0,     1,     2,     3,     2,     4,     2,     3,
       2,     0,     1,     2,     0,     4,     5,     1,     2,     2,
       0,     1,     3,     1,     2,     3,     3,     3,     3,     3,
       3,     1,     4,     3,     4,     5,     4,     5,     4,     5,
       2,     4,     1,     1,     0,     1,     4,     5,     4,     0,
       2,     2,     2,     1,     1,     0,     4,     2,     1,     2,
       2,     4,     2,     6,     2,     1,     3,     4,     0,     2,
       0,     2,     0,     1,     3,     3,     2,     0,     2,     4,
       1,     1,     1,     0,     2,     3,     5,     6,     2,     3,
       5,     5,     3,     4,     0,     1,     1,     1,     1,     1,
       2,     4,     1,     1,     1,     1,     2,     3,     0,     1,
       1,     1,     1,     1,     2,     2,     2,     2,     2,     1,
       3,     0,     1,     1,     1,     1,     5,     2,     1,     1,
       1,     1,     4,     1,     2,     2,     1,     3,     3,     2,
       1,     0,     5,     2,     5,     2,     1,     3,     3,     0,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     3,     3,     3,     3,     3,     3,
       3,     0,     1,     3,     3,     5,     2,     2,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     2,     2,     3,     3,     2,     2,     3,     3,
       5,     4,     6,     3,     5,     4,     6,     4,     6,     5,
       7,     3,     2,     4,     3,     2,     1,     3,     3,     3,
       3,     3,     3,     4,     3,     4,     3,     4,     5,     6,
       6,     7,     6,     7,     6,     7,     3,     4,     4,     6,
       2,     1,     4,     1,     3,     2,     2,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     2,     2,     5,     6,     6,     7,     1,     1,     2,
       2,     2,     4,     1,     2,     1,     2,     2,     4,     3,
       6,     7,     9,     7,     7,     4,     5,     1,     1,     1,
       5,     1,     1,     4,     1,     4,     1,     4,     1,     4,
       1,     1,     1,     1,     1,     1,     6,     6,     4,     4,
       4,     4,     6,     5,     5,     5,     4,     6,     4,     5,
       0,     5,     4,     0,     1,     0,     2,     0,     1,     3,
       3,     2,     2,     0,     6,     1,     0,     3,     0,     2,
       2,     0,     1,     4,     2,     2,     2,     2,     2,     4,
       3,     1,     5,     3,     1,     3,     1,     2,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     4,     1,     4,
       1,     4,     1,     2,     1,     2,     1,     2,     1,     3,
       1,     3,     1,     2,     1,     0,     1,     3,     1,     3,
       3,     1,     3,     3,     0,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     4,     3,     2,     3,     0,
       3,     3,     2,     2,     1,     0,     2,     2,     3,     2,
       1,     1,     3,     5,     1,     2,     4,     2,     0,     1,
       0,     1,     2,     2,     3,     5,     1,     0,     1,     2,
       0,     2,     1,     0,     1,     0,     1,     3,     1,     2,
       3,     2,     1,     3,     5,     4,     2,     1,     0,     3,
       1,     3,     1,     2,     4,     2,     0,     1,     3,     1,
       2,     1,     3,     1,     2,     1,     1,     1,     2,     1,
       1,     2,     1,     1,     2,     7,     2,     5,     3,     3,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       2,     2,     3,     3,     0,     1,     1,     1,     1,     1,
       1,     1,     2,     2,     2,     2,     2,     2,     2,     1,
       1,     0,     7,     1,     4,     4,     7,     2,     1,     3,
       4,     3,     0,     1,     0,     2,     3,     5,     8,     5,
       0,     5,     5,     7,     2,     0,     1,     1,     1,     3,
       2,     0,     1,     0,     1,     3,     1,     3,     1,     2,
       1,     3,     2,     5,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
    1274,  1261,     0,   430,   429,  1261,     0,   356,  1261,   552,
     271,     0,   505,     0,  1261,     0,  1274,     0,     0,     0,
       0,     0,     0,     0,     0,  1261,   621,     0,   504,  1261,
       0,     0,   519,     0,     0,     0,     0,     0,     2,     4,
      35,    12,    28,    14,     7,    18,    19,    16,     6,     5,
       8,    30,    21,    36,    10,    29,    13,    25,    22,   388,
      20,    38,    15,    27,    37,   503,    34,    33,    11,    23,
      24,    31,   588,   575,   626,   587,  1273,   727,   591,     9,
      32,    26,     0,    17,  1260,  1259,  1253,     0,     0,     0,
       0,     0,  1254,  1225,  1304,  1305,  1306,  1307,  1308,  1309,
    1310,  1311,  1312,  1313,  1314,  1315,  1316,  1317,  1318,  1319,
    1664,  1320,  1321,  1322,  1611,  1612,  1665,  1613,  1614,  1323,
    1324,  1325,  1326,  1327,  1328,  1329,  1330,  1615,  1616,  1331,
    1332,  1333,  1334,  1335,  1617,  1666,  1336,  1337,  1338,  1339,
    1340,  1341,  1667,  1342,  1343,  1344,  1345,  1346,  1347,  1348,
    1349,  1350,  1668,  1351,  1352,  1353,  1669,  1670,  1671,  1672,
    1673,  1354,  1355,  1356,  1357,  1358,  1359,  1360,  1618,  1619,
    1361,  1362,  1363,  1364,  1365,  1366,  1367,  1368,  1369,  1370,
    1371,  1372,  1373,  1374,  1375,  1376,  1377,  1378,  1379,  1380,
    1381,  1382,  1383,  1384,  1385,  1386,  1387,  1388,  1620,  1389,
    1390,  1391,  1392,  1393,  1621,  1394,  1395,  1396,  1622,  1397,
    1398,  1399,  1674,  1675,  1400,  1401,  1623,  1677,  1402,  1403,
    1624,  1625,  1404,  1405,  1406,  1407,  1408,  1409,  1410,  1411,
    1678,  1412,  1413,  1414,  1415,  1416,  1417,  1418,  1419,  1420,
    1421,  1422,  1679,  1626,  1423,  1424,  1425,  1426,  1427,  1627,
    1628,  1629,  1428,  1680,  1681,  1429,  1682,  1430,  1431,  1432,
    1433,  1434,  1435,  1436,  1683,  1437,  1684,  1438,  1439,  1440,
    1441,  1442,  1443,  1444,  1445,  1630,  1446,  1447,  1448,  1449,
    1450,  1451,  1452,  1453,  1454,  1455,  1456,  1457,  1458,  1459,
    1460,  1461,  1462,  1463,  1631,  1686,  1632,  1464,  1465,  1466,
    1633,  1467,  1468,  1687,  1469,  1634,  1470,  1635,  1471,  1472,
    1473,  1474,  1475,  1476,  1477,  1478,  1479,  1636,  1688,  1480,
    1689,  1637,  1481,  1482,  1483,  1484,  1485,  1486,  1487,  1488,
    1489,  1490,  1491,  1492,  1638,  1493,  1494,  1639,  1495,  1496,
    1497,  1498,  1499,  1500,  1501,  1502,  1503,  1504,  1505,  1506,
    1640,  1507,  1508,  1509,  1510,  1511,  1512,  1513,  1514,  1515,
    1516,  1517,  1518,  1519,  1520,  1521,  1522,  1523,  1524,  1525,
    1690,  1526,  1527,  1528,  1641,  1529,  1530,  1531,  1532,  1533,
    1534,  1535,  1536,  1537,  1538,  1539,  1540,  1541,  1542,  1543,
    1544,  1691,  1545,  1642,  1546,  1547,  1548,  1692,  1549,  1550,
    1643,  1551,  1552,  1553,  1554,  1555,  1556,  1557,  1558,  1559,
    1560,  1561,  1562,  1563,  1644,  1564,  1645,  1565,  1566,  1567,
    1568,  1694,  1569,  1570,  1571,  1572,  1573,  1646,  1647,  1574,
    1575,  1648,  1576,  1649,  1577,  1578,  1650,  1579,  1580,  1581,
    1582,  1583,  1584,  1585,  1586,  1587,  1588,  1695,  1589,  1590,
    1591,  1592,  1593,  1651,  1652,  1594,  1696,  1595,  1596,  1597,
    1598,  1599,  1600,  1601,  1602,  1603,  1604,  1605,  1606,  1653,
    1654,  1655,  1656,  1657,  1658,  1659,  1660,  1661,  1662,  1663,
    1607,  1608,  1609,  1610,  1252,     0,     0,  1207,  1226,  1227,
    1235,  1256,   551,     0,     0,     0,     0,     0,     0,   265,
     264,     0,   381,   270,     0,     0,  1225,  1229,   125,  1623,
    1630,  1495,  1644,   123,  1228,  1205,  1226,     0,   455,   456,
       0,   464,     0,   448,   453,   449,     0,   474,   466,   475,
     467,   447,   468,   457,   446,     0,   476,     0,   451,     0,
       0,     0,  1257,   331,  1274,     0,   418,   398,   411,   400,
     394,   404,   405,   402,   393,   392,   413,   407,   419,   396,
     412,   399,   408,   383,   388,   406,   421,   401,   410,   420,
     417,   416,   397,   414,   395,   415,   409,   403,     0,   355,
       0,     0,  1224,   492,   494,   495,   491,    53,   359,    42,
    1646,  1574,    43,    40,    41,   506,  1258,   620,   618,     0,
    1175,  1402,  1440,  1533,  1544,  1646,   332,   336,     0,  1255,
    1651,   498,   497,     0,     0,   592,   768,  1228,  1199,   518,
       0,   523,     0,  1509,   596,   599,  1244,   597,   588,     0,
       1,  1274,   387,   310,   502,  1646,  1574,   499,   496,   617,
     617,     0,   617,     0,   580,   588,   583,   587,   728,     0,
       0,     0,  1410,     0,     0,  1410,     0,  1410,     0,  1410,
       0,     0,  1167,     0,  1168,  1208,     0,   236,   269,   268,
     267,   266,   271,  1410,    59,  1239,     0,   366,   367,     0,
       0,     0,     0,     0,   376,   126,   124,   462,   463,     0,
     454,   450,   452,     0,  1236,  1697,   822,  1698,   851,   829,
     851,   851,  1699,  1700,  1701,  1702,  1703,  1704,  1705,  1706,
     818,   818,  1376,   831,  1707,  1708,  1709,  1410,  1710,  1711,
     819,   820,   856,  1712,  1713,  1714,  1715,  1716,     0,     0,
    1717,   851,  1718,   818,  1719,  1720,   823,  1721,   790,  1722,
       0,  1723,   821,   791,  1724,   859,   859,  1725,  1726,   846,
    1727,   473,     0,   477,   804,   805,   806,   807,   832,   833,
     808,   838,   839,   843,   809,   891,   818,  1237,  1238,  1410,
     473,   469,  1410,   473,  1201,  1410,     0,     0,   327,   385,
     422,  1728,  1729,  1730,  1731,  1732,  1733,  1735,  1734,  1736,
    1737,  1738,  1739,  1740,  1741,  1742,  1743,  1744,  1745,  1746,
    1747,  1748,  1749,  1750,  1751,  1752,  1753,  1754,  1755,  1756,
    1757,  1758,  1761,  1759,  1760,  1762,  1763,  1764,  1765,  1766,
    1767,  1768,  1769,  1770,  1771,  1772,  1773,  1774,  1776,  1775,
    1777,  1778,  1779,  1780,  1781,  1782,  1783,  1784,  1785,  1786,
    1787,  1788,  1789,  1790,  1791,  1792,  1793,  1794,  1795,  1796,
    1797,  1798,  1799,  1800,  1801,  1802,  1803,  1804,  1805,  1806,
    1807,  1808,  1809,  1810,   436,     0,   437,   427,   391,   423,
     424,  1274,   550,   493,   574,     0,     0,     0,     0,    44,
       0,     0,     0,  1210,  1212,  1213,  1096,  1223,  1170,     0,
    1612,  1613,  1614,  1160,     0,  1615,  1616,  1617,  1666,  1024,
    1011,  1020,  1025,  1012,  1014,  1021,  1618,  1619,   961,  1620,
    1621,  1221,  1622,  1624,  1625,  1627,  1628,  1629,  1016,  1018,
    1631,  1632,     0,  1222,  1634,  1635,  1476,  1637,  1638,  1640,
    1641,  1022,  1643,  1645,  1646,  1647,  1648,  1649,  1220,  1650,
    1023,  1652,     0,     0,     0,  1188,  1115,     0,     0,     0,
    1170,   995,     0,     0,   812,   813,   834,   835,   814,   840,
     841,   815,     0,  1182,   892,  1040,  1170,  1007,  1071,   936,
       0,   993,   987,  1178,   603,  1176,     0,   988,  1209,  1170,
    1161,   603,  1174,   335,   333,   339,   334,     0,     0,     0,
       0,     0,   770,   769,  1200,   517,   515,   516,   514,   513,
     520,     0,   522,   388,  1110,  1112,     0,  1161,   598,     0,
       0,     0,   578,   577,     3,  1244,   500,     0,   615,   616,
       0,     0,     0,     0,     0,     0,     0,     0,   712,   642,
     643,   645,   709,   713,   721,     0,   584,     0,     0,     0,
       0,   128,     0,     0,   326,   326,     0,     0,     0,     0,
       0,   117,    66,   110,     0,     0,     0,     0,   287,   300,
       0,     0,     0,     0,     0,   297,     0,     0,   280,    68,
     274,   276,     0,   326,     0,    64,     0,     0,     0,    70,
    1225,     0,  1664,  1665,  1666,  1667,  1668,  1024,  1011,  1020,
    1025,  1021,     0,  1674,  1675,  1623,  1677,  1678,  1679,  1680,
    1681,  1682,  1683,  1684,  1630,  1686,  1687,  1688,  1689,  1690,
    1022,  1692,  1644,  1694,  1650,  1023,     0,  1696,     0,   999,
    1118,   626,  1116,  1245,     0,  1226,  1232,  1166,     0,  1246,
    1845,  1846,  1847,  1848,  1849,  1850,  1851,  1852,  1853,  1854,
    1855,  1856,  1857,  1858,  1859,  1860,  1861,  1862,  1863,  1864,
    1865,  1866,  1867,  1868,  1869,  1870,  1871,  1872,  1873,  1874,
    1875,  1876,  1877,  1878,  1879,  1880,  1881,  1882,  1883,  1884,
    1885,  1886,  1887,  1888,  1889,  1890,  1891,  1892,  1893,  1894,
    1895,  1896,  1897,  1898,  1899,  1900,  1901,  1902,  1903,  1904,
    1905,  1906,  1907,  1908,  1909,  1910,  1911,  1797,  1912,  1913,
    1914,  1915,  1916,  1163,  1206,  1248,  1247,  1249,  1169,     0,
       0,   548,     0,     0,    56,     0,  1240,     0,     0,  1410,
     490,  1410,     0,   236,   236,     0,   375,   378,   465,   461,
     459,   458,   460,   850,   837,   845,   844,  1115,   827,   826,
     825,     0,   824,     0,     0,   851,   851,   849,   828,   804,
       0,     0,     0,   855,     0,   853,   471,   472,     0,   444,
       0,   798,   794,     0,   864,   865,   866,   867,   874,   875,
     872,   873,   868,   869,   862,   863,   870,   871,   860,   861,
       0,   876,   877,   878,   879,   880,   881,   882,   883,   810,
     816,     0,     0,   439,     0,     0,   441,     0,     0,     0,
    1274,     0,   281,   432,   433,   431,     0,     0,   390,   284,
     435,   425,   434,   389,   301,   426,   384,     0,   573,   539,
     345,   353,    54,   344,     0,  1121,     0,  1274,    45,   507,
       0,   991,  1115,   960,  1159,     0,     0,     0,     0,     0,
       0,   997,  1124,     0,     0,   916,     0,     0,     0,  1139,
       0,  1145,     0,     0,     0,   917,   896,   897,     0,  1187,
    1196,  1114,     0,   995,  1110,     0,  1074,  1076,     0,     0,
     989,   990,   996,     0,  1216,     0,   891,   891,  1181,  1096,
       0,  1089,     0,     0,  1093,  1094,  1095,     0,     0,     0,
    1173,     0,  1104,  1106,     0,     0,   932,  1102,     0,   935,
       0,     0,     0,     0,  1090,  1091,  1092,  1083,  1084,  1085,
    1086,  1087,  1088,  1100,  1082,   913,     0,     0,  1043,   994,
       0,   912,  1179,     0,   730,     0,  1214,  1211,     0,  1162,
     730,   347,   351,   352,   350,   338,     0,   346,   337,   342,
     340,   343,   341,     0,   511,     0,   508,  1113,   725,   600,
    1203,     0,     0,   311,   501,   595,   594,   636,   636,   627,
     630,   636,   593,   684,   685,     0,     0,     0,     0,   718,
     716,  1210,  1223,   672,   646,   671,     0,     0,   650,     0,
     676,   892,   711,   582,   640,   641,   644,   581,     0,   714,
       0,   724,   712,   645,     0,   134,  1268,     0,     0,     0,
     129,     0,     0,     0,     0,     0,  1410,     0,     0,   101,
      82,   188,   793,   325,     0,     0,     0,     0,     0,     0,
       0,   109,   106,   107,   108,     0,     0,     0,     0,   285,
     286,   299,     0,   290,   291,   288,   292,   293,     0,     0,
     278,   279,     0,     0,     0,     0,   277,     0,     0,     0,
       0,     0,     0,     0,     0,   626,   626,   626,  1005,     0,
     624,   625,     0,     0,  1164,  1167,   538,   244,     0,   234,
       0,     0,     0,     0,     0,     0,   271,    58,    60,    61,
      63,    62,  1241,     0,  1303,     0,     0,   489,   487,     0,
       0,   233,   207,   380,     0,     0,  1410,   377,     0,   223,
       0,     0,     0,   473,     0,   848,   847,   799,   795,     0,
       0,     0,     0,   478,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   473,   470,   473,  1202,     0,   473,
     330,   386,   428,   282,   302,   283,   303,   571,     0,   545,
     553,   558,   536,     0,   536,     0,   555,   559,   536,   554,
     536,   549,     0,    55,     0,   358,     0,   363,   357,   362,
     360,   361,     0,  1171,     0,     0,  1158,  1154,     0,     0,
       0,     0,     0,  1125,  1126,  1127,  1128,  1129,  1130,  1131,
    1132,  1133,     0,     0,  1134,     0,     0,     0,  1081,  1089,
    1093,  1094,  1095,  1090,  1091,  1092,  1083,  1084,  1085,  1086,
    1087,  1088,  1108,     0,     0,     0,     0,     0,     0,     0,
       0,   963,     0,     0,  1070,     0,  1110,  1144,     0,     0,
       0,     0,     0,     0,  1110,  1150,     0,     0,     0,  1186,
       0,  1183,   938,  1170,     0,  1077,   937,     0,     0,     0,
    1218,  1219,   893,   904,   939,   940,   908,   909,   910,   914,
    1251,  1250,  1180,     0,  1172,     0,     0,   894,   918,   923,
       0,  1151,   956,     0,   944,     0,   931,     0,   942,   946,
     919,   934,     0,   915,     0,  1173,  1105,  1107,     0,  1103,
       0,   905,   906,   907,   898,   899,   900,   901,   902,   903,
     911,  1080,  1078,  1079,     0,     0,     0,  1045,     0,     0,
     941,  1177,  1402,  1440,     0,   614,   614,   614,   602,   612,
       0,   782,   626,  1188,   782,     0,   891,   771,  1244,   521,
     510,   509,  1111,  1204,  1243,  1274,   634,   635,   639,   639,
       0,     0,   639,  1641,  1529,     0,     0,     0,     0,   677,
     719,     0,   710,   674,   675,     0,   673,  1210,   678,  1209,
     679,   682,   683,   651,   720,  1197,   722,     0,   715,   586,
     585,   726,     0,   132,     0,     0,     0,     0,  1263,  1280,
       0,  1170,  1296,  1298,   730,     0,   130,     0,    67,     0,
    1410,    84,     0,     0,     0,     0,     0,     0,   138,     0,
     238,   138,   122,  1410,   473,  1410,   473,  1308,  1377,  1545,
       0,    80,   113,     0,   212,   319,     0,   197,   241,   103,
     118,   312,     0,     0,    69,   275,   289,   294,   315,   298,
     295,   306,   296,   326,     0,    65,     0,   313,     0,   304,
       0,     0,    71,   317,   308,   624,   624,   624,     0,  1117,
       0,     0,     0,  1119,  1120,  1166,     0,   537,     0,   235,
       0,   547,   527,   528,   538,     0,     0,   236,   236,    59,
       0,     0,  1242,     0,     0,     0,     0,    51,     0,   226,
     224,   257,     0,   231,   225,   234,     0,     0,   183,     0,
       0,   368,     0,     0,     0,     0,     0,   817,   830,   445,
     804,     0,   858,   857,   859,   859,   804,     0,   788,     0,
     802,     0,   842,   811,   884,   885,   886,   887,   888,   889,
     890,   438,   440,     0,   442,   540,     0,   543,     0,   542,
     541,   546,   535,     0,   566,     0,     0,     0,     0,     0,
       0,   354,  1122,   619,   962,     0,     0,  1155,     0,     0,
    1038,     0,  1013,  1015,  1028,     0,  1017,  1019,     0,  1097,
       0,     0,     0,  1029,   965,   966,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   982,   981,  1030,  1069,     0,     0,
    1142,  1143,     0,  1031,     0,     0,  1149,     0,     0,     0,
    1036,     0,     0,     0,     0,  1195,   992,  1111,  1075,  1073,
     998,   891,     0,     0,     0,     0,     0,     0,     0,   945,
     933,     0,   943,   947,     0,     0,     0,   927,     0,     0,
     925,   957,   921,     0,     0,   958,     0,     0,  1044,  1053,
     614,   614,   614,   614,   611,   613,     0,     0,     0,     0,
    1529,     0,   754,     0,   733,   729,   731,   741,   754,   759,
    1008,   780,  1009,  1228,     0,   689,   624,  1196,   689,     0,
     348,   512,     0,     0,   628,   629,   631,     0,  1098,   639,
     633,   681,   680,     0,   649,   717,   647,     0,   723,   133,
       0,  1285,  1269,  1267,  1287,  1286,     0,  1170,  1294,     0,
       0,  1285,     0,  1288,  1302,  1299,   132,     0,     0,     0,
       0,   187,     0,     0,     0,   138,     0,   246,     0,   253,
       0,     0,   238,   219,   102,     0,     0,     0,    76,   121,
      94,    86,    72,   100,     0,     0,   105,     0,    98,   115,
     116,   114,   119,     0,   173,   148,   184,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   626,   622,   623,  1000,  1165,   569,   570,
     280,   568,   245,     0,     0,     0,   233,   380,    57,   271,
       0,     0,   490,     0,   236,   331,     0,    46,   211,   207,
     232,   205,   204,   206,     0,    52,   379,     0,   369,     0,
     365,     0,   374,   836,   801,     0,   854,   852,   800,     0,
     796,   803,   473,   572,   567,     0,   531,   556,   561,     0,
     565,   563,   562,   557,   560,     0,  1157,  1153,     0,  1010,
    1123,     0,  1109,  1137,  1136,   964,   973,   977,   978,   979,
    1138,     0,     0,     0,   974,   975,   976,   967,   968,   969,
     970,   971,   972,   980,  1147,  1146,  1140,  1141,     0,  1033,
    1034,  1035,  1148,     0,  1185,  1110,  1190,  1192,     0,     0,
    1072,  1217,   895,     0,     0,   924,  1152,   948,     0,     0,
       0,   920,  1097,     0,     0,     0,     0,     0,   929,     0,
       0,     0,     0,     0,  1006,     0,     0,     0,     0,   605,
     604,   610,   754,   759,     0,   588,   591,     0,   741,     0,
     753,   668,   752,   668,   734,     0,   765,   763,     0,   765,
       0,   765,     0,   668,     0,   755,   668,   752,     0,   772,
    1200,   781,     0,   706,     0,  1184,   706,     0,   601,   637,
     638,     0,   632,   648,  1198,   131,     0,   127,     0,  1275,
       0,     0,  1272,  1262,     0,     0,  1297,  1285,  1276,   320,
     138,     0,     0,    83,     0,   255,   199,   247,   230,   214,
       0,     0,     0,   139,     0,   272,     0,     0,   220,     0,
       0,     0,     0,   200,     0,     0,   159,     0,     0,   230,
       0,   237,   155,   156,     0,    75,    95,     0,    91,     0,
     120,     0,     0,     0,     0,     0,    90,    78,     0,    73,
       0,   473,   473,    81,   198,  1236,  1697,  1698,  1699,  1700,
    1701,  1702,  1703,  1704,  1705,  1706,  1707,  1708,  1823,  1709,
    1710,  1711,  1712,  1713,  1714,  1715,  1716,  1832,  1717,   145,
    1718,  1476,  1719,  1720,  1721,  1722,     0,  1723,   791,  1724,
    1725,  1726,  1727,  1083,  1084,   240,   140,   143,   248,   142,
     144,     0,  1237,   141,   243,   316,   307,     0,   314,     0,
     305,   323,   321,   318,   309,  1003,  1004,  1001,   624,   550,
     530,     0,    51,     0,     0,     0,  1410,     0,   380,   488,
       0,   233,    51,    49,     0,   263,   183,   258,     0,   486,
     364,     0,     0,     0,   797,   789,   443,   544,     0,   564,
    1156,  1026,  1037,  1135,     0,     0,     0,     0,  1032,  1027,
    1193,  1194,  1189,   954,   952,   949,     0,   950,   928,     0,
       0,   926,   922,     0,   959,  1039,     0,  1042,  1056,  1051,
    1052,   609,   608,   607,   606,   740,   738,     0,   743,   750,
     661,   667,   739,     0,   737,   732,     0,   764,   760,     0,
     761,     0,     0,   762,     0,   735,     0,   750,   736,     0,
     779,     0,     0,  1047,  1000,  1047,   349,     0,  1284,  1264,
       0,  1265,  1295,     0,     0,     0,     0,  1289,   524,   251,
      85,     0,   230,     0,   138,   216,   215,   218,   213,   217,
       0,   273,     0,     0,   157,     0,   164,   202,   203,   201,
     158,   230,   236,   160,     0,     0,     0,    87,    77,    74,
      79,    88,     0,     0,    89,    92,   787,   104,    97,  1832,
    1840,     0,     0,     0,     0,     0,     0,   526,   533,   280,
       0,     0,    48,   207,     0,     0,     0,   233,     0,     0,
      51,     0,   328,    50,     0,     0,   135,     0,   180,     0,
       0,   479,     0,   373,   372,     0,   532,   983,     0,     0,
       0,  1191,   951,   955,   953,   930,  1041,  1058,  1055,   775,
       0,   778,   742,     0,     0,   656,   663,     0,   666,   660,
       0,   744,     0,     0,   746,   748,     0,     0,     0,   783,
       0,     0,     0,  1205,   687,  1352,  1624,  1528,   688,     0,
     692,   686,   690,   695,   697,   696,   698,   694,   705,     0,
     708,  1215,   708,  1099,     0,     0,     0,     0,  1291,  1291,
    1300,     0,     0,  1277,     0,   138,     0,   229,   252,   169,
     147,     0,     0,     0,   154,   161,   262,   163,     0,    96,
       0,   112,     0,     0,   242,   324,   322,  1002,   550,     0,
     380,   183,   486,     0,     0,     0,   331,    47,   207,   196,
     189,   190,   191,   192,   193,   194,   195,   210,   209,   181,
     182,     0,     0,     0,   374,     0,   984,     0,   985,     0,
     626,   780,     0,     0,   774,     0,   654,   652,   655,   657,
     653,     0,     0,   751,   767,     0,   747,   745,   756,     0,
     787,     0,   758,     0,     0,     0,   699,   693,  1046,  1048,
       0,     0,   659,   659,     0,  1271,     0,     0,  1293,  1293,
     782,     0,  1279,     0,   236,   254,     0,   221,   228,   167,
     166,   168,   172,     0,   170,     0,   186,     0,   179,   147,
     786,     0,    99,     0,   249,   525,   529,     0,   137,   480,
     233,     0,   486,    51,   183,     0,   483,     0,     0,   380,
     986,     0,  1061,   773,   776,     0,   749,     0,     0,     0,
     784,   785,   757,     0,     0,     0,   691,     0,     0,   707,
       0,   590,   589,  1266,  1291,  1290,  1292,   636,   636,  1270,
    1301,     0,   262,   208,     0,     0,     0,   169,     0,   162,
     259,   260,   261,     0,   175,   165,   176,    93,   111,   250,
       0,   233,   481,   329,   136,   484,   485,     0,   782,  1057,
       0,     0,     0,     0,   664,     0,   670,   766,   701,     0,
     700,  1049,  1050,   661,  1293,   639,   639,   782,   179,   222,
     227,   146,   171,   185,     0,     0,     0,   177,     0,   178,
     486,     0,   370,  1611,  1353,  1581,     0,  1059,  1062,  1060,
    1054,   777,     0,     0,   662,   702,   658,   636,  1282,  1281,
    1278,   138,   151,     0,   150,     0,   239,   174,   482,   380,
       0,  1066,  1065,  1064,  1068,  1067,   665,     0,   639,   256,
     149,   153,   152,   782,     0,     0,  1283,   371,  1063,   669
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    37,    38,    39,   546,   592,   593,   547,  2277,  1222,
     548,   549,  1214,  1577,   550,  2220,  2221,  2222,  1900,  1051,
    2942,  1901,  1052,  1053,  2224,   551,   552,  1040,  2181,  1863,
     553,  2209,  2545,  2934,  2234,  3076,  2481,  2482,  2931,  2932,
    2212,  1902,  3004,  3005,  2285,  1524,  2999,  1969,  2867,  1906,
    1888,  2483,  1978,  2827,  2585,  1903,  2463,  1970,  2926,  1597,
    1971,  2927,  2684,  1972,  1567,  1592,  2213,  3006,  1907,  1568,
    2208,  2546,  1511,  1973,  2938,  1974,   504,  2467,   554,  1587,
    1542,  1320,  1071,  1532,  1309,   555,    50,   556,  1515,   557,
     778,   558,   606,   607,  1321,  1435,  1322,   559,   560,   878,
    1658,   561,   683,  1595,   562,  2753,  2593,  1227,  1598,  1980,
     505,    58,   633,  1310,   563,  1311,  1312,   865,    59,  1323,
     867,   868,   565,   539,   540,   770,  1259,   541,   751,   566,
    2751,   567,  1588,   568,   583,   569,    65,   608,   570,  1000,
     621,  1001,  1003,   571,   572,  1954,  2729,  2305,  2730,  2023,
    1948,  1318,  2021,  1637,  1571,  1319,   494,  1651,  2306,  2260,
    1638,    69,    70,   573,   951,    73,    74,    75,   613,   624,
     625,  1424,  1808,  2136,  1020,   599,   600,  1942,   643,  1561,
    1459,  1460,  1828,  2164,  1486,  1487,  1029,  1030,  2776,  2981,
    2777,  2778,  2641,  2642,  3064,  1474,  1478,  1479,  1848,  1838,
    1465,  2423,  2800,  2801,  2802,  2803,  2804,  2805,  2806,   952,
    2663,  2912,  1482,  1483,  1032,  1033,  1034,  1491,  1858,    77,
      78,  1811,  2144,  2145,  2146,  2147,  2400,  2401,  2416,  2412,
    2648,  2784,  2148,  2149,  2769,  2770,  2884,  2419,  2155,  2788,
    2789,  2841,  1614,   752,  1889,  1325,  1262,   754,   953,   755,
    1238,   954,  1242,   757,   955,   956,   957,   760,   958,   959,
     960,   763,  1234,   961,   962,  1253,  1281,  1282,  1283,  1284,
    1285,  1286,  1287,  1288,  1289,  1004,  1710,   964,   965,   966,
    2151,   967,  1418,  1797,  2129,  2810,  2908,  2909,  2384,  2629,
    2767,  2880,  3022,  3057,  3058,   968,   969,  1366,  1367,  1368,
    1794,  1413,  1414,   970,  2549,  1416,  1703,  1005,  1725,  1362,
    1121,  1122,  1326,  1682,  1683,  1706,  2052,  1713,  1718,  2080,
    2081,  1726,  1762,   971,  1666,  1667,  2038,  1335,   972,   664,
    1128,   665,  1331,  1756,   981,   973,   974,   975,  1359,  1360,
    2095,  2357,  2358,  1731,  1854,   616,  1450,  2780,   774,  1203,
     976,   977,   978,   979,  1007,   618,  1123,   487,   766,  2986,
    1216,  1011,  1124,  1904,  1752,   574,   575,    86,   576,  1869,
    1497,  2675,    82,  2188,  1872,  2191,  2820,  2437,  2186,  2192,
    2918,  2987,  2189,  1873,  1874,  2821,  1875,   577,   516,   489,
     490,   768,  1206,  1126,  1207
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -2616
static const int yypact[] =
{
    5359,   -95,   109, -2616, -2616,   -95, 37605, -2616,   -95,    59,
    2184, 39990, -2616,  5891,   -95, 42870, 56712,   232,   188,   274,
   43350, 43350, 51000, 42870, 43830,   -95,   273, 51480, -2616,   -95,
   25638, 40470,    36,  -106, 44310, 42870,  1004,   459,    49, -2616,
   -2616, -2616, -2616, -2616, -2616, -2616, -2616, -2616, -2616, -2616,
   -2616, -2616, -2616, -2616, -2616, -2616, -2616, -2616, -2616,    39,
   -2616, -2616, -2616, -2616, -2616, 25158, -2616, -2616, -2616, -2616,
   -2616, -2616,   122, -2616,   243,   170,   471,    62, -2616, -2616,
   -2616, -2616,   108, -2616, -2616, -2616, -2616, 44790, 42870, 45270,
   40950, 45750, -2616,   110, -2616, -2616, -2616, -2616, -2616, -2616,
   -2616, -2616, -2616, -2616, -2616, -2616, -2616, -2616, -2616, -2616,
   -2616, -2616, -2616, -2616, -2616, -2616, -2616, -2616, -2616, -2616,
   -2616, -2616, -2616, -2616, -2616, -2616, -2616, -2616, -2616, -2616,
   -2616, -2616, -2616, -2616, -2616, -2616, -2616, -2616, -2616, -2616,
   -2616, -2616, -2616, -2616, -2616, -2616, -2616, -2616, -2616, -2616,
   -2616, -2616, -2616, -2616, -2616, -2616, -2616, -2616, -2616, -2616,
   -2616, -2616, -2616, -2616, -2616, -2616, -2616, -2616, -2616, -2616,
   -2616, -2616, -2616, -2616, -2616, -2616, -2616, -2616, -2616, -2616,
   -2616, -2616, -2616, -2616, -2616, -2616, -2616, -2616, -2616, -2616,
   -2616, -2616, -2616, -2616, -2616, -2616, -2616, -2616, -2616, -2616,
   -2616, -2616, -2616, -2616, -2616, -2616, -2616, -2616, -2616, -2616,
   -2616, -2616, -2616, -2616, -2616, -2616,   139, -2616, -2616, -2616,
   -2616, -2616, -2616, -2616, -2616, -2616, -2616, -2616, -2616, -2616,
   -2616, -2616, -2616, -2616, -2616, -2616, -2616, -2616, -2616, -2616,
   -2616, -2616, -2616, -2616, -2616, -2616, -2616, -2616, -2616, -2616,
   -2616, -2616, -2616, -2616, -2616, -2616, -2616, -2616, -2616, -2616,
   -2616, -2616, -2616, -2616, -2616, -2616, -2616, -2616, -2616, -2616,
   -2616, -2616, -2616, -2616, -2616,   144, -2616, -2616, -2616, -2616,
   -2616, -2616, -2616, -2616, -2616, -2616, -2616, -2616, -2616, -2616,
   -2616, -2616, -2616, -2616, -2616, -2616, -2616, -2616, -2616, -2616,
   -2616, -2616, -2616, -2616, -2616, -2616, -2616, -2616, -2616, -2616,
   -2616, -2616, -2616, -2616, -2616, -2616, -2616, -2616, -2616, -2616,
   -2616, -2616, -2616, -2616, -2616, -2616, -2616, -2616, -2616, -2616,
   -2616, -2616, -2616, -2616, -2616, -2616, -2616, -2616, -2616, -2616,
   -2616, -2616, -2616, -2616, -2616, -2616, -2616, -2616, -2616, -2616,
   -2616, -2616, -2616, -2616, -2616, -2616, -2616, -2616, -2616, -2616,
   -2616, -2616, -2616, -2616, -2616, -2616, -2616, -2616, -2616, -2616,
   -2616, -2616, -2616, -2616, -2616, -2616, -2616, -2616, -2616, -2616,
   -2616, -2616, -2616, -2616, -2616, -2616, -2616, -2616, -2616, -2616,
   -2616, -2616, -2616, -2616, -2616, -2616, -2616, -2616, -2616, -2616,
   -2616, -2616, -2616, -2616, -2616, -2616, -2616, -2616, -2616, -2616,
   -2616, -2616, -2616, -2616,   150, -2616, -2616, -2616, -2616, -2616,
   -2616, -2616, -2616, -2616, -2616, -2616, -2616, -2616, -2616, -2616,
   -2616, -2616, -2616, -2616, -2616, -2616, -2616, -2616, -2616, -2616,
   -2616, -2616, -2616, -2616, -2616, -2616, -2616, -2616, -2616, -2616,
   -2616, -2616, -2616, -2616, -2616, -2616, -2616, -2616, -2616, -2616,
   -2616, -2616, -2616, -2616, -2616, -2616, -2616, -2616, -2616, -2616,
   -2616, -2616, -2616, -2616, -2616, -2616, -2616, -2616, -2616, -2616,
   -2616, -2616, -2616, -2616, -2616,   163,   548, -2616,   169, -2616,
   -2616, -2616, -2616,  1004, 42870,   358,   587,   247, 51960, -2616,
   -2616, 51000, -2616, -2616,  1176,   413, -2616, -2616, -2616, -2616,
   -2616, 41430, -2616, -2616, -2616, -2616, -2616,   424, -2616, -2616,
     289, -2616,   142, -2616, -2616,   285,   350, -2616, -2616, -2616,
   -2616, -2616, -2616, -2616, -2616,   458, -2616, 46230, -2616, 52440,
   46695, 47175, -2616,   354, 34181, 23718, -2616, -2616, -2616, -2616,
   -2616, -2616, -2616, -2616, -2616, -2616, -2616, -2616, -2616, -2616,
   -2616, -2616, -2616, -2616,    39, -2616, -2616, -2616, -2616, -2616,
   -2616, -2616, -2616, -2616, -2616, -2616, -2616, -2616,   867, -2616,
   43350,   867, -2616, -2616, -2616, -2616, -2616,    99,   387, -2616,
     441,   724, -2616, -2616,   497, -2616, -2616, -2616,   700, 11220,
   11220, 52920, 52920,   867, 52920,   527, -2616, -2616,    -5, -2616,
    -106,   497, -2616,   471, 26119, -2616,   525,   548, -2616, -2616,
     230,   856, 15260, 42870,   555, -2616,   601,   555,   613,   630,
   -2616,  5359, -2616, 42870, -2616,   622,   925,   497, -2616,   320,
     320,  1095,   320,   971,  1257, -2616,  1483, -2616,   667,  1002,
     996, 40470,  1036,   826,   898,  1074,  4638,  1105,   858,  1109,
    1008,  7685, 15260, 35205, -2616,   548,   771,   780, -2616, -2616,
   -2616, -2616,   617,  1014, -2616,   806,  1289, -2616, -2616,   876,
   47655, 48135, 42870, 42870,  1250, -2616, -2616, -2616, -2616,   888,
   -2616, -2616, -2616,   162, -2616, -2616, -2616, -2616,   922, -2616,
     922,   922, -2616, -2616, -2616, -2616, -2616, -2616, -2616, -2616,
     859,   859,  1069,   890, -2616, -2616, -2616,  1245, -2616, -2616,
   -2616, -2616, -2616, -2616, -2616, -2616, -2616, -2616,   914,   722,
   -2616,   922, -2616,   859, -2616, -2616, -2616, -2616, -2616, -2616,
   55785, -2616, -2616, -2616, -2616,   516,   545, -2616, -2616, -2616,
   -2616,    96,   939, -2616,  1370, -2616, -2616, -2616, -2616, -2616,
   -2616, -2616, -2616,   941, -2616,  2280,   859, -2616, -2616,  1294,
     111, -2616,  1296,   118, -2616,  1304,  1175, 15260, -2616, -2616,
   -2616, -2616, -2616, -2616, -2616, -2616, -2616, -2616, -2616, -2616,
   -2616, -2616, -2616, -2616, -2616, -2616, -2616, -2616, -2616, -2616,
   -2616, -2616, -2616, -2616, -2616, -2616, -2616, -2616, -2616, -2616,
   -2616, -2616, -2616, -2616, -2616, -2616, -2616, -2616, -2616, -2616,
   -2616, -2616, -2616, -2616, -2616, -2616, -2616, -2616, -2616, -2616,
   -2616, -2616, -2616, -2616, -2616, -2616, -2616, -2616, -2616, -2616,
   -2616, -2616, -2616, -2616, -2616, -2616, -2616, -2616, -2616, -2616,
    -106, -2616, -2616, -2616, -2616, -2616, -2616, -2616, -2616, -2616,
   -2616, -2616, -2616, -2616, -2616,   417, -2616, -2616, 32479, -2616,
   -2616, 34181,   967, -2616, -2616, 32479, 15765, 48615,  1422, -2616,
    1235, 51000,  1009, -2616, -2616, -2616, -2616, -2616, -2616,   342,
    1468,   105,  1506, 15260,  1023,   105,   105,  1029,  1367,   190,
     201,   202,   208,  1041,  1070,   219,   220,   220, -2616,  1072,
    1077, -2616,   238,  1082,  1085,  1581,  1590,   145,  1104,  1112,
     722,   105, 15260, -2616,  1119,   220,  1133,  1137,  1140,  1594,
    1142,   240,  1603,  1148,   107,   148,  1159,  1172, -2616,  1174,
     249,   250, 15260, 15260, 15260,  1535, 15260,  8695, 42870,  1681,
   -2616,   548,  1194,   867, -2616, -2616, -2616, -2616, -2616, -2616,
   -2616, -2616,   153,  5621, -2616,  1265, -2616, -2616, -2616,  1409,
   15260, -2616, -2616,  1216,  1518, -2616,   251, -2616, -2616, -2616,
     560,  1518, -2616, -2616, -2616, -2616, -2616,   235,  1639, 31519,
   31999, 42870, -2616, -2616,   548, -2616, -2616, -2616, -2616, -2616,
   -2616,   451, -2616,    39, 33866,  1233,  1244,   548,   555, 42870,
   42870,  1707, -2616, -2616, -2616,   601, -2616,  1514, -2616, -2616,
     471,   471, 10210,   471,   171,   543, 11725, 16270,  1582,  1469,
     152,   693,  1586, -2616,  1476,   971,  1257, 15260, 40470, 42870,
    1393, 53400, 42870, 38085,   802,   821,  1271,  1360,  1275,   344,
    1690, -2616,  1276, -2616,  1368, 42870, 55785,   275, -2616,  1724,
     275,   275,   572,  1728,  1369,   316,  1525,   585,   445,  1276,
    2759, -2616, 40470,   149,   656,  1276, 42870,  1373,   670,  1276,
     155, 15765,  1278,  1287,   430,  1338,  1348,   168,   172,   174,
     184,   186, 15765,  1357,  1465,   189,  1488,  1537,  1541,  1550,
    1553,  1579,  1588,  1592,   191,  1621,  1647,  1649,  1652,  1654,
     196,  1656,   207,  1662,   209,   214, 15765,  1665,  1292, -2616,
   33866,   -11, -2616, -2616,  1668,   236, -2616,  6023,  1288, -2616,
   -2616, -2616, -2616, -2616, -2616, -2616, -2616, -2616, -2616, -2616,
   -2616, -2616, -2616, -2616, -2616, -2616, -2616, -2616, -2616, -2616,
   -2616, -2616, -2616, -2616, -2616, -2616, -2616, -2616, -2616, -2616,
   -2616, -2616, -2616, -2616, -2616, -2616, -2616, -2616, -2616, -2616,
   -2616, -2616, -2616, -2616, -2616, -2616, -2616, -2616, -2616, -2616,
   -2616, -2616, -2616, -2616, -2616, -2616, -2616, -2616, -2616, -2616,
   -2616, -2616, -2616, -2616, -2616, -2616, -2616, -2616, -2616, -2616,
   -2616, -2616, -2616, -2616, -2616, -2616, -2616, -2616, -2616,  1378,
   51000,  1337,   -15,  1648,  1706, 35205,  1301, 48615, 42870,  1531,
    2759,  1533,  1770,  1312,   780,  1313, -2616, 53880, -2616, -2616,
   -2616, -2616, -2616, -2616,  1315, -2616, -2616, 15260, -2616, -2616,
   -2616,  1806, -2616, 48615, 48615,   922,   922, -2616, -2616,  1780,
    1403,  1404,  1806, -2616,  1806, -2616, -2616, -2616, 48615, -2616,
   51000,  1323,  1324,  1806, -2616, -2616, -2616, -2616, -2616, -2616,
   -2616, -2616, -2616, -2616, -2616, -2616, -2616, -2616, -2616, -2616,
    1806,  1405, -2616,  1406,  1411,  1412, -2616, -2616, -2616, -2616,
   -2616, 51000, 51000, -2616, 42870, 42870, -2616, 42870, 51000,  1326,
   34181, 37125, -2616, -2616, -2616, -2616,   359,   363, -2616, -2616,
   -2616, -2616, -2616, -2616, -2616, -2616, -2616, 35205, -2616,  2055,
   -2616, -2616,  1335, -2616,   468, -2616,   623,  1004, -2616, -2616,
   15260,   548, 15260, -2616, 33866,  1384, 15260, 15260,  1343,  1806,
    1806, -2616,  2322,  1806,  1806, 34109, 15260, 29002, 15260, 19805,
   12230, 15260, 15260,  9200, 15260, 34109,  1832,  1832, 27079, -2616,
    1500, -2616,  1347,  1333,  6484,  1345, -2616,  1349,  1353,  1339,
   -2616,   548,   548, 15260, -2616, 15260,  2451,  2451, -2616,   200,
   48615, 15260, 15260, 15260, 15260, 15260, 15260, 15260, 34725,  1450,
     138, 51000, 15260, 15260,  1351,   800, -2616, 15260,  1589, -2616,
    1379, 15260,  1455,   140, 15260, 15260, 15260, 15260, 15260, 15260,
   15260, 15260, 15260, -2616, -2616, 21306,   224,  1699,  1718,   548,
     -12,   991, 11220, 41910,  1711,  7685, -2616,   548, 30559,   135,
    1711, -2616, -2616, -2616, -2616, -2616,   265, -2616, -2616, -2616,
    1335, -2616,  1335,  1385, 42870,   230, 39045, 15260, -2616, -2616,
    1381,  1386,  1388, -2616, -2616,  1675, -2616,   300,   300,  1392,
   -2616, 32956,  1675, -2616, -2616, 20296,  1517,  1676,  1611, -2616,
   -2616,  1595,  1597, -2616,  1398, 33929, 16775, 16775, -2616,  1139,
   33866,  1334, -2616, -2616, -2616, -2616, -2616, -2616,   612, -2616,
   42870,    95,  1582,   693,  1408,  1470,  1871,  1247, 27559, 51000,
   -2616,  1145,  1414, 54360, 42870,  1686,  1643,  1693,   223, -2616,
   -2616, -2616, 48615, -2616, 42870, 51000, 49080, 54840, 35685, 42870,
   35205, -2616, -2616, -2616, -2616, 42870,  1606, 42870,  5049, -2616,
   -2616, -2616,   275, -2616, -2616, -2616, -2616, -2616, 51000, 42870,
   -2616, -2616,   275, 51000, 42870,   275, -2616,  1228, 42870, 42870,
   42870, 42870,  1363, 42870, 42870,    -8,    -8,  1625, -2616, 12735,
     429, -2616, 15260, 15260, -2616, 15260,  1596, -2616,   635, -2616,
    1635,   100,  1471, 42870, 42870, 51000,   871, -2616, -2616, -2616,
   -2616, -2616, -2616, 35205, -2616,  1423,  1771,  2759, -2616,  1773,
      41, 38565,   574,  1472, 13240,  1896,  1663, -2616,  1650, -2616,
   15260,  1436,  1438,    96,   647, -2616, -2616,  1442,  1324,  1458,
    1460,  1443,  1444, -2616,   747, 48615,  1806,   137,  1445,  1448,
    1435,  1356,   767,  1344,   111, -2616,   118, -2616,  1664,   212,
   -2616, -2616, -2616, -2616, -2616, -2616, -2616, -2616,   751, 22758,
   -2616, -2616,  1911,   867,  1911,   376, -2616, -2616,  1911, -2616,
    1911, -2616, 32479, -2616, 15765, -2616, 48615, -2616, -2616, -2616,
   -2616, -2616,  1453, -2616,  1452, 15260,    77, -2616, 33018,  1454,
   15260,  1457,  1459, -2616, -2616, -2616, -2616, -2616, -2616, -2616,
   -2616, -2616,  1461,  1784, -2616,  1463,  1464,  5286, -2616, -2616,
   -2616, -2616, -2616, -2616, -2616, -2616, -2616, -2616, -2616, -2616,
   -2616, -2616, -2616,  1466,  1467, 33054,  1473, 19805, 19805,  8695,
     292, -2616, 19805,  1475, -2616,  1478, 32969,  1462,  1479, 33099,
   13745, 15260, 13745, 13745, 33508, -2616,  1485, 33587, 42870, -2616,
   17280, -2616, -2616, -2616, 15260, 42870, -2616, 15260,  1486,  6647,
   -2616, -2616, -2616,   332, 33942,   991,  1722,  1722,  1722, 34109,
   -2616, -2616, -2616,  1489, -2616, 19805, 19805, -2616,  3880,  2821,
    8695, -2616, -2616,  1789, -2616,   783, -2616,  1477, -2616, -2616,
    3037, -2616, 29002, 34016, 15260,   141, -2616, 15260,  1351, 15260,
    1570,  1722,  1722,  1722,   371,   371,   279,   279,   279,   332,
     991, -2616, -2616, -2616,  1490,  1495,  1502,  1815,  1142, 15260,
   -2616, -2616,   657,   749, 42870,  2714,  3276,  3956, -2616, -2616,
   23238,  1544,   -11,  1535,  1544,  1806,  2451, -2616,   601, -2616,
   -2616, -2616, 33866, 42870, -2616,  1004, -2616, -2616,  1520,  1520,
   15260,  1637,  1520,  1717,  1719,   688,   688,  1139,  1720, -2616,
   -2616,  1574, -2616, -2616, -2616, 15260,  9705,  1342, -2616,  1355,
   -2616, -2616, -2616, -2616,  1511, -2616, -2616,  1766, -2616, -2616,
   -2616, -2616, 23238,  1557, 51000,  1569,   -39, 25638, -2616,  1732,
   51000, -2616, -2616,  1522,  1711,  1532, -2616,  1614,  1276, 15260,
    1751, -2616,   269,  1536,  1884,   403,  1843, 51000, -2616,   293,
     323, -2616,   151,  1888,   212,  1892,   212, 35205, 35205, 35205,
     773, -2616, -2616,   867, -2616, -2616,   775, -2616,   552, -2616,
   -2616, -2616,  1629,   711,  1276,  2759, -2616, -2616, -2616, -2616,
   -2616, -2616, -2616,   158,   721,  1276,  1630, -2616,  1631, -2616,
    1632,   730,  1276, -2616, -2616,   429,   429,   429, 15765, -2616,
    1778,  1792,  1577, 33866, 33866, 33866,  1576, -2616,   156, -2616,
   51000, -2616, -2616, -2616,  1596, 42870,  2041,  1583,   780, -2616,
    1736,   736, -2616, 51000, 42870, 42870, 42870,  1620, 42870, -2616,
   -2616, -2616,  1584,  1585, -2616, 39525,   -23,  1801,  1803,  1275,
    2053, -2616,   803, 14250,  1940, 42870,  1598, -2616, -2616, -2616,
   -2616,  1806, -2616, -2616,  -104,  -104, -2616, 51000, -2616,  1599,
   -2616,  1604, -2616, -2616, -2616, -2616, -2616, -2616, -2616, -2616,
   -2616, -2616, -2616, 51000, -2616, -2616, 35205, -2616, 36645, -2616,
   -2616, -2616, -2616,   867, -2616,   867,  1817, 51000, 31039,   867,
     867, -2616, -2616, -2616, -2616, 33616, 15260, -2616,  1952, 48615,
   -2616,  6882, -2616, -2616, -2616, 15260, -2616, -2616, 15260, -2616,
   29002, 15260,  1929, -2616,  2093,  2093,  6484, 48615, 19805, 19805,
   19805, 19805, 19805,   183,  1133, 19805, 19805, 19805, 19805, 19805,
   19805, 19805, 19805, 19805, 20801,   604, -2616, -2616, 15260, 15260,
    1939,  1929, 15260, -2616, 48615,  1610, -2616,  1615,  1622, 15260,
   -2616, 48615,  1626,  8695, 33695, -2616,   548,  7046, -2616, 33866,
   -2616,  2451, 15260,   938,  1044, 15260,  1634, 15260,  1943, -2616,
   -2616,  1612, -2616, -2616, 48615, 15260,  1636,  3177, 19805, 19805,
    3538, -2616,  4678, 15260,  8695, -2616,  1625, 14755, -2616,  1823,
    1731,  1731,  1731,  1731, -2616, -2616, 42870, 42870, 42870, 24198,
    1969, 22275, 49560, 49560,  1638, -2616,   896, -2616, 49560, 50040,
   -2616,  1657, -2616,   548, 15260,  1963,   429,  1500,  1963,  1644,
   -2616, -2616,  1646,   465, -2616, -2616, -2616,  1651, -2616,  1520,
   -2616, -2616, -2616,  1863, -2616, -2616, -2616, 42870, -2616, -2616,
   15260,  1804, -2616, -2616, -2616, -2616,  1723, -2616, -2616,   809,
    2067,  1804,   835, -2616,   548, 27559,  1557, 15260, 42870,  7174,
    2013, -2616, 51000, 51000, 51000, -2616, 51000,  1667,  1671,   884,
    1673,   982, -2616,  1915,   884,  1998,   181,  1275,   316,  3516,
     443, -2616, -2616, -2616,  1747, 42870, -2616, 51000, -2616, -2616,
   -2616, -2616, -2616, 35685, -2616, -2616, -2616, 35205, 28521, 35205,
   42870, 42870, 42870, 42870, 42870, 42870, 42870, 42870, 42870, 42870,
    1677,  1679,  1680,  1625, -2616, -2616, -2616, -2616, -2616, -2616,
     445, -2616, -2616,   156,  1683,  1004, 38565,  1472,  1706,   617,
   50520,   836,  2759,  2138,  1684,   354,   180, -2616, -2616,   574,
   38565, -2616, -2616, -2616,  2103, -2616, -2616,  1004, -2616,  1004,
   33866, 51000,  1744, -2616,  1324,  1688, -2616, -2616,  1324, 48615,
   -2616, -2616,   212, -2616, -2616,   860, -2616, -2616, -2616, 51000,
    1685, -2616,  1685, -2616, -2616, 15260, 33866, -2616,  1689, -2616,
   33866, 29490, -2616, 33866,  1939, -2616,  2093,  1505,  1505,  1505,
     827,  2019,   167,  1694,  1505,  1505,  1505,   333,   333,   132,
     132,   132,  2093,   604, 33866, 33866, -2616, -2616,  1695, -2616,
   -2616, -2616, -2616,  1697, -2616,  6150, -2616,  1691,  1698, 51000,
   -2616, -2616,   303, 15260, 15260,  3880, -2616, 34250, 15260, 48615,
     893,  3880,   237, 15260,  1269,  1669, 15260, 15260,  4702, 29519,
    1701, 15260, 29555, 28039, -2616, 42870, 42870, 42870, 42870, -2616,
   -2616, -2616, 49560, 50040,  1700, 21795, 49560,   896,  1702, 42870,
   -2616,  1795,  1705,  1795, 23238,  1984,  1922, -2616, 23238,  1922,
     909,  1922,  1985,  1795, 26599, -2616,  1795,  1721,  1925, -2616,
     590, 33866,  2165,  2039,  1726, -2616,  2039,   867, -2616, -2616,
   -2616, 29002, -2616, -2616, -2616, 33866, 11220, -2616,  1004,   548,
    1328, 51000,   -30, -2616,  1741, 51000, -2616,  1804, 33866, -2616,
   -2616, 51000,  1730, -2616,  1734,   884, -2616, 51000,  1763, -2616,
     374,  2026,    65, -2616, 15260, -2616,  2119,  2200,  1915,  1742,
   51000, 42870, 19805, -2616,   505,   216, -2616,  2015, 42870,  1763,
    2159, -2616, -2616, -2616,   982, -2616,  2054,  1966, -2616,   275,
   -2616, 15260,   982,  1970,   314, 51000, -2616, -2616,  2733, -2616,
   48615,   212,   212, -2616, -2616,  1745,  1748,  1752,  1753,  1757,
    1758,  1760,  1764,  1765,  1769,  1772,  1783,  1785, -2616,  1787,
    1788,  1790,  1791,  1793,  1794,  1797,  1799,   914,  1800, -2616,
    1802,  1651,  1805,  1807,  1809,  1820, 55320,  1821,  1822,  1825,
    1827,  1828,  1829,   359,   363, -2616, -2616, -2616, -2616, -2616,
   -2616,   806,  1830, -2616,  1776, -2616, -2616,  1850, -2616,  1854,
   -2616, -2616, -2616, -2616, -2616, -2616, -2616, -2616,   429,   967,
     143, 51000,  1620,  1774,  2234,   486,  2018,  1808,  1472, -2616,
     811, 38565,  1620, -2616,  2193,   215,  1803, -2616,   199,  1844,
   -2616,  2017, 51000,  1834, -2616, -2616, -2616, -2616, 36645,  1685,
   33866, -2616, -2616, -2616, 19805,  2153,  1837, 48615, -2616, -2616,
   15260, -2616, -2616,  3880,  3880, 34250,   908, -2616,  3880, 15260,
   15260,  3880,  3880, 15260, -2616, -2616, 29584, -2616, 56250, -2616,
   -2616, -2616, -2616, -2616, -2616, -2616, -2616, 36165, 49560,  1838,
   42390, -2616, -2616, 42870, -2616,   896, 23238, -2616, -2616,  1740,
   -2616, 23238,  2117, -2616, 23238, -2616, 42870,  1846, -2616, 42870,
   -2616, 10715, 15260,  1883,   867,  1883, -2616,  1847,  1845, -2616,
     -39, -2616, -2616,  2258, 24678,  2217, 15260, -2616, -2616,   884,
   -2616,  2016,  1763,  1856, -2616, -2616, -2616, -2616, -2616, -2616,
   29682, -2616,    53, 15260, -2616,  1173,   827, -2616, -2616, -2616,
   -2616,  1763,   780, -2616, 42870,  2315,  2207, -2616, -2616, 33866,
   -2616, -2616,  1806,  1806, -2616, -2616,  2285, -2616, -2616, -2616,
   -2616,   806,   584, 28521, 42870, 42870,  1864, -2616, -2616,   445,
    2241,   912, -2616,   574,  1004, 42870,  2214, 38565,  2330, 42870,
    1620,  1869, -2616, -2616,  1047,  1047, -2616,  2014, -2616,  2020,
     226, -2616, 42870, -2616, -2616, 24678, -2616,  2237, 19805, 48615,
     917, -2616, -2616,  3880,  3880,  3880, -2616,  2068, -2616, -2616,
     934,  2335, -2616, 42870,   -40,   -17,  1877,  1878, -2616, -2616,
    1882, -2616, 15260,  1886, -2616, -2616, 23238,  1740,   944, -2616,
   48615, 42870,   954, 48615, -2616,  1887,  -102,  1889, -2616,  8190,
    1890, -2616, -2616, -2616, -2616, -2616, -2616, 33866, 33866, 51000,
    2060, -2616,  2060, -2616, 11220,  1944, 42870, 15260,  2314,    63,
   -2616,   955,     2, 33866, 42870, -2616, 35205, -2616,   884,   -79,
    1895, 15260, 29912,  2118, -2616, -2616,  2148, -2616,  2208, -2616,
   51000,  1958,   618,  1972, -2616, -2616, -2616, -2616,   967,   867,
    1472,  1803,  1844,  1902, 42870,  1004,   354, -2616,   574, -2616,
   -2616, -2616, -2616, -2616, -2616, -2616, -2616, -2616, -2616, -2616,
   -2616,  2334,  2115,  2337,  1744,   961,  2237,   972, -2616,  2351,
    1625,  1657, 36165,  1910, -2616,  1912, -2616, -2616, -2616, -2616,
   -2616, 51000,   705, -2616, 33866, 42870, -2616, -2616, -2616, 42870,
    2285,   974, -2616, 15260,  1914, 15260, -2616, 17785,  1908, -2616,
    2377, 15260,  1976,  1976,  1004, -2616, 30016, 51000, 51000, 51000,
    1544, 24678, -2616,  2042,   780,   884,   995, -2616,  1931, -2616,
   -2616, -2616, -2616,  2759, -2616, 30078,  2154,   134,  2136,  1895,
   -2616, 15260, -2616,  1997, -2616, -2616, -2616,  2391, -2616, -2616,
   38565,  1933,  1844,  1620,  1803,  2146, -2616,  2147,  1946,  1472,
   -2616, 15260,    22, -2616, -2616, 42870, -2616,  1015,  1938,  1947,
   -2616, -2616, -2616,  1949, 17785,  1951, -2616, 51000,  1953, 33866,
    2083, -2616, -2616, -2616,  2314, -2616, -2616,   300,   300, -2616,
   -2616, 27559,  2148, -2616, 35205, 28521,  1768,   -79,  2251, -2616,
   -2616, -2616, -2616,   146,  2168, -2616,  2172, -2616, 33866, -2616,
    1004, 38565, -2616, -2616, -2616, -2616, -2616, 24678,  1544,  1462,
   18290, 18290,  1960,  1026, -2616,  2452,  2121, -2616, -2616,  1962,
   -2616, -2616, -2616, 42390, 51000,  1520,  1520,  1544,  2136, -2616,
   -2616, -2616, -2616, -2616,   133,   133,  2343, -2616,  2030, -2616,
    1844,  1049, -2616, 19300,  2113,   253, 33005, -2616, -2616, -2616,
   -2616, -2616,  1971,  1973, -2616, -2616, -2616,   300, -2616, -2616,
   -2616, -2616, -2616,  2450, -2616,   179, -2616, -2616, -2616,  1472,
    2440, -2616, -2616, -2616, -2616, -2616, -2616,  2468,  1520,   884,
   -2616, -2616, -2616,  1544, 18795,  1978, -2616, -2616, -2616, -2616
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
   -2616, -2616, -2616,  1849,    84, -2616, -2616,    85, -2407, -1437,
      90,    92,   523, -2616,    93, -2616, -2616,   264, -2616,   962,
   -2616,   254,  -580,   594, -2616,    97,    29,  1451,   294, -2616,
       8, -1832, -2462,  -447, -2616,  -552, -2616,  -200, -2616,  -501,
   -2616,  -718,  -509,  -540, -2447,  -998, -2616,  1456,  -244, -2616,
     620, -2616, -2176, -2616, -2616,   605, -2616, -1002, -2616, -1791,
     227,  -488, -2196, -2187, -1850,  -661,   296,  -493,   276, -1796,
    -999, -2616,   632, -2616,  -477, -2616,  -642, -1549,   101,  -653,
   -1044,  -846, -1055, -2616,    23,   102,  1066,   113,  -990,   114,
   -2177,   116,   663, -2616,   864, -2616,   731,   120,   121, -2616,
     694,   123, -2616, -2616,     9, -2616,  -356, -2616, -2616, -2221,
   -2616, -2616,  -429, -2616,  -483,  -480, -2616, -2616,    31,  -847,
    1223, -2616,   124, -2616, -2616,  1234,  -719, -2616,  1284,    11,
   -2575,    14,   256,   125,    86,   126, -2616,   920,   127,  1084,
   -2616, -2616, -2616,    32,   128, -2616, -2616, -2616, -2616,  -436,
     577, -2310, -2616,   522, -2616, -2616, -2616, -2616,   -59,   280,
   -2616, -2616, -2616,    10,   960,   -35,   -16,   -10,    28,    61,
    1538,  1563, -2616, -1322,   683, -2616, -2616, -1848,  -630,   -51,
   -2616,   715, -1427, -1790,  -506,  1055,  1519,  1523,  -341,  -360,
   -2616,  -479, -2616, -1512, -2616, -2616,   710,  1091, -1313, -1307,
   -2616,   399, -2616,  -416,  -348, -2616, -2616, -2616, -2616, -2616,
     147,  -252,  -498,  1073, -2616,  1529, -2616, -2616, -2616, -2616,
   -1758, -1296, -2616,   702, -2046,   425, -2001, -1867,   175,   157,
   -1179,  -218,    18,   431,  -311, -2616, -2616,  -309, -1777, -2441,
    -319,  -316, -2616, -2616, -2616,  -512, -1178,  -727, -2616, -2616,
     308,  1909, -2616, -2616, -2616,  2066,  2236, -2616, -2616,  2349,
    3285, -2616,  -568,  3310,  1602,  -701,  1239, -1049,  1243, -1062,
   -1068,  -773,  1246,  1249, -1304,  3871, -1638,  -875,     6, -2616,
   -1761, -1743, -2616, -2616, -2616,   -78, -2616,  -391, -2616,  -385,
   -2616, -2616, -2616,  -426, -2175, -2616,  1179,   865, -2616, -2616,
   -2616, -1309, -2616,  4671,   774, -2616, -1704,  -940,  -620,  -907,
    -795, -1053, -1217, -2616, -2616, -2616, -2616, -2616, -2616, -1696,
   -1779,  -454,   824, -2616, -2616,   940, -2616, -2616, -2616,  -629,
    1042,  -591,  -902,   833, -2616,   173,  2010, -1387, -2616,   798,
   -1984, -2616, -2616,   462, -2616,  2413,  -478,  -992,    71, -1064,
      27, -2616,  3528,    -1,  1840,  2393, -2181, -2616, -2616,  -496,
   -2273,  -962, -2616,  -659, -2616,   129,   130,  1100,    56, -2616,
   -2616, -2616, -2616,   182,   420, -2616,  -305, -1943,   -50, -2616,
   -2514, -2615, -2616, -2616,  -369, -2503, -1771,   131,    -6, -2616,
   -2616, -2616,  -528, -2616, -2180
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1845
static const yytype_int16 yytable[] =
{
     488,   629,  1006,  1070,  1204,   676,  1211,  1365,    47,    57,
      71,    61,   484,  1249,    62,  1546,  1035,   870,  1451,   584,
     584,  1313,  1308,   644,  1545,   753,   994,  1604,    76,    46,
    1212,  1829,    67,   485,  1832,  1801,  1208,  2158,  1702,  2165,
     612,  1510,  2170,   771,    76,  1255,  2574,   564,  1371,   615,
    1521,  1293,  2143,  1453,  1296,  1517,    81,  2551,  2553,  2214,
     646,   779,   773,  1557,  1419,   864,   647,  2152,  2116,  2054,
    2055,  1608,  1740,  1741,  2075,   638,  1069,  1427,  1075,  2573,
    1079,  1324,   513,  1550,    40,    41,   543,  2250,  2251,  2252,
      42,  2207,    43,    44,   588,  2397,   627,    45,  2582,  2193,
    2262,    48,    49,  2586,  2143,   626,   626,   586,   658,  2356,
    -851,   492,  -859,    51,    52, -1233,    53,  2103,  2104,  2152,
      54,    55,  -576,    56,    60,    63,    64,    66,    68,    79,
      80,    83,  1235,  1236,  1814,   871,  1956,  1028,  2917,  2746,
   -1208,  1434,  2403,  2057, -1676,  1031,   887,  2058,  2415, -1685,
    -856,  1582,  1481,  -859,  -856, -1693,  1256,  1299,   582,   654,
   -1233,   582,   887,  1247,  1850,  2732,   988,  2271, -1230, -1230,
    -579,  1256,  1853, -1669, -1234,  2742,  2215, -1670,  1256, -1671,
    1754, -1816, -1816,  1754,  2688, -1817, -1817, -1818, -1818, -1672,
    1775, -1673,  1966,  3072, -1676, -1669, -1685, -1819, -1819, -1820,
   -1820, -1691, -1823, -1823, -1832, -1832, -1670, -1671,   619, -1838,
   -1838,  1530, -1693, -1672,  1533,  1534,  2036,  -576,  2792, -1695,
   -1840, -1840, -1842, -1842, -1673,  -818,  1513, -1843, -1843, -1081,
     649,  2310,  2312,   995,  1255,  1513, -1081,  1548,  1431,  1302,
     582, -1234,  2830,  -831,   887, -1691,  2242,  1229,  2443, -1231,
   -1231,   689,  2875,  1791, -1695,  -846,   582,  2673,   579,  2727,
    1792,  2844,  2281,     3,     4,  -579, -1101,  -534,  3044,  2886,
     582,  1952,  1256, -1101,  1678,  2922,  2904,  2949,  2722,  1302,
    1677,  2413,   641,  2703,   887,   641,  1555,  2871,  2216,  2583,
    1380,  1230,  2888,  1675,  1381,  2872,  3091,  1556,  2485,  2605,
     886,  2346,   597,  2057,  2988,  2919,  3000,  2058,  2424,    87,
    2059,  2060,  2061,  1024,  1380,  2331,  1776,  2929,   650,  1572,
    -280,  2747,  1389,   887,    84,  -280,  1361,  1235,  1236,  1529,
    1601,  2210,  1777,  2857,  1463,  2699,  2748,  1778,  1502,  1826,
     870,  2889,   578,  1380,  2057,  1798,  2322,   870,  2058,  1018,
    2901,  3020,  1432,  1247,  1391,  2721,  2324,  2738,  2645,  1250,
    1372,  -792,  2649,  1633,  2744,  1208,  2184,  1635,   887,    85,
    2486,  1856,   887,  2455,  1779,  1389,  2930,  3012,  1391,  2432,
    3021,  1251,  1380,  2396,   581,  2347,  1381,  1026,  1316,  1429,
     639,  1573,  2415,   622,  2741,  2403,  2152,  -703,  2152,   580,
     996,  2185,   997,  3073,  2948,   598,  2207,  1391,  2207,  -576,
      26,  1717,   989,  2745,  1389,  2456,  1429,  1494,  3082,  3067,
    2326,  2327,  2328,  2329,  2330,  1664,  1827,  2334,  2335,  2336,
    2337,  2338,  2339,  2340,  2341,  2342,  2343,  1505,  1574,  3001,
    1464,  2923,  1046, -1813, -1813,  1257,  1391,    31,  2842,  2606,
    2584,   722,  1019,  2487,  2887,  2332,  3092,  -579,   640,   630,
    1257,   870,   870,  1702,  2873,  2333,  1231,  1257,  2211,  2674,
    3034,    88,  -576,  1433,  1711,  3078,  1520,  2890,  1857,    89,
    2374,  2375,  3074,   990,  2137,  2138,  2825,  1799,    33,  2062,
     632,  1560,  1559,  2700,  2685,  1654,   881,  2217,  -792,  2218,
    2591,  1881,    34,   666,  2678,  2835,  1939,  3014,  2689,  3075,
     629,  2063,  2160,  2599,  3051,    90,  3002,  1953,  2749,  1962,
    -579,  1780,  2168,  1850,  3023,  2635,    35,  2219,  2273,  1492,
    2173,   767,  1546,  3040,  1665,   620,   641,  1493,  2945,   869,
      36,  1755,  2551,  2553,  2118,  2603,  3013,   651,   690,  2258,
    2259,   631,  2831,  2006,  2008,  1233,  1204,  2851,   493,  2005,
     662,  1257,    91,  1593,   663,   648,  1549,  2686,  3083,  1679,
    1250,  2004,    76,  1232,  1446,  2243,   866,   872,  2196,   584,
     874,  2064,   686,  -576,  2728,  3045, -1081,   875,  1522,  1507,
    1839,   672,  1251,   488,   488,  1036,  1338,   646,   876,  1258,
    2781,  1939,   985,   647,  -851,  2785,  1252,  2262,  2787, -1233,
    1793,  1250,   776,   684,  1292,  2057,   488,  1361,  2679,  2058,
    1940,  1295,  -576, -1101,  -576,  2697,  2761,  2073,  2429,  2947,
    1812,  -579,   662,  1251, -1208,  2000,   663,  2772, -1676,    47,
      57,    71,    61, -1685,  -856,    62,  2143,  1254,  2026, -1693,
    2143,   999,  1375,  2027, -1233,  1125,   488,  1205,  1639,    76,
      46,  2152,   661,    67,  1886,  2152,   873, -1669, -1234,  1041,
    -579, -1670,  -579, -1671,  2677,   687,   642,  1605,  1606,  2953,
    1535,   998,  2954, -1672,  1008, -1673,  1916,    81, -1676, -1669,
   -1685,   691,  2171,  2430,   626, -1691,  1919,   887,  2698,  1922,
   -1670, -1671,  1663,  1508,  2028,  1584, -1693, -1672,  1354,  2774,
    1662,   688,  1361, -1695,  2775,    40,    41,  1669, -1673,  1237,
    2726,    42,  1887,    43,    44,  1306,  1307,  2667,    45,  1751,
    1715,   753,    48,    49,   767, -1234,  2092,  1241,  3018, -1691,
    2896,  1702,  1663,  1208,    51,    52,  1613,    53, -1695,  -846,
    1425,    54,    55,  1738,    56,    60,    63,    64,    66,    68,
      79,    80,    83,  2573,  1815,  1306,  1307,  1466,   668,  1204,
     669,   488,  1372,   870,  1412,  2731,  1941,  1540,  2065,  2066,
    2067,  1523,  2068,  2069,  2070,  2071,  2072,  2073,  1245,  1246,
    1663,  2218,  2020,  2019,   495,   771,  1625,  2361,  1663,  1982,
    1208,  1541,  1629,   692,  2712,  2713,  -280,  -280,  2385,  2386,
    2387,  2388,  2294,  1467,  2551,  2553,  1626,  1631,  2298,  2498,
    1572,   864,  1536,   693,  2741,  2070,  2071,  2072,  2073,  1522,
    1537,  2096,  1711,  1711,  2696,   886,  1466,  1711,  2057,  1332,
      26,    36,  2058,  1520,  1886,  2059,  2060,  2061,  2007,  2009,
    2010,  1043,  2828,   777,  1024,   496,  2161,  1044,  3093,  1365,
    1546,  1908,   869,  1409,  1410,  1411,  1412,  1315,  1742,   869,
    1125,   767,   582,  1468,  1315,  1915,  2771,    31,  3080,  1513,
    1711,  1711,  1467,  1043,  1989,  2253,   877,   488,  2143,  1044,
    1514,  2644,  2735,  2143,  2152,  1757,  2143,  2370,  1513,    76,
    1522,  2655,  2204,  2152,  2658,  2011,  1540,  2012,  2152,  1516,
    2014,  2152,   629,  2818,  1522,  2108,   488,  1300,    33,  3098,
    1301,  1878,  1469,   879,  1204,  1935,  1936,  1937,  1026,  2168,
    1541,  2152,  1763,  2244,  1961,  2705,   488,   488,   488,  1574,
     488,   488,  2109,  2710,   594,   880,   886,  1544,  1914,  2057,
     611,  1444,  1374,  2058,  1445,  1522,  2059,  2060,  2061,  1764,
      72,  1377,  2739,  1045,   488,  1522,  2757,  1925,  1653,  2194,
      36,  1654,  1932,  2363,  1522,  1426,    72,  1027,  2282,  1250,
    1986,  2286,  1470,   869,   869,   637,  1437,   882,  1315,  1315,
      72,  1469,  2405,  2925,  2818,  1045,   628,   670,   881,   671,
    1890,  1251,  1380,  2459,  1455,  1456,  1381,  1462,  1250,   987,
     647,   647,  2152,   647,  2465,  1252,   488,   993,  1551,  1239,
     488,   488,  1523,  1272,  1273,    72,  1002,   499,  2143,   500,
    1251,   488,  1554,  1043,  1389,  1976,   645,  1977,  2466,  1044,
    2238,  1248,  1917,  2152,  1254,   662,  2063,  1920,   495,   663,
     767,  1470,   886,  2239,   503,  2057,  1041,   662,  1009,  2058,
    2110,  1428,  2059,  2060,  2061,  2111,  1391,  2130,  2406,  2131,
     679,  -382,  1765,  2241,  1290,  1125,  2859,  1766,  2843,  2364,
     626,  2406,  1767,  2245,  1520,  1583,  1125,   662,  2460, -1208,
    1547,   663,  2249,  1523,  2068,  2069,  2070,  2071,  2072,  2073,
    1010,  2086,  2407,  1998,  1016,    92,   680,  1523,   491,   496,
    1125,   870,  2943,  1012,   542,  2407,  2064,  1046,  2408,  1583,
    2876,  2771,  1702,  1655,   870,   596,  1656,  2860,  2409,   609,
    1013,  2651,  1024,  1276,  1277,  1949,  2861,  1025,  1950,  2152,
    2106,  2409,  2270,  2989,  2032,  1045,  1017,  1990,  1523,  1046,
    1656,  1022,  2616,  1365,  2461,  1520,  2462,  2063,  1523,  2132,
    2818,  2133,  2410,  1960,  2497,  2862,  1037,  1523,  1047,  1520,
    1043,  2304,  1048,  1038,  2489,  2226,  1044,  2228,  2152,  2229,
      26,  2231,  2156,  1711,  1711,  1711,  1711,  1711,  1042,   682,
    1711,  1711,  1711,  1711,  1711,  1711,  1711,  1711,  1711,  1711,
    1073,  2453,  1049,  2452,  1048,  2454,  1026,  2112,  2025,  1205,
    1520,   767,  2029,  1039,  2030,  1239,  2569,    31,  2113,  2488,
    1520,  2496,  1578,  1579,  1768,  1580,  1055,  2064,  1581,  1520,
    2650,   488,  2653,  1248,  1074,  1769,  2863,   767,   767,  3089,
    1054,  3052,  2469,  1711,  1711,  3068,  3069,  1996,  2864,  2411,
    1997,  2015,   767,  1043,  2016,  1027,  2818,  1072,    33,  1044,
    3070,  1076,  2411,  2063,   983,   984,  2085,   986,  2087,  2088,
    1050,  1209,    34,  2232,  2152,  2236,  2233,   886,  2237,  1210,
    2057,   499,  1045,   500,  2058,  2439,  1213,  2059,  2060,  2061,
    2472, -1811, -1811,  2296,  2297,   869,    35,  2267,  3096,  1046,
   -1812, -1812,  1050,  2288,  2619,   502,  1654,  1215,   503,  2440,
      36,  1205,  2441,  2065,  2066,  2067,  3097,  2068,  2069,  2070,
    2071,  2072,  2073,  1021,   488,  1023,   488,  1217,    76,  1218,
     488,   488,   866,  2064,  1226,  2444,  2578,  1660,  2445,  1950,
     488,  1684,   488,   488,   488,   488,   488,   488,   488,   677,
    1077, -1814, -1814,  1228,  1048,    76,  1657,  1639,  1237,  1659,
    2597, -1815, -1815,  2598,  1865,  1045,  1627,   488,  1628,   488,
   -1821, -1821,  1233,    26,   767,   488,   488,   488,   488,   488,
     488,   488,  1205,  1661,  1078,  1240,   488,   488,  1043,  1241,
    2760,   488,  2547,  2617,  1044,   488,  1656,  1243,   488,   488,
     488,   488,   488,   488,   488,   488,   488,  1261,  2762,   488,
      31,  1656,  2850,  1244,  2168,  1950,   488,  2878,  -625,  1125,
    1656,   678,  1205,  -625,  2065,  2066,  2067,  1801,  2068,  2069,
    2070,  2071,  2072,  2073,  2881,  1816,  1046,  2882,  1260,  2865,
    1263,   488,  2866,  2497,  2898,  2833,  1291,  2899,  1294,  2680,
    2476,    33,  1050,    72,  2902,  2920,  1297,  2899,  2921,   488,
    1327,  2959,  1298,  1890,  2921,    34,  1317,  1663,  1328,  2352,
     488,   488,  2960,  -822,  2972,  1656,   999,  2899, -1822, -1822,
    -588,  1407,  1408,  1409,  1410,  1411,  1412,  1877,  2063,    35,
     870,  1048,  -625,  2477,  -588,  2993,  1851,  1852,  2994,  -588,
    1045, -1824, -1824,    36,    72,   628,   767,  1868,  1330,  2478,
     679,  -829,  1205,   886,  1205,  3024,  2057,  2302,  3025,  1046,
    2058,  1049,  1336, -1845, -1845, -1845,  3061,  2318,  1337,  2899,
    2065,  2066,  2067,  1338,  2068,  2069,  2070,  2071,  2072,  2073,
    1339,  -625,  2877,  1266,  1267,  2325,   680,  1866,  -588,  3079,
   -1825, -1825,  2921,  1125, -1826, -1826,   488,   488,  2064,   488,
    3035,  3036,  2420, -1827, -1827,  1663, -1828, -1828,  -588,  1340,
    1923,    36,  2348,   645,  1048,  1882,  1342,  1205,  1908,  2353,
    2554,  -703,   681,  2596,  -704,  1891,  -819,  1894,  1125,  1050,
    1905,    72, -1829, -1829,   488,  -820,  1909,  1711,  1911,  -823,
    1967, -1830, -1830,  1343,  1924, -1831, -1831,  2479,  -821,   767,
    1918,  1344,  1272,  1273,  2480,  1921,    26,  -588,  1346,  1926,
    1927,  1928,  1929,  2568,  1933,  1934,  -588,  2575,  2670,   682,
     639,  1043,  1347,   869, -1833, -1833,  1348,  1044,  1315,  1349,
    3088,  1350,  2024,  2708,  -626,  1688,   869,  1351,  1125,  -626,
     767,  1315,  1689,    31,  1046,  1690,  1691,  1692,  1352,   488,
   -1834, -1834, -1835, -1835,   488, -1836, -1836, -1837, -1837, -1839,
   -1839,  1353,  1050,  1354,   629, -1841, -1841,   886, -1844, -1844,
    2057,  1562,  1563,  1358,  2058,  2848,  2168,  2059,  2060,  2061,
    1370,  -677,  -677,  1373,    33,  1274,  1275,    26,   640,  -681,
    -681,   488,   488,   488,  2620,  1930,   488,  1420,    34,  1048,
    1276,  1277,  -680,  -680,   488,   488,   488,   488,  -626,  1422,
    1440,  1442,  1276,  1277,   488,   629,  2548,  1417,   488,  1711,
    1379,   488,    35,  1380,    31,  1423,  1447,  1381,  1438,  1931,
   -1845, -1845, -1845,  1045,  1448,  1452,  1867,  1454,  1025,   488,
     488,  2304,  1488,  1027,   488,  2065,  2066,  2067,  1490,  2068,
    2069,  2070,  2071,  2072,  2073,  1389,  -588,  -626,   488,  1498,
    1518,   488,  1390,   488,  1520,    33,   641,  1519,  1525,  1526,
    1531,  2885,  2717,  2718,  1538,  1527,  1539,  2595,  1543,    34,
    1553,  1208,  1558,   488,  2064,  1566,  1565,  1391,  1570,  2885,
    1575,  1576,  1583,  1586,   488,  1589,  1056,  1050,  1590,  1249,
    1663,  1591,  1594,    35,  1600,   887,  2150,  1607,  1609,  1610,
    1616,  1617,  1620,  1621,   488,  1057,  1630,    36,  1622,  1623,
     662,    72,   629,  1012,   663,  1660,  2405,   485,  1652,   488,
     488,  1665,  1670,  1380,  1730,  1732,   486,  1737,  1734,  1333,
    1760,   514,  1735,    76,  1657,   514,   488,  1659,  1736,  1365,
     585,   585,   587,   514,   595,  1753,  1771,   595,  2150,  1341,
     595,   617,  1774,   488,   514,   514,  1058,  2547,  1772,  1795,
    1796,  1661,  1810,  1711,  1823,  1817,  1824,  1825,  2063,   485,
     640,  1205,  1205,  1205,  1627,  1830,  1840,  1046,  1392,  1842,
    1841,  1845,  2235,  2969,  1843,   595,  1844,  1363,  1861,  1864,
    1883,  1862,  2406,  1879,  1393,  1884,   642,  1885,   641,  1394,
    1951,  1947,  1963,  1964,  1955,  1965,  2167,   617,   514,   617,
     617,   617,  1125,  1979,  1983,  1984,  1987,  1985,  1988,  1991,
    1992,  1546,  1993,  1994,  1995,  2002,  2407,  2261,  2003,  2022,
    2034,  2013,  1048,  2033,  2040,  2045,  1397,  2042,  2064,  2043,
    2107,  2044,  2408,  2046,  2047,  2082,  2049,  1059,  2050,   767,
    2128,  2102,  2409,  2053,  2694,  2076,  2114,   488,  2077,  2083,
     645,   645,  1049,   645,  2469,  2090,  2100,  2123,  2716,  2124,
    2470, -1845, -1845, -1845,  2126,  2068,  2069,  2070,  2071,  2072,
    2073,  2127,  2154,  2471,  2163,  -682,  2410,  -683,  2174,  2178,
    1205,  1400,   869,  2175,  2177,  2180,  2183,  1315,  1060,  2190,
    2197,  3019,  2307,  2200,  2308,  2195,  1061,  2782,  2313,  2314,
     488,  2198,  2472,   767,  2473,  2202,  2203,  2275,  1062,   488,
    2225,  2836,   488,  2206,  2227,   488,  2240,  2246,  2247,  2248,
    1050,   767,   488,   488,   488,   488,   488,  2254,   629,   488,
     488,   488,   488,   488,   488,   488,   488,   488,   488,  1063,
     870,  2255,   488,   488,  2257,  2380,   488,  2256,   767,  2265,
    2269,  2276,  2266,   488,  2279,   767,  2283,   488,  2280,   629,
    2284,  2287,  2291,  2411,  2309,  2317,   488,  2300,  2293,   488,
    2079,   488,  2301,  1402,  2057,  2078,   629,  1640,   767,   488,
    2349,  2369,   488,   488,  2368,  2350,  1065,   488,   488,  2474,
    2383,   488,  2351,  1693,  1694,  1695,  2354,  1696,  1697,  1698,
    1699,  1700,  1701,   488,  2366,   488,  2372,  2135,  1066,   765,
    2394,  2404,  2418,  2422,  2427,  2150,  2428,  2150,   488,  2547,
    2431,  2433,  1641,  2442,  2436,  2065,  2066,  2067,  1068,  2068,
    2069,  2070,  2071,  2072,  2073,  2451,   485,  2928,   485,  2438,
    2457,  2458,  2464,  2484,   488,  2500,  2580,  2565,  1642,  2566,
    2567,  2783,  2571,  2581,  2588,  2592,  2594,  2475,  1950,  2601,
    2604,   488,  2476,  2607,  2610,  2608,  1643,  2609,  2611,  2637,
    1644,  2625,  2638,  2640,  2643,  1403,  2646,  2654, -1845, -1845,
   -1845,  2548,  1407,  1408,  1409,  1410,  1411,  1412,  2647,  2660,
    2659,  2661,  1645,  2662,  2683,  1646,  2664,  1205,  2687,  2676,
    2681,  1205,  2552,  1205,  2682,  2477,  2691,  2550,  2692,  2701,
    1647,  2693,  2704,  2707,  2706,   886, -1230,  2711,  2057, -1811,
    2962,  2478,  2058, -1812, -1813,  2059,  2060,  2061, -1814, -1815,
      72, -1816,  2261,  2992,  2723, -1817, -1818,  2724,  3041,  2449,
   -1819,  2725,  2734, -1820,  2733,  2572,  1578,  1579,  2900,  1580,
    2996,  2900,  1581,  2973, -1821,  2975, -1822,    72, -1824, -1825,
    2736, -1826, -1827,   767, -1828, -1829,  2501,  2589, -1830,  2590,
   -1831, -1833,  2743, -1834,  2752,  2750, -1835,  2737, -1836,   488,
   -1837,  2555,  2556,  2557,  2558,  2559,  2560,  2561,  2562,  2563,
    2564, -1838, -1839, -1840,  2758,  1673, -1841,   582, -1842, -1843,
   -1844, -1231,  1648,  2755,   617,  2928,  2759,  2773,   674,  2786,
    1649,   675,   765,  2809,  2940,  2791,  2816,  2813,  2814,  2479,
    2822,   514,  2824,  2838,  1761,  2826,  2480,   488,   488,  2839,
    2840,   495,   488,   767,  2847,  2849,  2854,   488,  2855,  2858,
     488,   488,  2869,  2883,  2879,   488,  2891,  2892,  2870,   675,
     514,   514,  2893,  1650,  -382,  2895,  2903,  2911,  2905,  2917,
    2914,  1264,  1265,  2907,  2933,  2700,  2937,  2939,   488,  2941,
    2944,  2950,   488,  2955,   515,  2956,  2957,  2961,   515,  2965,
    2150,  2977,  2966,  2974,  2150,  2978,   515,  2980,  2991,  2995,
     585,  2985,   496,  3003,  2998,  3009,  2666,   515,   515,  3010,
     488,   485,  3011,  1264,  1265,   485,  3015,  3016,  3026,   980,
     980,   595,   595,  3033,   595,  3017,   756,  3027,  2669,  3028,
    2671,  3030,  2628,  3043,   617,  3046, -1845,    72,   488,  3048,
    3060,  3062,  3065,   514,  3063,  3044,   488,  1266,  1267,  3045,
    3081,  3086,  3087,   617,  3090,  3094,   497,  3095,  3099,   765,
    1014,   515,  2268,  2548,  2499,   488,  2223,  2503,  1910,  1495,
    2447,   617,  3007,  3077,   767,  2834,  3042,  3049,  3071,  1509,
     653,  2868,   656,  2230,   660,  2205,  3039,  2587,  2468,  1266,
    1267,  3047,  1820,  2504,  2201,  3038,  2031,  2714,  2958,  2162,
     617,   617,   617,   617,  1632,  1624,  2064,  1603,  2579,  1819,
    2552,  2263,  1268,  1269,  1270,  1271,  1272,  1273,  2303,  2756,
    1274,  1275,  2695,  2570,  1430,  2166,   498,  1449,  1860,  1485,
      72,  2968,  1484,  2982,  3066,  2176,  1837,  2426,  3029,  2976,
    2913,  1489,  1264,  1265,  2179,  1859,  2398,  2652,  2636,  2897,
    2393,  2964,  2963,  2665,  1268,  1269,  1270,  1271,  1272,  1273,
    2970,  1674,  1274,  1275,  2971,  1676,  3031,  2812,  1680,  1436,
    2740,  1681,   869,  3032,   499,  3059,   500,  1315,   488,  1800,
    2098,   767,  2121,   758,   488,  2169,  2037,  1946,  2119,  2668,
     982,  2157,   501,   488,   488,  2446,  2990,   488,   502,  2425,
    2815,   503,  3037,  2672,     0,     0,     0,     0,     0,     0,
       0,   488,     0,     0,     0,     0,     0,     0,  1266,  1267,
     488,     0,     0,  2150,     0,   488,  1276,  1277,   488,   756,
       0,     0,  2150,     0,     0,   488,   488,  2150,   765,     0,
    2150,     0,     0,  2811,   485,     0,     0,     0,   488,  1363,
     488,     0,     0,   485,     0,     0,     0,     0,   485,     0,
    2150,   485,     0,     0,     0,     0,     0,   488,  1276,  1277,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   485,     0,  1268,  1269,  1270,  1271,  1272,  1273,     0,
       0,  1274,  1275,     0, -1570,     0,     0,  2552,     0,     0,
    1363,  1329,  2550,  2065,  2066,  2067,     0,  2068,  2069,  2070,
    2071,  2072,  2073,     0,     0,     0,     0,     0,  1761,     0,
       0,     0,     0,     0,  2852,     0,     0,     0,     0,   488,
       0,     0,   488,   767,  2125,     0,     0,     0,     0,  1278,
    1279,  2150,     0,     0,   629,     0,     0,     0,     0,     0,
    2142,  1056,     0,   759,     0,  2837,   488,     0,     0,  1280,
     488,     0,   485,     0,   767,    72,   756,   767,   514,     0,
    1057,     0,  2150,   488,     0,  2845,  2846,  1056,     0,     0,
       0,  1278,  1279,     0,     0,     0,   758,     0,   488, -1570,
    2856,   488,     0,   485,     0,     0,  1057,  1276,  1277,   765,
    1205,     0,  2142,     0,     0,   488,     0,   628,     0,  1379,
       0,   617,  1380,     0,     0,     0,  1381,     0,     0,     0,
       0,  1058,     0,     0,     0,   765,   765,     0,  2946,   514,
     514,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     765, -1570,     0,     0,  1389,  2952,     0,  1058,     0,     0,
       0, -1845,     0,     0,     0, -1570,   488,     0,   617,   617,
   -1570,  1500,   617,  1512,     0, -1570,   761,  2915,  2150,     0,
       0,     0,     0,     0, -1570,   617,  1391,   488, -1570,   488,
       0,   488,     0,     0,   515,   488,     0,   667,  2492,   485,
       0,     0,   617,     0,     0,   488,   617,     0,     0,     0,
       0,     0,     0,     0,  2983,     0,     0,  2150,     0, -1570,
    1278,  1279,  1059,   515,   515,   488,     0,     0,     0,     0,
       0,     0,     0,   758,     0,     0,     0,     0,   485, -1570,
       0,     0,     0,     0,     0,   488,     0,     0,  1059,     0,
       0,     0,     0,     0,     0,   756,  2105,     0,   488,     0,
       0,     0,     0,     0,     0,     0,   759,     0,     0,     0,
       0,     0,   765,  1060,     0,     0,     0,     0,  1205,  2552,
       0,  1061,     0,     0,  2550,     0,     0, -1845, -1570,     0,
       0, -1570,     0,  1062,     0,     0,     0, -1570,     0,  1060,
       0,   488,     0, -1845,   488,   488,   515,  1061, -1845,     0,
    3050,     0,     0,  2150,     0,     0,     0,   992,     0,  1062,
       0,     0,     0,     0,  1063,     0,     0,     0,     0,     0,
       0, -1570,     0,     0,   485,  1379,  1015,   488,  1380,     0,
    1569,     0,  1381,  1363,     0, -1845,     0,     0,   617,     0,
    1063,     0,     0,     0, -1570,     0,     0,  1599,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1389,  1065,     0,     0,  1363,     0,     0, -1845,   488,   761,
       0,     0,     0,  1220,  1223,  1224,  1225,     0,     0,  2392,
    1615,  2395,     0,  1066,     0,     0,     0,  1065,     0,     0,
    1400,     0,  1391,   759,   765,     0,     0,     0,     0,     0,
    2135,     0,   758,  1068,     0,     0,   756,     0,     0,  1066,
       0,   675,   675,     0,   514,   514,     0,   514,   675,     0,
       0,     0,     0,     0,     0,     0,     0, -1570,     0,  1068,
       0,     0,   756,   756,     0, -1570,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   756,     0,     0,
       0,     0, -1570,     0, -1570, -1570,     0,     0,     0,     0,
       0,     0,  2115,     0,     0,  1379,     0,  1704,  1380,     0,
       0,     0,  1381,     0,     0,     0,     0,     0,  1729,     0,
       0,     0, -1845,     0,     0,     0,     0,     0,     0,     0,
       0, -1570,     0, -1845, -1570, -1570, -1570,   765,     0,     0,
    1389,     0,     0,     0,     0,    72,   761, -1845,     0, -1845,
       0,   675,     0,     0, -1845,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    72,     0,    72,
       0,     0,  1391,     0,     0,     0,     0,     0,   765,     0,
       0,     0,   980,   617,     0,     0,     0,     0,     0,     0,
       0, -1845,     0,     0,     0,     0, -1572,     0,     0,     0,
       0,     0,     0,   758,   617,     0,   617,     0,     0,   756,
       0,     0,   759,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0, -1845,     0,     0,     0,     0,   758,
     758,  1407,  1408,  1409,  1410,  1411,  1412,     0,     0,     0,
       0,     0,  2373,     0,   758,     0,  1400,     0,     0,     0,
     617,     0,     0,     0,     0,     0,     0,     0,  1871,  1876,
       0,  1369,     0,  1512,   514,     0,     0,     0,     0,     0,
       0,     0,     0, -1845,   514,  1892,   514,  1896,     0,   514,
       0,     0,     0,     0,  2142,   514,     0,   514,  2142, -1845,
       0, -1572,     0,     0, -1845,     0,     0,     0,   675,   514,
       0,     0,     0,   675,   514,     0,     0,     0,   514,   514,
     514,   514,     0,   514,   514,     0,     0,     0,    72,     0,
      72,     0,   515,   515,  1443,   761,     0,     0,     0,     0,
       0, -1845,     0,   617,   617,  1959,     0,     0, -1845,     0,
       0,   756,     0, -1572,     0,     0,     0,     0,     0,     0,
       0,  1975,     0,     0,     0,     0,     0, -1572,     0,     0,
       0,     0, -1572,     0,     0,     0,   758, -1572,     0,     0,
       0,     0,  1496,   759,     0,  1501, -1572,     0,     0,     0,
   -1572,     0,     0,     0,     0,     0,  1400,     0,  1528,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   759,
     759,     0,     0,     0,     0,     0,     0,     0,     0,  1552,
       0, -1572,     0,     0,   759,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0, -1572,     0,     0,     0,     0,     0,     0,     0,     0,
   -1845,     0,     0,     0,   756,     0,     0,  1407,  1408,  1409,
    1410,  1411,  1412,     0,     0,     0,     0,     0,     0,     0,
      72,     0,     0,     0,     0,     0,  1379,     0,     0,  1380,
       0,     0,     0,  1381,  1056,     0,     0,     0, -1845,     0,
   -1572,     0,     0, -1572,     0,   756,   761,     0,   514, -1572,
       0,     0,     0,  1057,     0,   514,     0,   765,   758,     0,
       0,  1389,     0,     0,     0,     0,     0,     0, -1845,     0,
       0,     0,   761,   761,     0,     0,     0,     0,     0,     0,
       0,     0,     0, -1572,     0,     0,  2142,   761,     0,     0,
       0,  2142,  1704,  1391,  2142,     0,   759,     0,     0,     0,
       0,     0,     0,     0,  1058,  2490, -1572,     0,     0,     0,
       0,  1585,     0,  2491,     0,     0,     0,     0,     0,     0,
       0,   765,     0,     0,   617,     0,     0,     0,     0,     0,
    2153,     0,     0,     0,     0,     0,     0,     0,     0,   765,
   -1845,     0,     0,   514,     0,     0,     0,  1407,  1408,  1409,
    1410,  1411,  1412,     0,     0,     0,     0,     0,     0,     0,
       0,   758,  2135,  2376,     0,     0,   765,   515,   515,     0,
     515,  2492,     0,   765,    72,     0,     0,     0,     0,     0,
       0,     0,  2153,     0,  2182,     0,     0,  2187,     0, -1572,
    1871,     0,     0,     0, -1845,  1059,   765, -1572,     0,     0,
       0,     0,   758,     0,     0,     0,     0,  1569,     0,   761,
   -1845,     0,     0,     0, -1572, -1845, -1572, -1572,     0,     0,
       0,     0,     0,     0,     0,     0,  2142,     0,   759,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1363,
       0,     0,     0,     0,     0,     0,  1060,     0,     0,     0,
       0,     0, -1845, -1572,  1061,     0, -1572, -1572, -1572,     0,
       0,     0,     0,     0,     0,     0,  1062,     0,  2493,     0,
    1569,     0,     0,     0,     0,   617,     0,     0,     0,     0,
       0,     0,     0,  1569,   617,   617,   514,     0,   617,     0,
       0,     0,     0,     0,     0,    72,     0,  1063,     0,     0,
       0,     0,   762,     0,     0,   617,     0,  1400,     0,     0,
       0,     0,     0,     0,     0,     0,  1809,  2299,     0,     0,
     765,     0,     0,     0,     0,     0,     0,   764,     0,     0,
       0,   759,     0,   675,     0,     0,     0,  1818,     0,  1821,
       0,   761,     0,     0,  1065,     0,     0,  1569,  1569,     0,
       0,     0,     0,     0,    72,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   756,     0,  1066,     0,  1379,     0,
    1704,  1380,   759,     0,     0,  1381,     0,   515,     0,     0,
       0,   765,     0,  1855,     0,     0,  1068,   515,  2494,   515,
       0,  2495,   515,     0,     0,     0,     0,     0,   515, -1845,
     515,     0,     0,  1389,     0,     0,     0,     0,     0,     0,
   -1845,     0,   515,     0,     0,     0,     0,   515,     0,     0,
       0,   515,   515,   515,   515,     0,   515,   515,   756,     0,
       0,     0,     0,     0,     0,  1391, -1586,     0,     0,     0,
       0,     0,     0,     0,   761,     0,   756,     0,     0,     0,
      72,   765,     0,     0,     0,     0,   617,   617,   617,   486,
       0,  2153,  2402,  2402,     0,     0,  1957,  1958,  2402,  2417,
       0,     0,     0,   756,     0,     0,     0,     0,     0,     0,
     756,     0,     0,     0,     0,   761,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1520,     0,   617,     0,     0,
       0, -1845,     0,   756,     0,   762,     0,     0,  1407,  1408,
    1409,  1410,  1411,  1412,     0,  1871,     0,     0,   514,     0,
       0,   758,  1569,  1512,  1569,     0,  1599,     0,     0,     0,
     764, -1586,     0,     0,     0,     0, -1845,     0,     0,     0,
       0,     0,     0,     0,     0,   514,     0,  2502,     0,     0,
       0,     0, -1845,     0,     0,     0,     0, -1845,     0,     0,
     514,   514,   514,   514,   514,   514,   514,   514,   514,   514,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   765, -1586,     0,   758,  1975,     0,     0,     0,
     617,     0,     0,     0, -1845,     0,     0, -1586,     0,     0,
    1512,   515, -1586,   758,     0,     0,     0, -1586,  1369,     0,
       0,  1599,     0,     0,     0,     0, -1586,     0,   765,     0,
   -1586,     0,     0,     0,     0,     0,     0,   756,     0,  1569,
     758,     0,     0,     0,     0,     0,     0,   758,     0,     0,
       0,     0,   762,     0,     0,     0,     0,     0,     0,  1400,
       0, -1586,     0,     0,     0,     0,     0,     0,     0,     0,
     758,     0,     0,     0,     0,     0,     0,   764,     0,     0,
       0, -1586,     0,     0,     0,     0,     0,     0,     0,  2612,
       0,     0,     0,     0,     0,     0,     0,     0,   756,   765,
       0,   759,     0,     0,     0,     0,   515,  2134,     0,     0,
       0,     0,     0,  2630,     0,   617,   617,   617,   617,     0,
       0,     0,  2402,  2417,     0,  2402,  2402,     0,     0,   514,
   -1586,     0,     0, -1586,  2153,     0,     0,     0,  2153, -1586,
       0,     0,     0,     0,   514,     0,     0,     0,     0,     0,
       0, -1845,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1704,     0,     0,     0,   759,   980,     0,   756,     0,
       0,  2187,     0, -1586,     0,  1871,     0,     0,     0,     0,
       0,  1512,     0,   759,     0,     0,     0,  1569,     0,     0,
       0,     0,     0,     0,   758,     0, -1586,     0,     0,     0,
     675,   514,     0,     0,     0,     0,     0,     0,   617,     0,
     759,     0,     0,     0,   761,   765,     0,   759,     0,     0,
       0,     0,     0,     0,     0,  2715,     0,     0,     0,     0,
       0,   762,     0,     0,     0,     0,     0,     0,     0,     0,
     759,     0,     0,     0,     0,     0,     0,     0,     0,   515,
       0,   765,  2135, -1845,     0,   758,   764,     0,  2264,     0,
    1407,  1408,  1409,  1410,  1411,  1412,     0,  2272,  2274,     0,
       0,  2278,     0,     0,     0,     0,     0,     0,   761, -1586,
       0,     0,   765,     0,     0,   765,  1314, -1586,  2292,     0,
       0,     0,     0,  1314,     0,     0,   761,     0,     0,   756,
       0,  1569,     0,     0, -1586,     0, -1586, -1586,     0,     0,
       0,  1975,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  2754,   761,     0,   758,     0,     0,     0,     0,
     761,     0,     0,     0,     0,   756,     0,     0,     0,     0,
       0,     0,     0, -1586,     0,     0, -1586, -1586, -1586,     0,
       0,     0,     0,   761,     0,     0,     0,     0,  2768,     0,
     963,   963,     0,     0,   759,     0,     0,   486,  2402,     0,
    2779,     0,     0,   514,     0,     0,  2153,     0,     0,     0,
    1376,  2153,     0,     0,  2153,     0,   514,     0,     0,   514,
       0,     0,   762,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  2819,  1314,   756,  1314,  1314,     0,
       0,     0,     0,     0,     0,     0,     0,   764,   762,   762,
       0,     0,  1120,  1127,     0,   759,     0,     0,     0,     0,
       0,     0,     0,   762,   514,     0,     0,     0,     0,  2389,
    2390,  2391,     0,   764,   764,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   514,   514,   758,     0,   764,     0,
       0,     0,     0,     0,     0,   617,     0,  1512,     0,   514,
       0,     0,     0,     0,     0,  1314,     0,   761,  1314,  1314,
    2434,   515,   617,     0,     0,  2819,     0,   765,     0,     0,
       0,     0,   758,     0,     0,   759,     0,     0,     0,     0,
       0,     0,     0,   514,     0,     0,     0,     0,   515,     0,
       0,     0,     0,     0,     0,     0,  2153,     0,     0,     0,
       0,   514,   756,   515,   515,   515,   515,   515,   515,   515,
     515,   515,   515,     0,     0,     0,     0,     0,   761,  2910,
       0,     0,     0,     0,   980,     0,   514,     0,     0,     0,
       0,     0,     0,  1043,   617,   762,     0,     0,   756,  1044,
       0,     0,     0,   758,     0,     0,  1056,     0,     0,     0,
     675,     0,     0,  2577,     0,     0,  1379,     0,     0,  1380,
     764,     0,     0,  1381,   617,  1057,     0,     0,     0,   756,
       0,     0,   756,     0,     0,     0,     0,     0,     0,     0,
    1379,     0,     0,  1380,     0,     0,     0,  1381,   761,     0,
       0,  1389,   486,     0,     0,     0,     0,     0, -1845,     0,
       0,  2967,     0,     0,     0,   514,   759,     0,     0,   514,
       0,     0,     0,     0,     0,  1389,  1058,  1120,     0,     0,
       0,     0, -1845,  1391,     0,     0,     0,   675,   675,   675,
       0,  2819,     0,     0,  1334,     0,     0,     0,     0,  1602,
       0,     0,   759,     0,     0,  1045,     0,  1391,     0,     0,
    1611,     0,  1612,     0,     0,     0,     0,     0,     0,   758,
    1512,  1618,  2639,  1345,     0,     0,     0,   762,  2631,  2632,
    2633,  2634,     0,     0,     0,   514,     0,  2657,  1619,     0,
       0,     0,     0,  1355,  1356,  1357,     0,  2910,  1364,     0,
       0,     0,   764,  2377,     0,   758,     0,     0,     0,     0,
       0,  1871,     0,     0,  1634,  1636,     0,  1059,     0,     0,
       0,  1421,     0,   759,     0,     0,     0,  2623,     0,   761,
       0,  1512,     0,     0, -1845,     0,   758,  2819,     0,   758,
       0,     0,     0,     0,   515,     0,     0,  1671,  1672,     0,
   -1845,  1685,  1686,  2779,   675, -1845,     0,     0, -1845,     0,
       0,     0,     0,     0,     0,   761,     0,     0,  1060,     0,
       0,  2702,     0,  1461, -1845,     0,  1061,  1475,  1480, -1845,
     762,     0,     0,     0,   756,     0,     0,     0,  1062,     0,
       0,     0, -1845,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   764,     0,     0,     0,  1046,
       0,     0,     0,     0,     0,     0, -1845,     0,     0,  1063,
       0,   762,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1120,     0,     0,     0,   761,     0,     0,   759,
       0,     0,     0,  1120,     0,     0,   764,  1400,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1064,     0,     0,     0,  1048,     0,  1065,  1120,     0,     0,
       0,  1400,     0,     0,     0,   759,     0,     0,     0,     0,
       0,     0,     0,     0,  1849,  1849,     0,     0,  1066,     0,
       0,     0,     0,     0,  1067,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   759,     0,  1068,   759,
       0,     0,     0,     0,     0,     0,   515,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  2790,
       0,     0,  2793,     0,     0,     0,     0,     0,     0, -1845,
    1314,   758,     0,     0,     0,     0,     0,     0,     0,     0,
    1314,     0,   761,  1314,  1043,     0,     0,     0,     0,     0,
    1044,     0,  1050, -1845,     0,     0,     0,  1056,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   515,     0,     0,
       0,     0,     0,     0,     0,     0,  1057,     0,   761,     0,
       0,     0,     0,     0,     0,     0,     0,   515,   515,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   515,     0,     0,     0,     0,     0,     0,   761,
       0,     0,   761,     0,  1999,  2001,     0,     0,  2853,     0,
       0,     0,     0,     0,     0,     0,     0,  1058,     0,     0,
       0, -1845,     0,     0,     0,  2874,   515,  1314,  1407,  1408,
    1409,  1410,  1411,  1412,     0,     0,     0,     0,     0,     0,
    1314,     0,     0,     0,  2793, -1845,  1045,     0,     0,     0,
       0,     0,  1407,  1408,  1409,  1410,  1411,  1412,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1668,     0,   515,
       0,     0,     0,     0,     0,     0,     0,  1687,     0,  1705,
       0,     0,  1716,  1719,  1724,  1727,     0,     0,     0,     0,
       0,   759,     0,     0,     0,     0,     0,  2924,     0,     0,
       0,     0,     0,     0,     0,     0,  1739,     0,  1059,     0,
       0,     0,  1743,  1744,  1745,  1746,  1747,  1748,  1749,     0,
     762,     0,     0,  1758,  1759,     0,     0,  2951,  1770,     0,
       0,     0,  1773,     0,     0,  1781,  1782,  1783,  1784,  1785,
    1786,  1787,  1788,  1789,     0,   764,  1790,     0,   515,     0,
       0,     0,  2790,   963,  1379,     0,  1120,  1380,     0,  1060,
       0,  1381,  1382,  1383,  1384,  1385,  1386,  1061,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1822,  1062,
       0,  1387,     0,     0,   762,     0,     0,     0,     0,  1389,
       0,     0,     0,     0,     0,     0,  1390,     0,     0,     0,
    1046,     0,   762,  2159,   761,     0,     0,  1356,  1357,   764,
    1063,     0,     0,     0,     0,     0,     0,     0,  2790,   -39,
       0,  1391,     0,  2172,  2172,     0,     0,   764,     0,   762,
       0,     0,     0,     0,     0,     0,   762,     0,     0,     0,
       1,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       2,  1912,     3,     4,   764,  1048,     0,  1065,     0,   762,
       0,   764,     0,     0,     0,     0,     0,     0,     5,     0,
       0,     0,     0,     0,     0,     0,     0,     6,     0,  1066,
       0,     0,     0,     0,   764,  1913,     0,     0,     0,     7,
    1120,     0,     0,  1943,  1944,     0,  1945,     0,     0,  1068,
       8,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     9,     0,    10,     0,     0,     0,     0,     0,
       0,     0,  1392,     0,     0,  1120,     0,     0,     0,     0,
       0,     0,    11,     0,     0,     0,     0,     0,  1393,     0,
       0,     0,     0,  1394,     0,     0,    12,     0,     0,     0,
       0,     0,     0,  1050,     0,     0,    13,     0,     0,     0,
       0,     0,    14,     0,     0,  1395,  1396,     0,     0,     0,
      15,     0,    16,    17,     0,     0,     0,     0,     0,  2295,
    1397,     0,     0,   762,     0,  1120,    18,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  2035,     0,     0,     0,
       0,  2041,     0,     0,     0,     0,     0,     0,   764,     0,
       0,     0,     0,     0,     0,    19,     0,     0,  1398,     0,
       0,  1399,     0,     0,     0,     0,     0,     0,     0,     0,
      20,     0,     0,     0,     0,  1400,     0,     0,  1401,     0,
    2056,     0,     0,     0,   762,     0,     0,     0,     0,     0,
       0,  1724,     0,  1724,  1724,     0,    21,     0,     0,     0,
       0,  2094,     0,     0,     0,  2097,     0,     0,  2099,   764,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1378,     0,     0,     0,     0,  1379,
       0,     0,  1380,     0,  1415,     0,  1381,  1382,  1383,  1384,
    1385,  1386,     0,     0,     0,  2117,     0,     0,  2120,     0,
    2122,     0,     0,     0,   762,     0,  1387,     0,     0,  1388,
       0,     0,     0,     0,  1389,     0,     0,  1402,     0,     0,
       0,  1390,     0,    22,     0,  1415,    23,     0,     0,   764,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1391,     0,     0,     0,
       0,  1461,     0,     0,     0,    24,     0,     0,     0,     0,
       0,     0,     0,     0,    25,     0,  1480,  1788,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    26,     0,
       0,     0,     0,     0,     0,    27,     0,     0,     0,    28,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    29,
    2199,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    30,     0,     0,     0,    31,  1314,     0,     0,  1403,
       0,     0,  1404,  1405,  1406,     0,  1407,  1408,  1409,  1410,
    1411,  1412,     0,     0,     0,   762,     0,     0,     0,  2048,
       0,  1415,     0,     0,     0,     0,     0,  1392,  1415,     0,
       0,    32,     0,     0,     0,     0,    33,     0,     0,  1120,
     764,     0,     0,  1393,     0,     0,     0,     0,  1394,     0,
      34,   762,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1395,  1396,     0,     0,    35,     0,   764,     0,     0,     0,
       0,     0,     0,     0,  2290,  1397,     0,     0,    36,     0,
       0,   -39,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   762,  1398,     0,     0,  1399,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  2316,     0,     0,
    1400,     0,     0,  1401,   517,     0,  2320,   764,     0,  2321,
       0,     0,  2323,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  2344,
    2345,     0,     0,  1822,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  2355,     0,     0,   518,     0,     0,
       0,     0,     0,  2362,     0,     0,  2365,     0,  2367,     0,
       0,     0,     0,   519,     0,     0,  2371,     0,     0,     0,
       0,     0,     0,     0,  2378,  2379,     0,     0,  2382,     0,
       0,     0,  1402,     0,     0,  1415,     0,     0,   762,     0,
       0,     0,     0,     0,     0,     0,  1415,  1314,     0,     0,
    1712,     0,  1314,     0,     0,  2421,  1415,  1415,  1415,     0,
       0,  1379,     0,   764,  1380,  1415,     0,   520,  1381,  1382,
    1383,  1384,  1385,  1386,   762,     0,     0,   521,     0,     0,
       0,  2435,     0,     0,     0,     0,     0,     0,  1387,   522,
       0,     0,     0,     0,   523,     0,  1389,     0,  2448,   764,
       0,  1634,  1636,  1390,     0,   762,     0,     0,   762,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   524,  1415,     0,     0,     0,     0,     0,  1391,     0,
     764,     0,     0,   764,  1403,     0,     0,  1404,  1405,  1406,
       0,  1407,  1408,  1409,  1410,  1411,  1412,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1415,     0,     0,     0,   525,     0,     0,     0,
     526,     0,     0,     0,     0,     0,  1415,     0,     0,     0,
       0,  1415,     0,     0,     0,     0,     0,     0,  1379,     0,
       0,  1380,     0,     0,     0,  1381,  1382,  1383,  1384,  1385,
    1386,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1387,  2600,     0,  2359,     0,
       0,     0,     0,  1389,     0,     0,     0,     0,     0,  1392,
    1390,     0,     0,   527,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1393,     0,   528,     0,     0,
    1394,     0,     0,     0,     0,  1391,     0,     0,     0,     0,
       0,     0,     0,     0,  2613,  2614,     0,     0,     0,  2615,
    1634,  1636,  1395,  1396,  2618,     0,     0,  2621,  2622,     0,
     529,  1314,  2626,   530,     0,     0,     0,  1397,     0,     0,
       0,   531,     0,     0,   532,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     762,     0,     0,   533,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1398,     0,   534,  1399,     0,
       0,     0,     0,     0,   535,   764,     0,   963,     0,     0,
       0,     0,  1400,   536,     0,  1401,     0,     0,     0,   537,
       0,     0,     0,     0,     0,     0,  1392,     0,     0,     0,
       0,     0,     0,     0,     0,  2690,     0,     0,     0,  1415,
       0,     0,  1393,     0,   538,     0,     0,  1394,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1415,     0,
       0,     0,  2709,     0,     0,     0,     0,     0,     0,  1395,
    1396,     0,     0,     0,     0,     0,  1415,     0,  1712,  1712,
       0,  2074,     0,  1712,  1397,     0,     0,  1415,     0,     0,
    1415,     0,     0,     0,     0,  1415,     0,     0,  1415,     0,
       0,     0,     0,     0,  1402,     0,     0,     0,     0,     0,
    1415,     0,     0,     0,  1415,  1415,  1415,  1415,  1415,  1415,
    1415,     0,  1398,     0,     0,  1399,  1712,  1712,     0,  1415,
    1415,     0,     0,     0,     0,     0,     0,     0,     0,  1400,
       0,  1415,  1401,     0,  1415,     0,     0,     0,     0,     0,
       0,     0,  1415,  1415,  1415,  1415,  1415,  1415,  1415,  1415,
    1415,  1415,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  2094,     0,     0,     0,     0,     0,     0,     0,     0,
    2763,  2764,  1379,  1415,  2765,  1380,     0,     0,     0,  1381,
    1382,  1383,  1384,  1385,  1386,     0,  1403,     0,     0,  1404,
    1405,  1406,     0,  1407,  1408,  1409,  1410,  1411,  1412,  1387,
       0,  1564,     0,  1314,     0,     0,     0,  1389,     0,     0,
       0,  1402,  2807,  2808,  1390,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  2823,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1391,
       0,     0,     0,     0,  2832,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1415,  1415,  1415,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  1403,     0,     0,  1404,  1405,  1406,     0,
    1407,  1408,  1409,  1410,  1411,  1412,     0,     0,     0,     0,
    1733,     0,     0,  2894,     0,  1379,     0,     0,  1380,     0,
    1392,     0,  1381,  1382,  1383,  1384,  1385,  1386,     0,     0,
    1364,     0,     0,     0,     0,     0,  1393,     0,     0,     0,
       0,  1394,  1387,     0,     0,   963,     0,     0,  2916,     0,
    1389,     0,     0,     0,     0,     0,     0,  1390,     0,     0,
       0,     0,  2935,  1395,  1396,     0,  1415,     0,     0,     0,
       0,     0,  1415,     0,     0,     0,     0,     0,  1397,     0,
       0,     0,  1391,     0,     0,  2074,  2074,  1415,     0,  1712,
    1712,  1712,  1712,  1712,     0,     0,  1712,  1712,  1712,  1712,
    1712,  1712,  1712,  1712,  1712,  1712,  2074,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1398,     0,     0,  1399,
       0,     0,     0,     0,     0,  1415,     0,     0,  1415,     0,
    1415,     0,     0,  1400,  2074,  2074,  1401,     0,  2807,     0,
       0,     0,  2979,     0,     0,     0,     0,     0,  1415,  1712,
    1712,  1415,     0,  1415,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  3008,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  1392,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1393,
       0,     0,     0,     0,  1394,  2807,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1402,  1395,  1396,     0,     0,
    1415,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1397,     0,     0,     0,     0,     0,     0,     0,     0,
    1379,  3056,  3056,  1380,     0,     0,     0,  1381,  1382,  1383,
    1384,  1385,  1386,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1387,     0,  1398,
       0,     0,  1399,     0,  3056,  1389,     0,     0,     0,     0,
       0,     0,  1390,     0,     0,     0,  1400,     0,     0,  1401,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1391,     0,     0,
       0,  1415,     0,     0,     0,  3056,     0,  1403,     0,     0,
    1404,  1405,  1406,     0,  1407,  1408,  1409,  1410,  1411,  1412,
       0,     0,     0,     0,  1733,     0,     0,  1415,     0,     0,
       0,  1415,  1415,     0,  1415,     0,     0,  2074,  2074,  2074,
    2074,  2074,     0,     0,     0,  2074,  2074,  2074,  2074,  2074,
    2074,  2074,  2074,  2074,  2074,  1415,  1415,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1415,     0,  1402,     0,
       0,     0,     0,  1415,     0,     0,  1415,     0,  1415,     0,
       0,     0,  1415,     0,     0,  2074,  2074,     0,     0,  1415,
    1415,     0,     0,  1415,  1379,     0,     0,  1380,  1392,     0,
       0,  1381,  1382,  1383,  1384,  1385,  1386,     0,     0,     0,
       0,     0,     0,     0,  1393,     0,     0,     0,     0,  1394,
       0,  1387,     0,     0,     0,     0,     0,     0,     0,  1389,
       0,     0,  1415,     0,     0,     0,  1390,     0,     0,     0,
       0,  1395,  1396,     0,     0,     0,  1415,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1397,     0,     0,  1415,
       0,  1391,     0,     0,     0,     0,     0,     0,     0,     0,
    1403,     0,     0,  1404,  1405,  1406,     0,  1407,  1408,  1409,
    1410,  1411,  1412,  1712,     0,     0,     0,  2101,     0, 