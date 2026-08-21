.class public final Lcom/tramini/plugin/a/e/h;
.super Lcom/tramini/plugin/a/e/f;


# direct methods
.method public constructor <init>()V
    .locals 0

    .line 28
    invoke-direct {p0}, Lcom/tramini/plugin/a/e/f;-><init>()V

    return-void
.end method

.method private static a(Ljava/lang/Object;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Lorg/json/JSONObject;Lorg/json/JSONArray;)Lcom/tramini/plugin/a/c/a;
    .locals 3

    const/4 v0, 0x0

    .line 1217
    :try_start_0
    new-instance v1, Ljava/lang/StringBuffer;

    invoke-direct {v1}, Ljava/lang/StringBuffer;-><init>()V

    .line 1218
    new-instance v2, Lcom/tramini/plugin/a/e/h$1;

    invoke-direct {v2, p5, p2}, Lcom/tramini/plugin/a/e/h$1;-><init>(Ljava/lang/String;Ljava/lang/String;)V

    invoke-static {p0, p1, v1, v2}, Lcom/tramini/plugin/a/e/h;->a(Ljava/lang/Object;Ljava/lang/String;Ljava/lang/StringBuffer;Lcom/tramini/plugin/a/e/f$c;)Ljava/lang/Object;

    move-result-object p0

    if-nez p0, :cond_0

    move-object p0, v0

    goto :goto_0

    .line 1251
    :cond_0
    new-instance p2, Ljava/lang/StringBuffer;

    invoke-direct {p2}, Ljava/lang/StringBuffer;-><init>()V

    .line 1252
    new-instance v1, Lcom/tramini/plugin/a/e/h$2;

    invoke-direct {v1, p3}, Lcom/tramini/plugin/a/e/h$2;-><init>(Ljava/lang/String;)V

    invoke-static {p0, p1, p2, v1}, Lcom/tramini/plugin/a/e/h;->a(Ljava/lang/Object;Ljava/lang/String;Ljava/lang/StringBuffer;Lcom/tramini/plugin/a/e/f$c;)Ljava/lang/Object;

    move-result-object p0

    :goto_0
    if-nez p0, :cond_1

    return-object v0

    .line 1286
    :cond_1
    new-instance p1, Ljava/lang/StringBuffer;

    invoke-direct {p1}, Ljava/lang/StringBuffer;-><init>()V

    .line 1288
    new-instance p2, Lcom/tramini/plugin/a/e/h$3;

    invoke-direct {p2, p4, p6}, Lcom/tramini/plugin/a/e/h$3;-><init>(Ljava/lang/String;Ljava/lang/String;)V

    invoke-static {p0, p4, p1, p2}, Lcom/tramini/plugin/a/e/h;->a(Ljava/lang/Object;Ljava/lang/String;Ljava/lang/StringBuffer;Lcom/tramini/plugin/a/e/f$c;)Ljava/lang/Object;

    move-result-object p2

    if-eqz p2, :cond_2

    goto :goto_1

    .line 1313
    :cond_2
    new-instance p2, Ljava/lang/StringBuffer;

    invoke-direct {p2}, Ljava/lang/StringBuffer;-><init>()V

    .line 1315
    new-instance p3, Lcom/tramini/plugin/a/e/h$4;

    invoke-direct {p3, p5, p4, p1, p6}, Lcom/tramini/plugin/a/e/h$4;-><init>(Ljava/lang/String;Ljava/lang/String;Ljava/lang/StringBuffer;Ljava/lang/String;)V

    invoke-static {p0, p4, p2, p3}, Lcom/tramini/plugin/a/e/h;->a(Ljava/lang/Object;Ljava/lang/String;Ljava/lang/StringBuffer;Lcom/tramini/plugin/a/e/f$c;)Ljava/lang/Object;

    move-result-object p2

    :goto_1
    if-nez p2, :cond_3

    return-object v0

    .line 83
    :cond_3
    invoke-static {p2, p7, p8, p9, p10}, Lcom/tramini/plugin/a/e/h;->a(Ljava/lang/Object;Ljava/lang/String;Ljava/lang/String;Lorg/json/JSONObject;Lorg/json/JSONArray;)Lcom/tramini/plugin/a/c/a;

    move-result-object p0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return-object p0

    :catchall_0
    move-exception p0

    .line 85
    invoke-virtual {p0}, Ljava/lang/Throwable;->printStackTrace()V

    return-object v0
.end method

.method private static a(Ljava/lang/Object;Ljava/lang/String;Ljava/lang/String;Lorg/json/JSONObject;Lorg/json/JSONArray;)Lcom/tramini/plugin/a/c/a;
    .locals 18

    const/4 v0, 0x0

    :try_start_0
    const-string v1, ":"

    move-object/from16 v2, p2

    .line 93
    invoke-virtual {v2, v1}, Ljava/lang/String;->split(Ljava/lang/String;)[Ljava/lang/String;

    move-result-object v1

    .line 94
    array-length v2, v1
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_3

    const/4 v3, 0x2

    if-eq v2, v3, :cond_0

    return-object v0

    :cond_0
    const/4 v2, 0x0

    .line 100
    :try_start_1
    invoke-static/range {p0 .. p1}, Lcom/tramini/plugin/a/e/h;->b(Ljava/lang/Object;Ljava/lang/String;)Ljava/lang/Object;

    move-result-object v3

    .line 102
    check-cast v3, Ljava/util/List;
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_0
    .catchall {:try_start_1 .. :try_end_1} :catchall_3

    move-object v5, v0

    move v4, v2

    .line 103
    :goto_0
    :try_start_2
    invoke-interface {v3}, Ljava/util/List;->size()I

    move-result v6

    if-ge v4, v6, :cond_1

    .line 104
    invoke-interface {v3, v4}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v5
    :try_end_2
    .catch Ljava/lang/Exception; {:try_start_2 .. :try_end_2} :catch_1
    .catchall {:try_start_2 .. :try_end_2} :catchall_3

    if-nez v5, :cond_1

    add-int/lit8 v4, v4, 0x1

    goto :goto_0

    :catch_0
    move-object v5, v0

    .line 113
    :catch_1
    :cond_1
    :try_start_3
    aget-object v3, v1, v2

    invoke-static {v5, v3}, Lcom/tramini/plugin/a/e/h;->b(Ljava/lang/Object;Ljava/lang/String;)Ljava/lang/Object;

    move-result-object v3

    const/4 v4, 0x1

    .line 114
    aget-object v1, v1, v4

    invoke-static {v3, v1}, Lcom/tramini/plugin/a/e/h;->a(Ljava/lang/Object;Ljava/lang/String;)Ljava/lang/Object;

    move-result-object v1

    .line 117
    new-instance v3, Lorg/json/JSONObject;

    invoke-direct {v3}, Lorg/json/JSONObject;-><init>()V

    move v6, v2

    .line 118
    :goto_1
    invoke-virtual/range {p4 .. p4}, Lorg/json/JSONArray;->length()I

    move-result v7

    if-ge v6, v7, :cond_9

    move-object/from16 v7, p4

    .line 119
    invoke-virtual {v7, v6}, Lorg/json/JSONArray;->optString(I)Ljava/lang/String;

    move-result-object v8

    move-object/from16 v9, p3

    .line 120
    invoke-virtual {v9, v8}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v10
    :try_end_3
    .catchall {:try_start_3 .. :try_end_3} :catchall_3

    .line 122
    :try_start_4
    invoke-static {v10}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v11
    :try_end_4
    .catchall {:try_start_4 .. :try_end_4} :catchall_0

    if-eqz v11, :cond_3

    :catchall_0
    move-object/from16 v11, p0

    :catchall_1
    :cond_2
    :goto_2
    move-object/from16 v17, v1

    goto/16 :goto_6

    :cond_3
    move-object/from16 v11, p0

    .line 126
    :try_start_5
    invoke-static {v11, v10}, Lcom/tramini/plugin/a/e/h;->b(Ljava/lang/Object;Ljava/lang/String;)Ljava/lang/Object;

    move-result-object v12

    check-cast v12, Ljava/lang/String;

    .line 127
    invoke-static {v12}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v13

    if-nez v13, :cond_4

    .line 128
    invoke-virtual {v3, v8, v12}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    goto :goto_2

    .line 130
    :cond_4
    invoke-static {v5, v10}, Lcom/tramini/plugin/a/e/h;->b(Ljava/lang/Object;Ljava/lang/String;)Ljava/lang/Object;

    move-result-object v12

    check-cast v12, Ljava/lang/String;

    .line 131
    invoke-static {v12}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v13

    if-nez v13, :cond_5

    .line 132
    invoke-virtual {v3, v8, v12}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    goto :goto_2

    .line 134
    :cond_5
    instance-of v12, v1, Ljava/lang/String;

    if-eqz v12, :cond_2

    .line 136
    invoke-virtual {v1}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object v12

    .line 137
    new-instance v13, Lorg/json/JSONArray;

    invoke-direct {v13, v10}, Lorg/json/JSONArray;-><init>(Ljava/lang/String;)V

    move v10, v2

    move v14, v10

    .line 139
    :goto_3
    invoke-virtual {v13}, Lorg/json/JSONArray;->length()I

    move-result v15

    if-ge v10, v15, :cond_2

    .line 140
    invoke-virtual {v13, v10}, Lorg/json/JSONArray;->optString(I)Ljava/lang/String;

    move-result-object v15

    invoke-static {v15}, Ljava/util/regex/Pattern;->compile(Ljava/lang/String;)Ljava/util/regex/Pattern;

    move-result-object v15

    .line 141
    invoke-virtual {v15, v12}, Ljava/util/regex/Pattern;->matcher(Ljava/lang/CharSequence;)Ljava/util/regex/Matcher;

    move-result-object v15

    .line 143
    :goto_4
    invoke-virtual {v15}, Ljava/util/regex/Matcher;->find()Z

    move-result v16

    if-eqz v16, :cond_7

    .line 144
    invoke-virtual {v15}, Ljava/util/regex/Matcher;->group()Ljava/lang/String;

    move-result-object v2

    const-string v4, ">"

    .line 146
    invoke-virtual {v2, v4}, Ljava/lang/String;->indexOf(Ljava/lang/String;)I

    move-result v4

    const-string v0, "<"

    .line 147
    invoke-virtual {v2, v0}, Ljava/lang/String;->indexOf(Ljava/lang/String;)I

    move-result v0
    :try_end_5
    .catchall {:try_start_5 .. :try_end_5} :catchall_1

    move-object/from16 v17, v1

    const/4 v1, -0x1

    if-eq v4, v1, :cond_6

    if-eq v0, v1, :cond_6

    add-int/lit8 v4, v4, 0x1

    .line 153
    :try_start_6
    invoke-virtual {v2, v4, v0}, Ljava/lang/String;->substring(II)Ljava/lang/String;

    move-result-object v0

    .line 154
    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-nez v1, :cond_6

    .line 155
    invoke-virtual {v3, v8, v0}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;
    :try_end_6
    .catchall {:try_start_6 .. :try_end_6} :catchall_2

    const/4 v14, 0x1

    goto :goto_5

    :cond_6
    move-object/from16 v1, v17

    const/4 v0, 0x0

    const/4 v2, 0x0

    const/4 v4, 0x1

    goto :goto_4

    :cond_7
    move-object/from16 v17, v1

    :goto_5
    if-nez v14, :cond_8

    add-int/lit8 v10, v10, 0x1

    move-object/from16 v1, v17

    const/4 v0, 0x0

    const/4 v2, 0x0

    const/4 v4, 0x1

    goto :goto_3

    :catchall_2
    :cond_8
    :goto_6
    add-int/lit8 v6, v6, 0x1

    move-object/from16 v1, v17

    const/4 v0, 0x0

    const/4 v2, 0x0

    const/4 v4, 0x1

    goto/16 :goto_1

    .line 173
    :cond_9
    :try_start_7
    invoke-virtual {v3}, Lorg/json/JSONObject;->length()I

    move-result v0

    if-lez v0, :cond_a

    .line 174
    new-instance v0, Lcom/tramini/plugin/a/c/a;

    invoke-direct {v0}, Lcom/tramini/plugin/a/c/a;-><init>()V

    .line 175
    iput-object v3, v0, Lcom/tramini/plugin/a/c/a;->a:Lorg/json/JSONObject;
    :try_end_7
    .catchall {:try_start_7 .. :try_end_7} :catchall_3

    return-object v0

    :catchall_3
    :cond_a
    const/4 v0, 0x0

    return-object v0
.end method

.method public static a(Lorg/json/JSONObject;Lcom/tramini/plugin/a/c/c;Ljava/lang/String;)Lcom/tramini/plugin/a/c/a;
    .locals 26

    move-object/from16 v11, p0

    const-string v0, "pre1"

    .line 31
    invoke-virtual {v11, v0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v12

    const-string v0, "pre2"

    .line 32
    invoke-virtual {v11, v0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v13

    const-string v0, "clna"

    .line 33
    invoke-virtual {v11, v0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    const-string v1, "mena"

    .line 34
    invoke-virtual {v11, v1}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v14

    const-string v1, "adaptna"

    .line 35
    invoke-virtual {v11, v1}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v15

    const-string v1, "ctrlna"

    .line 36
    invoke-virtual {v11, v1}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v16

    const-string v1, "in_na"

    .line 37
    invoke-virtual {v11, v1}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    const-string v2, "objna_arr"

    .line 38
    invoke-virtual {v11, v2}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v17

    const-string v2, "obj2na"

    .line 39
    invoke-virtual {v11, v2}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v18

    const-string v2, "html"

    .line 40
    invoke-virtual {v11, v2}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v19

    move-object/from16 v2, p2

    .line 42
    invoke-static {v1, v2}, Lcom/tramini/plugin/a/e/h;->d(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/Object;

    move-result-object v1

    .line 44
    instance-of v2, v1, Ljava/lang/String;

    const/16 v20, 0x0

    if-eqz v2, :cond_0

    .line 45
    check-cast v1, Ljava/lang/String;

    move-object/from16 v21, v1

    goto :goto_0

    :cond_0
    move-object/from16 v21, v20

    .line 47
    :goto_0
    invoke-static/range {v21 .. v21}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-eqz v1, :cond_1

    return-object v20

    :cond_1
    const-string v1, ","

    .line 51
    invoke-virtual {v0, v1}, Ljava/lang/String;->split(Ljava/lang/String;)[Ljava/lang/String;

    move-result-object v10

    .line 53
    array-length v9, v10

    const/4 v0, 0x0

    move v8, v0

    :goto_1
    if-ge v8, v9, :cond_4

    aget-object v0, v10, v8

    .line 54
    invoke-static {v0, v14}, Lcom/tramini/plugin/a/e/h;->b(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/Object;

    move-result-object v0

    if-eqz v0, :cond_2

    move-object/from16 v7, p1

    .line 56
    iget-object v6, v7, Lcom/tramini/plugin/a/c/c;->e:Lorg/json/JSONArray;

    move-object v1, v12

    move-object/from16 v2, v16

    move-object v3, v15

    move-object v4, v13

    move-object/from16 v5, v21

    move-object/from16 v22, v6

    move-object/from16 v6, v17

    move-object/from16 v7, v18

    move/from16 v23, v8

    move-object/from16 v8, v19

    move/from16 v24, v9

    move-object/from16 v9, p0

    move-object/from16 v25, v10

    move-object/from16 v10, v22

    invoke-static/range {v0 .. v10}, Lcom/tramini/plugin/a/e/h;->a(Ljava/lang/Object;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Lorg/json/JSONObject;Lorg/json/JSONArray;)Lcom/tramini/plugin/a/c/a;

    move-result-object v0

    if-eqz v0, :cond_3

    return-object v0

    :cond_2
    move/from16 v23, v8

    move/from16 v24, v9

    move-object/from16 v25, v10

    :cond_3
    add-int/lit8 v8, v23, 0x1

    move/from16 v9, v24

    move-object/from16 v10, v25

    goto :goto_1

    :cond_4
    return-object v20
.end method

.method private static a(Ljava/lang/Object;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Ljava/lang/Object;
    .locals 3

    .line 286
    new-instance v0, Ljava/lang/StringBuffer;

    invoke-direct {v0}, Ljava/lang/StringBuffer;-><init>()V

    .line 288
    new-instance v1, Lcom/tramini/plugin/a/e/h$3;

    invoke-direct {v1, p1, p3}, Lcom/tramini/plugin/a/e/h$3;-><init>(Ljava/lang/String;Ljava/lang/String;)V

    invoke-static {p0, p1, v0, v1}, Lcom/tramini/plugin/a/e/h;->a(Ljava/lang/Object;Ljava/lang/String;Ljava/lang/StringBuffer;Lcom/tramini/plugin/a/e/f$c;)Ljava/lang/Object;

    move-result-object v1

    if-eqz v1, :cond_0

    return-object v1

    .line 313
    :cond_0
    new-instance v1, Ljava/lang/StringBuffer;

    invoke-direct {v1}, Ljava/lang/StringBuffer;-><init>()V

    .line 315
    new-instance v2, Lcom/tramini/plugin/a/e/h$4;

    invoke-direct {v2, p2, p1, v0, p3}, Lcom/tramini/plugin/a/e/h$4;-><init>(Ljava/lang/String;Ljava/lang/String;Ljava/lang/StringBuffer;Ljava/lang/String;)V

    invoke-static {p0, p1, v1, v2}, Lcom/tramini/plugin/a/e/h;->a(Ljava/lang/Object;Ljava/lang/String;Ljava/lang/StringBuffer;Lcom/tramini/plugin/a/e/f$c;)Ljava/lang/Object;

    move-result-object p0

    return-object p0
.end method

.method private static a(Ljava/lang/Object;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Ljava/lang/Object;
    .locals 2

    .line 217
    new-instance v0, Ljava/lang/StringBuffer;

    invoke-direct {v0}, Ljava/lang/StringBuffer;-><init>()V

    .line 218
    new-instance v1, Lcom/tramini/plugin/a/e/h$1;

    invoke-direct {v1, p2, p3}, Lcom/tramini/plugin/a/e/h$1;-><init>(Ljava/lang/String;Ljava/lang/String;)V

    invoke-static {p0, p1, v0, v1}, Lcom/tramini/plugin/a/e/h;->a(Ljava/lang/Object;Ljava/lang/String;Ljava/lang/StringBuffer;Lcom/tramini/plugin/a/e/f$c;)Ljava/lang/Object;

    move-result-object p0

    if-nez p0, :cond_0

    const/4 p0, 0x0

    return-object p0

    .line 251
    :cond_0
    new-instance p2, Ljava/lang/StringBuffer;

    invoke-direct {p2}, Ljava/lang/StringBuffer;-><init>()V

    .line 252
    new-instance p3, Lcom/tramini/plugin/a/e/h$2;

    invoke-direct {p3, p4}, Lcom/tramini/plugin/a/e/h$2;-><init>(Ljava/lang/String;)V

    invoke-static {p0, p1, p2, p3}, Lcom/tramini/plugin/a/e/h;->a(Ljava/lang/Object;Ljava/lang/String;Ljava/lang/StringBuffer;Lcom/tramini/plugin/a/e/f$c;)Ljava/lang/Object;

    move-result-object p0

    return-object p0
.end method

.method private static d(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/Object;
    .locals 6

    const/4 v0, 0x0

    .line 186
    :try_start_0
    invoke-static {p0}, Ljava/lang/Class;->forName(Ljava/lang/String;)Ljava/lang/Class;

    move-result-object p0

    const-string v1, "getInstance"

    const/4 v2, 0x0

    new-array v3, v2, [Ljava/lang/Class;

    .line 187
    invoke-virtual {p0, v1, v3}, Ljava/lang/Class;->getMethod(Ljava/lang/String;[Ljava/lang/Class;)Ljava/lang/reflect/Method;

    move-result-object p0

    new-array v1, v2, [Ljava/lang/Object;

    .line 188
    invoke-virtual {p0, v0, v1}, Ljava/lang/reflect/Method;->invoke(Ljava/lang/Object;[Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p0

    .line 190
    invoke-virtual {p0}, Ljava/lang/Object;->getClass()Ljava/lang/Class;

    move-result-object v1

    invoke-virtual {v1}, Ljava/lang/Class;->getDeclaredFields()[Ljava/lang/reflect/Field;

    move-result-object v1

    if-eqz v1, :cond_1

    .line 193
    array-length v3, v1

    :goto_0
    if-ge v2, v3, :cond_1

    aget-object v4, v1, v2

    const/4 v5, 0x1

    .line 194
    invoke-virtual {v4, v5}, Ljava/lang/reflect/Field;->setAccessible(Z)V

    .line 195
    invoke-virtual {v4, p0}, Ljava/lang/reflect/Field;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v5

    .line 196
    instance-of v5, v5, Ljava/util/Map;

    if-eqz v5, :cond_0

    .line 197
    invoke-virtual {v4, p0}, Ljava/lang/reflect/Field;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v4

    check-cast v4, Ljava/util/Map;

    if-eqz v4, :cond_0

    .line 198
    invoke-interface {v4, p1}, Ljava/util/Map;->containsKey(Ljava/lang/Object;)Z

    move-result v5

    if-eqz v5, :cond_0

    .line 201
    invoke-interface {v4, p1}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return-object p0

    :cond_0
    add-int/lit8 v2, v2, 0x1

    goto :goto_0

    :catchall_0
    :cond_1
    return-object v0
.end method
