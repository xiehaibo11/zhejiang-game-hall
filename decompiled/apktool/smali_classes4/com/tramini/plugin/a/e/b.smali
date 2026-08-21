.class public final Lcom/tramini/plugin/a/e/b;
.super Lcom/tramini/plugin/a/e/f;


# direct methods
.method public constructor <init>()V
    .locals 0

    .line 26
    invoke-direct {p0}, Lcom/tramini/plugin/a/e/f;-><init>()V

    return-void
.end method

.method private static a(Ljava/lang/Object;Ljava/lang/String;Ljava/lang/String;JJLorg/json/JSONObject;Ljava/lang/String;Lorg/json/JSONArray;Ljava/lang/String;)Lcom/tramini/plugin/a/c/a;
    .locals 33

    move-object/from16 v0, p0

    move-object/from16 v12, p7

    move-object/from16 v13, p9

    move-object/from16 v14, p10

    const-string v15, "2"

    .line 69
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    move-object/from16 v2, p1

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual/range {p0 .. p0}, Ljava/lang/Object;->getClass()Ljava/lang/Class;

    move-result-object v2

    invoke-virtual {v2}, Ljava/lang/Class;->getName()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v2, ","

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v11

    .line 70
    new-instance v10, Lorg/json/JSONObject;

    invoke-direct {v10}, Lorg/json/JSONObject;-><init>()V

    const/16 v16, 0x0

    .line 78
    :try_start_0
    invoke-virtual {v14, v15}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v1
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_5

    const-string v9, "i_lr"

    const-string v8, "all"

    const-string v6, "pkg"

    const/4 v7, 0x0

    const-string v4, ""

    if-eqz v1, :cond_9

    .line 79
    :try_start_1
    instance-of v1, v0, Landroid/view/ViewGroup;

    if-eqz v1, :cond_7

    .line 80
    move-object v1, v0

    check-cast v1, Landroid/view/ViewGroup;

    invoke-virtual {v1}, Landroid/view/ViewGroup;->getChildCount()I

    move-result v1

    if-lez v1, :cond_7

    .line 81
    check-cast v0, Landroid/view/ViewGroup;

    invoke-virtual {v0, v7}, Landroid/view/ViewGroup;->getChildAt(I)Landroid/view/View;

    move-result-object v0

    .line 82
    instance-of v1, v0, Landroid/webkit/WebView;

    if-eqz v1, :cond_4

    .line 83
    check-cast v0, Landroid/webkit/WebView;

    move-wide/from16 v2, p3

    move-object/from16 v17, v15

    move-wide/from16 v14, p5

    .line 84
    invoke-static {v0, v2, v3, v14, v15}, Lcom/tramini/plugin/a/e/b;->a(Landroid/webkit/WebView;JJ)Ljava/lang/String;

    move-result-object v0

    .line 85
    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-nez v1, :cond_5

    move-object v1, v4

    move-object v2, v1

    move-object v3, v2

    .line 88
    :goto_0
    invoke-virtual/range {p9 .. p9}, Lorg/json/JSONArray;->length()I

    move-result v5

    if-ge v7, v5, :cond_6

    .line 89
    invoke-virtual {v13, v7}, Lorg/json/JSONArray;->optString(I)Ljava/lang/String;

    move-result-object v5

    .line 90
    invoke-virtual {v12, v5}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v11

    .line 92
    invoke-static {v11, v6}, Landroid/text/TextUtils;->equals(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Z

    move-result v14

    if-eqz v14, :cond_0

    move-object v2, v5

    goto :goto_1

    .line 97
    :cond_0
    invoke-static {v11, v8}, Landroid/text/TextUtils;->equals(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Z

    move-result v14
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_5

    if-eqz v14, :cond_1

    move-object v3, v5

    goto :goto_1

    .line 103
    :cond_1
    :try_start_2
    invoke-static {v11}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v14

    if-nez v14, :cond_3

    .line 104
    invoke-static {v11, v0}, Lcom/tramini/plugin/a/e/b;->d(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v11

    .line 105
    invoke-static {v11}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v14

    if-nez v14, :cond_2

    .line 106
    invoke-virtual {v10, v5, v11}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 108
    :cond_2
    invoke-static {v5, v9}, Landroid/text/TextUtils;->equals(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Z

    move-result v5
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_0

    if-eqz v5, :cond_3

    move-object v1, v11

    :catchall_0
    :cond_3
    :goto_1
    add-int/lit8 v7, v7, 0x1

    goto :goto_0

    :cond_4
    move-object/from16 v17, v15

    :cond_5
    move-object v0, v4

    move-object v1, v0

    move-object v2, v1

    move-object v3, v2

    :cond_6
    move-object v6, v3

    move-object v5, v4

    move-object/from16 v27, v10

    move-object v3, v0

    move-object v0, v5

    move-object v4, v1

    goto/16 :goto_9

    :cond_7
    move-object/from16 v17, v15

    :cond_8
    move-object v0, v4

    move-object/from16 v27, v10

    goto/16 :goto_8

    :cond_9
    move-wide/from16 v2, p3

    move-object/from16 v17, v15

    move-wide/from16 v14, p5

    .line 121
    :try_start_3
    new-instance v1, Ljava/util/ArrayList;

    invoke-direct {v1}, Ljava/util/ArrayList;-><init>()V

    .line 122
    invoke-virtual/range {p0 .. p0}, Ljava/lang/Object;->getClass()Ljava/lang/Class;

    move-result-object v5

    invoke-static {v5, v1}, Lcom/tramini/plugin/a/e/b;->a(Ljava/lang/Class;Ljava/util/List;)V

    .line 123
    invoke-interface {v1}, Ljava/util/List;->size()I

    move-result v5

    new-array v14, v5, [Ljava/lang/reflect/Field;

    .line 124
    invoke-interface {v1, v14}, Ljava/util/List;->toArray([Ljava/lang/Object;)[Ljava/lang/Object;

    if-eqz v5, :cond_8

    move-object/from16 v18, v4

    move-object/from16 v19, v18

    move-object/from16 v20, v19

    move-object/from16 v21, v20

    move v15, v7

    move-object/from16 v1, v16

    :goto_2
    if-ge v15, v5, :cond_12

    .line 126
    aget-object v1, v14, v15

    const/4 v7, 0x1

    .line 127
    invoke-virtual {v1, v7}, Ljava/lang/reflect/Field;->setAccessible(Z)V

    .line 128
    invoke-virtual {v1, v0}, Ljava/lang/reflect/Field;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v1

    move-object/from16 v7, p2

    .line 129
    invoke-static {v1, v7}, Lcom/tramini/plugin/a/e/b;->c(Ljava/lang/Object;Ljava/lang/String;)Lorg/json/JSONObject;

    move-result-object v0
    :try_end_3
    .catchall {:try_start_3 .. :try_end_3} :catchall_5

    if-eqz v0, :cond_10

    :try_start_4
    const-string v2, "xml"

    .line 132
    invoke-virtual {v0, v2}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    .line 133
    invoke-static {v1}, Lcom/tramini/plugin/a/e/b;->b(Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v18

    const-string v3, "html"

    .line 134
    invoke-virtual {v0, v3}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v3

    .line 136
    invoke-static/range {p8 .. p8}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v22
    :try_end_4
    .catchall {:try_start_4 .. :try_end_4} :catchall_3

    if-nez v22, :cond_a

    move-object/from16 v29, v14

    move-object/from16 v14, p8

    .line 137
    :try_start_5
    invoke-virtual {v0, v14}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v22
    :try_end_5
    .catchall {:try_start_5 .. :try_end_5} :catchall_1

    move-object/from16 v30, v22

    goto :goto_3

    :catchall_1
    move-object/from16 v31, v4

    move/from16 v32, v5

    goto/16 :goto_6

    :cond_a
    move-object/from16 v29, v14

    move-object/from16 v14, p8

    move-object/from16 v30, v4

    :goto_3
    move-object/from16 v31, v4

    move/from16 v32, v5

    const/4 v4, 0x0

    .line 139
    :goto_4
    :try_start_6
    invoke-virtual/range {p9 .. p9}, Lorg/json/JSONArray;->length()I

    move-result v5

    if-ge v4, v5, :cond_f

    .line 140
    invoke-virtual {v13, v4}, Lorg/json/JSONArray;->optString(I)Ljava/lang/String;

    move-result-object v5

    .line 141
    invoke-virtual {v12, v5}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v7

    .line 143
    invoke-static {v7, v6}, Landroid/text/TextUtils;->equals(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Z

    move-result v22

    if-eqz v22, :cond_b

    move-object/from16 v20, v5

    goto :goto_5

    .line 148
    :cond_b
    invoke-static {v7, v8}, Landroid/text/TextUtils;->equals(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Z

    move-result v22
    :try_end_6
    .catchall {:try_start_6 .. :try_end_6} :catchall_4

    if-eqz v22, :cond_c

    move-object/from16 v21, v5

    goto :goto_5

    .line 154
    :cond_c
    :try_start_7
    invoke-static {v7}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v22

    if-nez v22, :cond_e

    move-object/from16 v22, v7

    move-object/from16 v23, v1

    move-object/from16 v24, v0

    move-object/from16 v25, v2

    move-object/from16 v26, v18

    move-object/from16 v27, v3

    move-object/from16 v28, v30

    .line 155
    invoke-static/range {v22 .. v28}, Lcom/tramini/plugin/a/e/b;->a(Ljava/lang/String;Ljava/lang/Object;Lorg/json/JSONObject;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v7

    .line 156
    invoke-static {v7}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v22

    if-nez v22, :cond_d

    .line 157
    invoke-virtual {v10, v5, v7}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 159
    :cond_d
    invoke-static {v5, v9}, Landroid/text/TextUtils;->equals(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Z

    move-result v5
    :try_end_7
    .catchall {:try_start_7 .. :try_end_7} :catchall_2

    if-eqz v5, :cond_e

    move-object/from16 v19, v7

    :catchall_2
    :cond_e
    :goto_5
    add-int/lit8 v4, v4, 0x1

    move-object/from16 v7, p2

    goto :goto_4

    :catchall_3
    move-object/from16 v31, v4

    move/from16 v32, v5

    move-object/from16 v29, v14

    move-object/from16 v14, p8

    :catchall_4
    :cond_f
    :goto_6
    move-object/from16 p1, v0

    move-object/from16 v23, v6

    move-object/from16 v25, v8

    move-object/from16 v26, v9

    move-object/from16 v27, v10

    move-object/from16 v28, v11

    move-object/from16 v0, v31

    move/from16 v22, v32

    const/16 v24, 0x0

    goto :goto_7

    :cond_10
    move-object/from16 v31, v4

    move/from16 v32, v5

    move-object/from16 v29, v14

    move-object/from16 v14, p8

    if-eqz v1, :cond_f

    .line 170
    :try_start_8
    invoke-virtual {v1}, Ljava/lang/Object;->getClass()Ljava/lang/Class;

    move-result-object v2

    invoke-virtual {v2}, Ljava/lang/Class;->getName()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v11, v2}, Ljava/lang/String;->contains(Ljava/lang/CharSequence;)Z

    move-result v2

    if-nez v2, :cond_f

    move-object v2, v11

    move-object/from16 v3, p2

    move-object/from16 v7, v31

    move/from16 v22, v32

    move-wide/from16 v4, p3

    move-object/from16 p1, v0

    move-object/from16 v23, v6

    move-object v0, v7

    const/16 v24, 0x0

    move-wide/from16 v6, p5

    move-object/from16 v25, v8

    move-object/from16 v8, p7

    move-object/from16 v26, v9

    move-object/from16 v9, p8

    move-object/from16 v27, v10

    move-object/from16 v10, p9

    move-object/from16 v28, v11

    move-object/from16 v11, p10

    .line 171
    invoke-static/range {v1 .. v11}, Lcom/tramini/plugin/a/e/b;->a(Ljava/lang/Object;Ljava/lang/String;Ljava/lang/String;JJLorg/json/JSONObject;Ljava/lang/String;Lorg/json/JSONArray;Ljava/lang/String;)Lcom/tramini/plugin/a/c/a;

    move-result-object v1

    if-eqz v1, :cond_11

    .line 172
    iget-object v2, v1, Lcom/tramini/plugin/a/c/a;->a:Lorg/json/JSONObject;

    if-eqz v2, :cond_11

    return-object v1

    :cond_11
    :goto_7
    add-int/lit8 v15, v15, 0x1

    move-object/from16 v1, p1

    move-wide/from16 v2, p3

    move-object v4, v0

    move/from16 v5, v22

    move-object/from16 v6, v23

    move/from16 v7, v24

    move-object/from16 v8, v25

    move-object/from16 v9, v26

    move-object/from16 v10, v27

    move-object/from16 v11, v28

    move-object/from16 v14, v29

    move-object/from16 v0, p0

    goto/16 :goto_2

    :cond_12
    move-object v0, v4

    move-object/from16 v27, v10

    move-object v3, v0

    move-object/from16 v5, v18

    move-object/from16 v4, v19

    move-object/from16 v2, v20

    move-object/from16 v6, v21

    goto :goto_a

    :goto_8
    move-object v2, v0

    move-object v3, v2

    move-object v4, v3

    move-object v5, v4

    move-object v6, v5

    :goto_9
    move-object/from16 v1, v16

    .line 181
    :goto_a
    new-instance v7, Lcom/tramini/plugin/a/c/a;

    invoke-direct {v7}, Lcom/tramini/plugin/a/c/a;-><init>()V

    .line 182
    invoke-virtual/range {v27 .. v27}, Lorg/json/JSONObject;->length()I

    move-result v8

    if-lez v8, :cond_16

    .line 183
    invoke-static {v4}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_13

    invoke-static {v2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_13

    .line 184
    invoke-static {v4}, Lcom/tramini/plugin/a/e/b;->a(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    .line 185
    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v4

    if-nez v4, :cond_13

    move-object/from16 v4, v27

    .line 186
    invoke-virtual {v4, v2, v0}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    goto :goto_b

    :cond_13
    move-object/from16 v4, v27

    :goto_b
    move-object/from16 v2, p10

    move-object/from16 v8, v17

    .line 189
    invoke-virtual {v2, v8}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_14

    .line 190
    invoke-static {v3}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_15

    invoke-static {v6}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_15

    .line 191
    invoke-virtual {v3}, Ljava/lang/String;->getBytes()[B

    move-result-object v0

    invoke-static {v0}, Lcom/tramini/plugin/a/g/c;->a([B)Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v4, v6, v0}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    goto :goto_c

    :cond_14
    if-eqz v1, :cond_15

    .line 194
    invoke-static {v6}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_15

    .line 195
    invoke-virtual {v1}, Lorg/json/JSONObject;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v0}, Ljava/lang/String;->getBytes()[B

    move-result-object v0

    invoke-static {v0}, Lcom/tramini/plugin/a/g/c;->a([B)Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v4, v6, v0}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 198
    :cond_15
    :goto_c
    iput-object v4, v7, Lcom/tramini/plugin/a/c/a;->a:Lorg/json/JSONObject;

    return-object v7

    :cond_16
    move-object/from16 v2, p10

    move-object/from16 v8, v17

    .line 202
    invoke-virtual {v2, v8}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v2
    :try_end_8
    .catchall {:try_start_8 .. :try_end_8} :catchall_5

    const-string v4, "1"

    if-eqz v2, :cond_18

    .line 203
    :try_start_9
    invoke-static {v3}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-eqz v1, :cond_17

    .line 204
    new-instance v1, Lcom/tramini/plugin/a/c/a$a;

    invoke-direct {v1, v4, v0}, Lcom/tramini/plugin/a/c/a$a;-><init>(Ljava/lang/String;Ljava/lang/String;)V

    iput-object v1, v7, Lcom/tramini/plugin/a/c/a;->b:Lcom/tramini/plugin/a/c/a$a;

    goto :goto_d

    .line 206
    :cond_17
    new-instance v0, Lcom/tramini/plugin/a/c/a$a;

    invoke-direct {v0, v8, v3}, Lcom/tramini/plugin/a/c/a$a;-><init>(Ljava/lang/String;Ljava/lang/String;)V

    iput-object v0, v7, Lcom/tramini/plugin/a/c/a;->b:Lcom/tramini/plugin/a/c/a$a;

    goto :goto_d

    :cond_18
    if-nez v1, :cond_19

    .line 210
    new-instance v1, Lcom/tramini/plugin/a/c/a$a;

    invoke-direct {v1, v4, v0}, Lcom/tramini/plugin/a/c/a$a;-><init>(Ljava/lang/String;Ljava/lang/String;)V

    iput-object v1, v7, Lcom/tramini/plugin/a/c/a;->b:Lcom/tramini/plugin/a/c/a$a;

    goto :goto_d

    .line 212
    :cond_19
    invoke-static {v5}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_1a

    const-string v0, "obj_source_html"

    .line 213
    invoke-virtual {v1, v0, v5}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 215
    :cond_1a
    new-instance v0, Lcom/tramini/plugin/a/c/a$a;

    invoke-virtual {v1}, Lorg/json/JSONObject;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-direct {v0, v8, v1}, Lcom/tramini/plugin/a/c/a$a;-><init>(Ljava/lang/String;Ljava/lang/String;)V

    iput-object v0, v7, Lcom/tramini/plugin/a/c/a;->b:Lcom/tramini/plugin/a/c/a$a;
    :try_end_9
    .catchall {:try_start_9 .. :try_end_9} :catchall_5

    :goto_d
    return-object v7

    :catchall_5
    return-object v16
.end method

.method public static a(Lorg/json/JSONObject;Lcom/tramini/plugin/a/c/c;Ljava/lang/String;Ljava/lang/String;)Lcom/tramini/plugin/a/c/a;
    .locals 12

    const-string v0, "in_na"

    .line 30
    invoke-virtual {p0, v0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    invoke-static {v0, p2}, Lcom/tramini/plugin/a/e/b;->a(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/Object;

    move-result-object v1

    const-string p2, "tobj_k"

    .line 33
    invoke-virtual {p0, p2}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v3

    const-string p2, "bwt"

    const-wide/16 v4, 0x2710

    .line 34
    invoke-virtual {p0, p2, v4, v5}, Lorg/json/JSONObject;->optLong(Ljava/lang/String;J)J

    move-result-wide v4

    const-string p2, "bswt"

    const-wide/16 v6, 0x7d0

    .line 35
    invoke-virtual {p0, p2, v6, v7}, Lorg/json/JSONObject;->optLong(Ljava/lang/String;J)J

    move-result-wide v6

    const-string p2, "bu_k"

    .line 37
    invoke-virtual {p0, p2}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v9

    .line 38
    iget-object v10, p1, Lcom/tramini/plugin/a/c/c;->e:Lorg/json/JSONArray;

    const-string v2, ""

    move-object v8, p0

    move-object v11, p3

    invoke-static/range {v1 .. v11}, Lcom/tramini/plugin/a/e/b;->a(Ljava/lang/Object;Ljava/lang/String;Ljava/lang/String;JJLorg/json/JSONObject;Ljava/lang/String;Lorg/json/JSONArray;Ljava/lang/String;)Lcom/tramini/plugin/a/c/a;

    move-result-object p0

    return-object p0
.end method

.method private static a(Landroid/webkit/WebView;JJ)Ljava/lang/String;
    .locals 3

    .line 425
    sget v0, Landroid/os/Build$VERSION;->SDK_INT:I

    const/16 v1, 0x13

    if-ge v0, v1, :cond_0

    const-string p0, ""

    return-object p0

    .line 430
    :cond_0
    :try_start_0
    invoke-static {p1, p2}, Ljava/lang/Thread;->sleep(J)V
    :try_end_0
    .catch Ljava/lang/InterruptedException; {:try_start_0 .. :try_end_0} :catch_0

    :catch_0
    const/4 v0, 0x2

    .line 433
    invoke-static {v0}, Ljava/util/concurrent/Executors;->newFixedThreadPool(I)Ljava/util/concurrent/ExecutorService;

    move-result-object v0

    const/4 v1, 0x1

    new-array v1, v1, [Ljava/lang/String;

    .line 436
    :try_start_1
    new-instance v2, Lcom/tramini/plugin/a/e/b$1;

    invoke-direct {v2, p0, v0, v1}, Lcom/tramini/plugin/a/e/b$1;-><init>(Landroid/webkit/WebView;Ljava/util/concurrent/ExecutorService;[Ljava/lang/String;)V

    invoke-interface {v0, v2}, Ljava/util/concurrent/ExecutorService;->submit(Ljava/lang/Runnable;)Ljava/util/concurrent/Future;
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    .line 482
    :catchall_0
    :try_start_2
    monitor-enter v0
    :try_end_2
    .catch Ljava/lang/Exception; {:try_start_2 .. :try_end_2} :catch_1

    add-long/2addr p1, p3

    .line 483
    :try_start_3
    invoke-virtual {v0, p1, p2}, Ljava/lang/Object;->wait(J)V

    .line 484
    monitor-exit v0
    :try_end_3
    .catchall {:try_start_3 .. :try_end_3} :catchall_1

    .line 485
    :try_start_4
    invoke-interface {v0}, Ljava/util/concurrent/ExecutorService;->shutdown()V

    const/4 p0, 0x0

    .line 486
    aget-object p1, v1, p0

    if-eqz p1, :cond_1

    aget-object p0, v1, p0

    return-object p0

    :cond_1
    const-string p0, ""

    return-object p0

    :catchall_1
    move-exception p0

    .line 484
    monitor-exit v0

    throw p0
    :try_end_4
    .catch Ljava/lang/Exception; {:try_start_4 .. :try_end_4} :catch_1

    :catch_1
    const-string p0, ""

    return-object p0
.end method

.method private static a(Ljava/lang/Object;)Ljava/lang/String;
    .locals 4

    if-eqz p0, :cond_1

    .line 383
    :try_start_0
    new-instance v0, Ljava/util/ArrayList;

    invoke-direct {v0}, Ljava/util/ArrayList;-><init>()V

    .line 384
    invoke-virtual {p0}, Ljava/lang/Object;->getClass()Ljava/lang/Class;

    move-result-object v1

    invoke-static {v1, v0}, Lcom/tramini/plugin/a/e/b;->a(Ljava/lang/Class;Ljava/util/List;)V

    .line 385
    invoke-interface {v0}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object v0

    :cond_0
    invoke-interface {v0}, Ljava/util/Iterator;->hasNext()Z

    move-result v1

    if-eqz v1, :cond_1

    invoke-interface {v0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Ljava/lang/reflect/Field;

    if-eqz v1, :cond_0

    const/4 v2, 0x1

    .line 387
    invoke-virtual {v1, v2}, Ljava/lang/reflect/Field;->setAccessible(Z)V

    .line 388
    invoke-virtual {v1, p0}, Ljava/lang/reflect/Field;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v1

    if-eqz v1, :cond_0

    .line 389
    instance-of v2, v1, Ljava/lang/String;

    if-eqz v2, :cond_0

    .line 390
    move-object v2, v1

    check-cast v2, Ljava/lang/String;

    const-string v3, ".mp4"

    invoke-virtual {v2, v3}, Ljava/lang/String;->endsWith(Ljava/lang/String;)Z

    move-result v2

    if-eqz v2, :cond_0

    .line 391
    check-cast v1, Ljava/lang/String;
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return-object v1

    :catchall_0
    :cond_1
    const-string p0, ""

    return-object p0
.end method

.method private static a(Ljava/lang/String;Ljava/lang/Object;Lorg/json/JSONObject;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;
    .locals 8

    const-string v0, ""

    .line 229
    :try_start_0
    new-instance v1, Lorg/json/JSONArray;

    invoke-direct {v1, p0}, Lorg/json/JSONArray;-><init>(Ljava/lang/String;)V

    const/4 p0, 0x0

    move-object v2, v0

    .line 230
    :goto_0
    invoke-virtual {v1}, Lorg/json/JSONArray;->length()I

    move-result v3

    if-ge p0, v3, :cond_9

    .line 231
    invoke-virtual {v1, p0}, Lorg/json/JSONArray;->optJSONObject(I)Lorg/json/JSONObject;

    move-result-object v3

    if-eqz v3, :cond_8

    const-string v4, "action"

    const/4 v5, -0x1

    .line 233
    invoke-virtual {v3, v4, v5}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;I)I

    move-result v4

    const-string v5, "param"

    .line 234
    invoke-virtual {v3, v5, v0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v3

    const/4 v5, 0x1

    if-eq v4, v5, :cond_7

    const/4 v6, 0x2

    if-eq v4, v6, :cond_6

    const/16 v7, 0x13

    if-eq v4, v7, :cond_5

    const/16 v7, 0x15

    if-eq v4, v7, :cond_4

    const/16 v5, 0x1d

    if-eq v4, v5, :cond_3

    const/16 v5, 0x27

    if-eq v4, v5, :cond_2

    const/16 v5, 0x29

    if-eq v4, v5, :cond_1

    packed-switch v4, :pswitch_data_0

    packed-switch v4, :pswitch_data_1

    goto/16 :goto_1

    .line 297
    :pswitch_0
    invoke-static {p5}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v4

    if-nez v4, :cond_8

    .line 3358
    new-instance v2, Ljava/lang/StringBuilder;

    const-string v4, "<(img|IMG).*?"

    invoke-direct {v2, v4}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v4, "(.*?)(/>|></img>|>)"

    invoke-virtual {v2, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    .line 3359
    invoke-static {p5, v2, v6}, Lcom/tramini/plugin/a/e/f;->a(Ljava/lang/String;Ljava/lang/String;I)Ljava/lang/String;

    move-result-object v2

    .line 302
    :pswitch_1
    invoke-static {p5}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v4

    if-nez v4, :cond_8

    .line 3363
    new-instance v2, Ljava/lang/StringBuilder;

    const-string v4, "("

    invoke-direct {v2, v4}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v4, ")(http.*?)("

    invoke-virtual {v2, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v3, ")"

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    .line 3364
    invoke-static {p5, v2, v6}, Lcom/tramini/plugin/a/e/f;->a(Ljava/lang/String;Ljava/lang/String;I)Ljava/lang/String;

    move-result-object v2

    goto/16 :goto_1

    .line 291
    :pswitch_2
    invoke-static {p5}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v4

    if-nez v4, :cond_8

    .line 2368
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v3, "=(\"|\')(.*?)(\"|\')"

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    .line 2369
    invoke-static {p5, v2, v6}, Lcom/tramini/plugin/a/e/f;->a(Ljava/lang/String;Ljava/lang/String;I)Ljava/lang/String;

    move-result-object v2

    goto/16 :goto_1

    .line 285
    :pswitch_3
    invoke-static {p5}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v4

    if-nez v4, :cond_8

    .line 2348
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v3, ".*?\\>(.*?)(</span>|</div>)"

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    .line 2349
    invoke-static {p5, v2}, Lcom/tramini/plugin/a/e/f;->c(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    goto/16 :goto_1

    .line 261
    :pswitch_4
    invoke-static {p3}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v4

    if-nez v4, :cond_8

    .line 264
    invoke-static {p3, v3}, Lcom/tramini/plugin/a/e/f$d;->b(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    goto/16 :goto_1

    .line 255
    :pswitch_5
    invoke-static {p3}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v4

    if-nez v4, :cond_8

    .line 1337
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v3, "=\"(.*?)\""

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    .line 1338
    invoke-static {p3, v2}, Lcom/tramini/plugin/a/e/f;->c(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    .line 1339
    invoke-static {v2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v3

    if-nez v3, :cond_0

    const-string v3, "\""

    .line 1340
    invoke-virtual {v2, v3, v0}, Ljava/lang/String;->replace(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Ljava/lang/String;

    move-result-object v2

    goto :goto_1

    :cond_0
    move-object v2, v0

    goto :goto_1

    .line 249
    :pswitch_6
    invoke-static {p3}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v4

    if-nez v4, :cond_8

    .line 252
    invoke-static {p3, v3}, Lcom/tramini/plugin/a/e/f$d;->a(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    goto :goto_1

    .line 314
    :cond_1
    invoke-static {p6}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v4

    if-nez v4, :cond_8

    .line 317
    invoke-static {p6, v3}, Lcom/tramini/plugin/a/e/f$b;->a(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    goto :goto_1

    .line 308
    :cond_2
    invoke-static {p5}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v4

    if-nez v4, :cond_8

    .line 311
    invoke-static {p5, v3}, Lcom/tramini/plugin/a/e/f$b;->a(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    goto :goto_1

    .line 279
    :cond_3
    invoke-static {p4}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v4

    if-nez v4, :cond_8

    .line 282
    invoke-static {p4, v3}, Lcom/tramini/plugin/a/e/f$b;->a(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    goto :goto_1

    .line 273
    :cond_4
    invoke-static {p4}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v4

    if-nez v4, :cond_8

    const/16 v2, 0x22

    .line 1373
    invoke-static {v3, v2}, Ljava/util/regex/Pattern;->compile(Ljava/lang/String;I)Ljava/util/regex/Pattern;

    move-result-object v2

    .line 1374
    invoke-virtual {v2, p4}, Ljava/util/regex/Pattern;->matcher(Ljava/lang/CharSequence;)Ljava/util/regex/Matcher;

    move-result-object v2

    .line 1375
    invoke-virtual {v2}, Ljava/util/regex/Matcher;->find()Z

    move-result v3

    if-eqz v3, :cond_0

    .line 1376
    invoke-virtual {v2, v5}, Ljava/util/regex/Matcher;->group(I)Ljava/lang/String;

    move-result-object v2

    goto :goto_1

    .line 267
    :cond_5
    invoke-static {p3}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v4

    if-nez v4, :cond_8

    .line 270
    invoke-static {p3, v3}, Lcom/tramini/plugin/a/e/f$b;->a(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    goto :goto_1

    :cond_6
    if-eqz p1, :cond_8

    .line 246
    invoke-static {p1}, Lcom/tramini/plugin/a/e/b;->a(Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v2

    goto :goto_1

    :cond_7
    if-eqz p2, :cond_8

    .line 240
    invoke-virtual {p2, v3, v0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    .line 320
    :goto_1
    invoke-static {v2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v3
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    if-nez v3, :cond_8

    return-object v2

    :cond_8
    add-int/lit8 p0, p0, 0x1

    goto/16 :goto_0

    :catchall_0
    :cond_9
    return-object v0

    nop

    :pswitch_data_0
    .packed-switch 0xb
        :pswitch_6
        :pswitch_5
        :pswitch_4
    .end packed-switch

    :pswitch_data_1
    .packed-switch 0x1f
        :pswitch_3
        :pswitch_2
        :pswitch_0
        :pswitch_1
    .end packed-switch
.end method

.method private static b(Ljava/lang/Object;)Ljava/lang/String;
    .locals 4

    if-eqz p0, :cond_1

    .line 405
    :try_start_0
    new-instance v0, Ljava/util/ArrayList;

    invoke-direct {v0}, Ljava/util/ArrayList;-><init>()V

    .line 406
    invoke-virtual {p0}, Ljava/lang/Object;->getClass()Ljava/lang/Class;

    move-result-object v1

    invoke-static {v1, v0}, Lcom/tramini/plugin/a/e/b;->a(Ljava/lang/Class;Ljava/util/List;)V

    .line 407
    invoke-interface {v0}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object v0

    :cond_0
    invoke-interface {v0}, Ljava/util/Iterator;->hasNext()Z

    move-result v1

    if-eqz v1, :cond_1

    invoke-interface {v0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Ljava/lang/reflect/Field;

    if-eqz v1, :cond_0

    const/4 v2, 0x1

    .line 409
    invoke-virtual {v1, v2}, Ljava/lang/reflect/Field;->setAccessible(Z)V

    .line 410
    invoke-virtual {v1, p0}, Ljava/lang/reflect/Field;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v1

    if-eqz v1, :cond_0

    .line 411
    instance-of v2, v1, Ljava/lang/String;

    if-eqz v2, :cond_0

    .line 412
    move-object v2, v1

    check-cast v2, Ljava/lang/String;

    const-string v3, "<!DOCTYPE html>"

    invoke-virtual {v2, v3}, Ljava/lang/String;->contains(Ljava/lang/CharSequence;)Z

    move-result v2

    if-eqz v2, :cond_0

    .line 413
    check-cast v1, Ljava/lang/String;
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return-object v1

    :catchall_0
    :cond_1
    const-string p0, ""

    return-object p0
.end method

.method private static c(Ljava/lang/Object;Ljava/lang/String;)Lorg/json/JSONObject;
    .locals 4

    .line 361
    :try_start_0
    new-instance v0, Ljava/util/ArrayList;

    invoke-direct {v0}, Ljava/util/ArrayList;-><init>()V

    .line 362
    invoke-virtual {p0}, Ljava/lang/Object;->getClass()Ljava/lang/Class;

    move-result-object v1

    invoke-static {v1, v0}, Lcom/tramini/plugin/a/e/b;->a(Ljava/lang/Class;Ljava/util/List;)V

    .line 363
    invoke-interface {v0}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object v0

    :cond_0
    invoke-interface {v0}, Ljava/util/Iterator;->hasNext()Z

    move-result v1

    if-eqz v1, :cond_1

    invoke-interface {v0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Ljava/lang/reflect/Field;

    if-eqz v1, :cond_0

    const/4 v2, 0x1

    .line 365
    invoke-virtual {v1, v2}, Ljava/lang/reflect/Field;->setAccessible(Z)V

    .line 366
    invoke-virtual {v1, p0}, Ljava/lang/reflect/Field;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v1

    if-eqz v1, :cond_0

    .line 367
    instance-of v2, v1, Lorg/json/JSONObject;

    if-eqz v2, :cond_0

    .line 368
    move-object v2, v1

    check-cast v2, Lorg/json/JSONObject;

    const-string v3, ""

    invoke-virtual {v2, p1, v3}, Lorg/json/JSONObject;->optString(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    .line 369
    invoke-static {v2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v2

    if-nez v2, :cond_0

    .line 370
    check-cast v1, Lorg/json/JSONObject;
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return-object v1

    :catchall_0
    :cond_1
    const/4 p0, 0x0

    return-object p0
.end method

.method private static d(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;
    .locals 6

    const-string v0, ""

    .line 334
    :try_start_0
    new-instance v1, Lorg/json/JSONArray;

    invoke-direct {v1, p0}, Lorg/json/JSONArray;-><init>(Ljava/lang/String;)V

    const/4 p0, 0x0

    move-object v2, v0

    .line 335
    :goto_0
    invoke-virtual {v1}, Lorg/json/JSONArray;->length()I

    move-result v3

    if-ge p0, v3, :cond_2

    .line 336
    invoke-virtual {v1, p0}, Lorg/json/JSONArray;->optJSONObject(I)Lorg/json/JSONObject;

    move-result-object v3

    if-eqz v3, :cond_1

    const-string v4, "action"

    const/4 v5, -0x1

    .line 338
    invoke-virtual {v3, v4, v5}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;I)I

    move-result v4

    const-string v5, "param"

    .line 339
    invoke-virtual {v3, v5, v0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v3

    const/16 v5, 0x65

    if-eq v4, v5, :cond_0

    goto :goto_1

    .line 342
    :cond_0
    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v4

    if-nez v4, :cond_1

    .line 345
    invoke-static {p1, v3}, Lcom/tramini/plugin/a/e/f$b;->a(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    .line 348
    :goto_1
    invoke-static {v2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v3
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    if-nez v3, :cond_1

    return-object v2

    :cond_1
    add-int/lit8 p0, p0, 0x1

    goto :goto_0

    :catchall_0
    :cond_2
    return-object v0
.end method
