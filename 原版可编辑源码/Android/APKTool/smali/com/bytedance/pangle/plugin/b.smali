.class final Lcom/bytedance/pangle/plugin/b;
.super Ljava/lang/Object;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/bytedance/pangle/plugin/b$a;
    }
.end annotation


# static fields
.field private static final a:Lcom/bytedance/pangle/h;


# direct methods
.method static constructor <clinit>()V
    .locals 1

    .line 55
    invoke-static {}, Lcom/bytedance/pangle/h;->a()Lcom/bytedance/pangle/h;

    move-result-object v0

    sput-object v0, Lcom/bytedance/pangle/plugin/b;->a:Lcom/bytedance/pangle/h;

    return-void
.end method

.method static synthetic a(Ljava/io/File;Ljava/lang/String;ILjava/lang/StringBuffer;)V
    .locals 11

    const-string v0, ";"

    const-string v1, "checkSignature cost:"

    .line 1156
    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v2

    .line 1158
    :try_start_0
    invoke-virtual {p0}, Ljava/io/File;->getAbsolutePath()Ljava/lang/String;

    move-result-object p0

    invoke-static {p0, p1}, Lcom/bytedance/pangle/g/e;->a(Ljava/lang/String;Ljava/lang/String;)Z

    move-result p0
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    if-eqz p0, :cond_0

    .line 1166
    invoke-virtual {p3, v1}, Ljava/lang/StringBuffer;->append(Ljava/lang/String;)Ljava/lang/StringBuffer;

    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide p0

    sub-long/2addr p0, v2

    invoke-virtual {p3, p0, p1}, Ljava/lang/StringBuffer;->append(J)Ljava/lang/StringBuffer;

    invoke-virtual {p3, v0}, Ljava/lang/StringBuffer;->append(Ljava/lang/String;)Ljava/lang/StringBuffer;

    return-void

    .line 1159
    :cond_0
    :try_start_1
    new-instance p0, Ljava/lang/RuntimeException;

    const-string v4, "\u5b89\u88c5\u5305\u7b7e\u540d\u6821\u9a8c\u5931\u8d25[1]"

    invoke-direct {p0, v4}, Ljava/lang/RuntimeException;-><init>(Ljava/lang/String;)V

    throw p0
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_0
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    :catchall_0
    move-exception p0

    goto :goto_0

    :catch_0
    move-exception p0

    .line 1162
    :try_start_2
    sget-object v4, Lcom/bytedance/pangle/c/b;->f:Ljava/lang/String;

    sget v5, Lcom/bytedance/pangle/c/b$a;->q:I

    const-wide/16 v8, -0x1

    const/4 v10, 0x0

    move-object v6, p1

    move v7, p2

    invoke-static/range {v4 .. v10}, Lcom/bytedance/pangle/plugin/b;->a(Ljava/lang/String;ILjava/lang/String;IJLjava/lang/String;)V

    .line 1163
    sget-object v4, Lcom/bytedance/pangle/plugin/b;->a:Lcom/bytedance/pangle/h;

    const/16 v5, 0x44c

    const/4 v6, -0x3

    move-object v7, p1

    move v8, p2

    move-object v9, p0

    invoke-virtual/range {v4 .. v9}, Lcom/bytedance/pangle/h;->a(IILjava/lang/String;ILjava/lang/Throwable;)V

    .line 1164
    new-instance p1, Lcom/bytedance/pangle/plugin/b$a;

    invoke-virtual {p0}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    move-result-object p2

    const/4 v4, 0x0

    invoke-direct {p1, p2, p0, v4}, Lcom/bytedance/pangle/plugin/b$a;-><init>(Ljava/lang/String;Ljava/lang/Throwable;B)V

    throw p1
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_0

    .line 1166
    :goto_0
    invoke-virtual {p3, v1}, Ljava/lang/StringBuffer;->append(Ljava/lang/String;)Ljava/lang/StringBuffer;

    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide p1

    sub-long/2addr p1, v2

    invoke-virtual {p3, p1, p2}, Ljava/lang/StringBuffer;->append(J)Ljava/lang/StringBuffer;

    invoke-virtual {p3, v0}, Ljava/lang/StringBuffer;->append(Ljava/lang/String;)Ljava/lang/StringBuffer;

    .line 1167
    throw p0
.end method

.method private static a(Ljava/lang/String;ILjava/lang/String;IJLjava/lang/String;)V
    .locals 4

    .line 282
    new-instance v0, Lorg/json/JSONObject;

    invoke-direct {v0}, Lorg/json/JSONObject;-><init>()V

    .line 283
    new-instance v1, Lorg/json/JSONObject;

    invoke-direct {v1}, Lorg/json/JSONObject;-><init>()V

    .line 284
    new-instance v2, Lorg/json/JSONObject;

    invoke-direct {v2}, Lorg/json/JSONObject;-><init>()V

    :try_start_0
    const-string v3, "status_code"

    .line 286
    invoke-static {p1}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object p1

    invoke-static {p1}, Lcom/bytedance/pangle/log/b;->a(Ljava/lang/Object;)Ljava/lang/String;

    move-result-object p1

    invoke-virtual {v0, v3, p1}, Lorg/json/JSONObject;->putOpt(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string p1, "plugin_package_name"

    .line 287
    invoke-static {p2}, Lcom/bytedance/pangle/log/b;->a(Ljava/lang/Object;)Ljava/lang/String;

    move-result-object p2

    invoke-virtual {v0, p1, p2}, Lorg/json/JSONObject;->putOpt(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string p1, "version_code"

    .line 288
    invoke-static {p3}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object p2

    invoke-static {p2}, Lcom/bytedance/pangle/log/b;->a(Ljava/lang/Object;)Ljava/lang/String;

    move-result-object p2

    invoke-virtual {v0, p1, p2}, Lorg/json/JSONObject;->putOpt(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string p1, "duration"

    .line 289
    invoke-static {p4, p5}, Ljava/lang/Long;->valueOf(J)Ljava/lang/Long;

    move-result-object p2

    invoke-static {p2}, Lcom/bytedance/pangle/log/b;->b(Ljava/lang/Object;)I

    move-result p2

    invoke-static {p2}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object p2

    invoke-virtual {v2, p1, p2}, Lorg/json/JSONObject;->putOpt(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string p1, "message"

    .line 290
    invoke-static {p6}, Lcom/bytedance/pangle/log/b;->a(Ljava/lang/Object;)Ljava/lang/String;

    move-result-object p2

    invoke-virtual {v1, p1, p2}, Lorg/json/JSONObject;->putOpt(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;
    :try_end_0
    .catch Lorg/json/JSONException; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p1

    .line 292
    invoke-virtual {p1}, Lorg/json/JSONException;->printStackTrace()V

    .line 294
    :goto_0
    invoke-static {}, Lcom/bytedance/pangle/c/b;->a()Lcom/bytedance/pangle/c/b;

    move-result-object p1

    invoke-virtual {p1, p0, v0, v2, v1}, Lcom/bytedance/pangle/c/b;->a(Ljava/lang/String;Lorg/json/JSONObject;Lorg/json/JSONObject;Lorg/json/JSONObject;)V

    return-void
.end method

.method static synthetic a(Ljava/lang/String;ILjava/util/Map;Ljava/lang/StringBuffer;)V
    .locals 11

    const-string v0, ";"

    const-string v1, "copySo cost:"

    .line 2239
    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v2

    .line 2240
    invoke-static {p0, p1}, Lcom/bytedance/pangle/d/c;->b(Ljava/lang/String;I)Ljava/lang/String;

    move-result-object v4

    .line 2241
    invoke-static {p0, p1}, Lcom/bytedance/pangle/d/c;->d(Ljava/lang/String;I)Ljava/lang/String;

    move-result-object v5

    .line 2243
    :try_start_0
    new-instance v6, Ljava/io/File;

    invoke-direct {v6, v4}, Ljava/io/File;-><init>(Ljava/lang/String;)V

    new-instance v4, Ljava/io/File;

    invoke-direct {v4, v5}, Ljava/io/File;-><init>(Ljava/lang/String;)V

    invoke-static {v6, v4, p0, p2}, Lcom/bytedance/pangle/d/b;->a(Ljava/io/File;Ljava/io/File;Ljava/lang/String;Ljava/util/Map;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 2249
    invoke-virtual {p3, v1}, Ljava/lang/StringBuffer;->append(Ljava/lang/String;)Ljava/lang/StringBuffer;

    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide p0

    sub-long/2addr p0, v2

    invoke-virtual {p3, p0, p1}, Ljava/lang/StringBuffer;->append(J)Ljava/lang/StringBuffer;

    invoke-virtual {p3, v0}, Ljava/lang/StringBuffer;->append(Ljava/lang/String;)Ljava/lang/StringBuffer;

    return-void

    :catchall_0
    move-exception p0

    goto :goto_0

    :catch_0
    move-exception p2

    .line 2245
    :try_start_1
    sget-object v4, Lcom/bytedance/pangle/c/b;->f:Ljava/lang/String;

    sget v5, Lcom/bytedance/pangle/c/b$a;->t:I

    const-wide/16 v8, -0x1

    const/4 v10, 0x0

    move-object v6, p0

    move v7, p1

    invoke-static/range {v4 .. v10}, Lcom/bytedance/pangle/plugin/b;->a(Ljava/lang/String;ILjava/lang/String;IJLjava/lang/String;)V

    .line 2246
    sget-object v4, Lcom/bytedance/pangle/plugin/b;->a:Lcom/bytedance/pangle/h;

    const/16 v5, 0x44c

    const/4 v6, -0x7

    move-object v7, p0

    move v8, p1

    move-object v9, p2

    invoke-virtual/range {v4 .. v9}, Lcom/bytedance/pangle/h;->a(IILjava/lang/String;ILjava/lang/Throwable;)V

    .line 2247
    new-instance p0, Lcom/bytedance/pangle/plugin/b$a;

    const-string p1, "\u5b89\u88c5\u5305\u52a8\u6001\u5e93\u62f7\u8d1d\u5931\u8d25"

    const/4 v4, 0x0

    invoke-direct {p0, p1, p2, v4}, Lcom/bytedance/pangle/plugin/b$a;-><init>(Ljava/lang/String;Ljava/lang/Throwable;B)V

    throw p0
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    .line 2249
    :goto_0
    invoke-virtual {p3, v1}, Ljava/lang/StringBuffer;->append(Ljava/lang/String;)Ljava/lang/StringBuffer;

    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide p1

    sub-long/2addr p1, v2

    invoke-virtual {p3, p1, p2}, Ljava/lang/StringBuffer;->append(J)Ljava/lang/StringBuffer;

    invoke-virtual {p3, v0}, Ljava/lang/StringBuffer;->append(Ljava/lang/String;)Ljava/lang/StringBuffer;

    .line 2250
    throw p0
.end method

.method static synthetic a(Ljava/lang/String;Ljava/lang/String;ILjava/lang/StringBuffer;)V
    .locals 19

    move-object/from16 v0, p3

    .line 2142
    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v1

    .line 2144
    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    .line 2145
    new-instance v4, Lcom/bytedance/pangle/res/a/c;

    invoke-direct {v4}, Lcom/bytedance/pangle/res/a/c;-><init>()V

    new-instance v5, Ljava/io/File;

    move-object/from16 v6, p0

    invoke-direct {v5, v6}, Ljava/io/File;-><init>(Ljava/lang/String;)V

    const/4 v6, 0x0

    invoke-virtual {v4, v5, v6, v3}, Lcom/bytedance/pangle/res/a/c;->a(Ljava/io/File;ZLjava/lang/StringBuilder;)I

    move-result v4

    const/16 v5, 0x64

    if-ne v4, v5, :cond_0

    const-string v7, "modifyRes"

    goto :goto_0

    :cond_0
    const-string v7, "noModifyRes"

    .line 2146
    :goto_0
    invoke-virtual {v0, v7}, Ljava/lang/StringBuffer;->append(Ljava/lang/String;)Ljava/lang/StringBuffer;

    const-string v7, " cost:"

    invoke-virtual {v0, v7}, Ljava/lang/StringBuffer;->append(Ljava/lang/String;)Ljava/lang/StringBuffer;

    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v7

    sub-long/2addr v7, v1

    invoke-virtual {v0, v7, v8}, Ljava/lang/StringBuffer;->append(J)Ljava/lang/StringBuffer;

    const-string v1, ";"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuffer;->append(Ljava/lang/String;)Ljava/lang/StringBuffer;

    if-eq v4, v5, :cond_2

    const/16 v0, 0xc8

    if-ne v4, v0, :cond_1

    goto :goto_1

    .line 2148
    :cond_1
    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    .line 2149
    sget-object v7, Lcom/bytedance/pangle/c/b;->f:Ljava/lang/String;

    sget v8, Lcom/bytedance/pangle/c/b$a;->x:I

    const-wide/16 v11, -0x1

    move-object/from16 v9, p1

    move/from16 v10, p2

    move-object v13, v0

    invoke-static/range {v7 .. v13}, Lcom/bytedance/pangle/plugin/b;->a(Ljava/lang/String;ILjava/lang/String;IJLjava/lang/String;)V

    .line 2150
    sget-object v13, Lcom/bytedance/pangle/plugin/b;->a:Lcom/bytedance/pangle/h;

    const/16 v14, 0x44c

    const/4 v15, -0x2

    const/16 v18, 0x0

    move-object/from16 v16, p1

    move/from16 v17, p2

    invoke-virtual/range {v13 .. v18}, Lcom/bytedance/pangle/h;->a(IILjava/lang/String;ILjava/lang/Throwable;)V

    .line 2151
    new-instance v1, Lcom/bytedance/pangle/plugin/b$a;

    new-instance v2, Ljava/lang/StringBuilder;

    const-string v3, "modifyRes failed. result = "

    invoke-direct {v2, v3}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {v2, v4}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v3, ", errorLog = "

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-direct {v1, v0, v6}, Lcom/bytedance/pangle/plugin/b$a;-><init>(Ljava/lang/String;B)V

    throw v1

    :cond_2
    :goto_1
    return-void
.end method

.method static a(Ljava/io/File;Ljava/lang/String;I)Z
    .locals 14

    move-object v0, p0

    move-object v8, p1

    move/from16 v9, p2

    const-string v10, "Zeus/install_pangle"

    .line 66
    new-instance v11, Ljava/lang/StringBuffer;

    invoke-direct {v11}, Ljava/lang/StringBuffer;-><init>()V

    const-string v1, "useOpt;"

    .line 67
    invoke-virtual {v11, v1}, Ljava/lang/StringBuffer;->append(Ljava/lang/String;)Ljava/lang/StringBuffer;

    const/4 v12, 0x0

    .line 69
    :try_start_0
    sget-object v1, Lcom/bytedance/pangle/plugin/b;->a:Lcom/bytedance/pangle/h;

    const/16 v2, 0x3e8

    const/4 v3, 0x0

    const/4 v6, 0x0

    move-object v4, p1

    move/from16 v5, p2

    invoke-virtual/range {v1 .. v6}, Lcom/bytedance/pangle/h;->a(IILjava/lang/String;ILjava/lang/Throwable;)V

    const-string v1, "PluginInstaller"

    const-string v2, "install:"

    .line 70
    invoke-static {p1}, Ljava/lang/String;->valueOf(Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v2, v3}, Ljava/lang/String;->concat(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    invoke-static {v10, v1, v2}, Lcom/bytedance/pangle/log/a;->a(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Lcom/bytedance/pangle/log/a;

    move-result-object v13

    .line 71
    sget-object v1, Lcom/bytedance/pangle/c/b;->e:Ljava/lang/String;

    sget v2, Lcom/bytedance/pangle/c/b$a;->n:I

    const-wide/16 v5, -0x1

    const/4 v7, 0x0

    move-object v3, p1

    move/from16 v4, p2

    invoke-static/range {v1 .. v7}, Lcom/bytedance/pangle/plugin/b;->a(Ljava/lang/String;ILjava/lang/String;IJLjava/lang/String;)V

    .line 73
    invoke-static/range {p1 .. p2}, Lcom/bytedance/pangle/d/c;->a(Ljava/lang/String;I)Ljava/lang/String;

    move-result-object v1

    invoke-static {v1}, Lcom/bytedance/pangle/util/g;->a(Ljava/lang/String;)V

    const/4 v1, 0x2

    new-array v1, v1, [Lcom/bytedance/pangle/a/a$a;

    .line 75
    new-instance v2, Lcom/bytedance/pangle/plugin/b$1;

    invoke-direct {v2, p0, p1, v9, v11}, Lcom/bytedance/pangle/plugin/b$1;-><init>(Ljava/io/File;Ljava/lang/String;ILjava/lang/StringBuffer;)V

    aput-object v2, v1, v12

    new-instance v2, Lcom/bytedance/pangle/plugin/b$2;

    invoke-direct {v2, p0, p1, v9, v11}, Lcom/bytedance/pangle/plugin/b$2;-><init>(Ljava/io/File;Ljava/lang/String;ILjava/lang/StringBuffer;)V

    const/4 v7, 0x1

    aput-object v2, v1, v7

    invoke-static {v1}, Lcom/bytedance/pangle/a/a;->a([Lcom/bytedance/pangle/a/a$a;)V

    .line 122
    invoke-static {p0}, Lcom/bytedance/pangle/util/g;->a(Ljava/io/File;)V

    .line 125
    sget-object v0, Lcom/bytedance/pangle/c/b;->f:Ljava/lang/String;

    sget v1, Lcom/bytedance/pangle/c/b$a;->o:I

    invoke-virtual {v13}, Lcom/bytedance/pangle/log/a;->a()J

    move-result-wide v4

    invoke-virtual {v11}, Ljava/lang/StringBuffer;->toString()Ljava/lang/String;

    move-result-object v6

    move-object v2, p1

    move/from16 v3, p2

    invoke-static/range {v0 .. v6}, Lcom/bytedance/pangle/plugin/b;->a(Ljava/lang/String;ILjava/lang/String;IJLjava/lang/String;)V

    const-string v0, "success"

    .line 126
    invoke-virtual {v13, v0}, Lcom/bytedance/pangle/log/a;->a(Ljava/lang/String;)J

    .line 127
    sget-object v0, Lcom/bytedance/pangle/plugin/b;->a:Lcom/bytedance/pangle/h;

    const/16 v1, 0x44c

    const/4 v2, 0x0

    const/4 v5, 0x0

    move-object v3, p1

    move/from16 v4, p2

    invoke-virtual/range {v0 .. v5}, Lcom/bytedance/pangle/h;->a(IILjava/lang/String;ILjava/lang/Throwable;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return v7

    :catchall_0
    move-exception v0

    move-object v7, v0

    .line 130
    nop

    instance-of v0, v7, Lcom/bytedance/pangle/plugin/b$a;

    const-string v1, "PluginInstaller "

    if-eqz v0, :cond_0

    .line 131
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0, v1}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v1, " install failed."

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v10, v0, v7}, Lcom/bytedance/pangle/log/ZeusLogger;->w(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)V

    goto :goto_0

    .line 133
    :cond_0
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0, v1}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v1, " install failed unknown error."

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v10, v0, v7}, Lcom/bytedance/pangle/log/ZeusLogger;->w(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)V

    .line 134
    sget-object v0, Lcom/bytedance/pangle/c/b;->f:Ljava/lang/String;

    sget v1, Lcom/bytedance/pangle/c/b$a;->p:I

    const-wide/16 v4, -0x1

    invoke-virtual {v11}, Ljava/lang/StringBuffer;->toString()Ljava/lang/String;

    move-result-object v6

    move-object v2, p1

    move/from16 v3, p2

    invoke-static/range {v0 .. v6}, Lcom/bytedance/pangle/plugin/b;->a(Ljava/lang/String;ILjava/lang/String;IJLjava/lang/String;)V

    .line 135
    sget-object v0, Lcom/bytedance/pangle/plugin/b;->a:Lcom/bytedance/pangle/h;

    const/16 v1, 0x44c

    const/4 v2, -0x1

    move-object v3, p1

    move/from16 v4, p2

    move-object v5, v7

    invoke-virtual/range {v0 .. v5}, Lcom/bytedance/pangle/h;->a(IILjava/lang/String;ILjava/lang/Throwable;)V

    :goto_0
    return v12
.end method

.method static synthetic b(Ljava/io/File;Ljava/lang/String;ILjava/lang/StringBuffer;)Ljava/util/Map;
    .locals 0

    .line 53
    invoke-static {p0, p1, p2, p3}, Lcom/bytedance/pangle/plugin/b;->f(Ljava/io/File;Ljava/lang/String;ILjava/lang/StringBuffer;)Ljava/util/Map;

    move-result-object p0

    return-object p0
.end method

.method static synthetic c(Ljava/io/File;Ljava/lang/String;ILjava/lang/StringBuffer;)V
    .locals 14

    move-object/from16 v1, p3

    const-string v0, "The following permissions are declared in the plugin but not in the host: "

    const-string v2, ";"

    const-string v3, "checkPermissions cost:"

    .line 1193
    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v4

    const/4 v6, 0x0

    .line 1196
    :try_start_0
    invoke-static {}, Lcom/bytedance/pangle/Zeus;->getAppApplication()Landroid/app/Application;

    move-result-object v7

    invoke-virtual {v7}, Landroid/app/Application;->getPackageManager()Landroid/content/pm/PackageManager;

    move-result-object v7

    invoke-static {}, Lcom/bytedance/pangle/Zeus;->getAppApplication()Landroid/app/Application;

    move-result-object v8

    invoke-virtual {v8}, Landroid/app/Application;->getPackageName()Ljava/lang/String;

    move-result-object v8

    const/16 v9, 0x1000

    invoke-virtual {v7, v8, v9}, Landroid/content/pm/PackageManager;->getPackageInfo(Ljava/lang/String;I)Landroid/content/pm/PackageInfo;

    move-result-object v7

    .line 1197
    invoke-static {}, Lcom/bytedance/pangle/Zeus;->getAppApplication()Landroid/app/Application;

    move-result-object v8

    invoke-virtual {v8}, Landroid/app/Application;->getPackageManager()Landroid/content/pm/PackageManager;

    move-result-object v8

    invoke-virtual {p0}, Ljava/io/File;->getAbsolutePath()Ljava/lang/String;

    move-result-object v10

    invoke-virtual {v8, v10, v9}, Landroid/content/pm/PackageManager;->getPackageArchiveInfo(Ljava/lang/String;I)Landroid/content/pm/PackageInfo;

    move-result-object v8

    .line 1198
    iget-object v7, v7, Landroid/content/pm/PackageInfo;->requestedPermissions:[Ljava/lang/String;

    invoke-static {v7}, Ljava/util/Arrays;->asList([Ljava/lang/Object;)Ljava/util/List;

    move-result-object v7

    .line 1199
    iget-object v9, v8, Landroid/content/pm/PackageInfo;->requestedPermissions:[Ljava/lang/String;

    if-eqz v9, :cond_3

    iget-object v9, v8, Landroid/content/pm/PackageInfo;->requestedPermissions:[Ljava/lang/String;

    array-length v9, v9

    if-lez v9, :cond_3

    .line 1200
    new-instance v9, Ljava/util/ArrayList;

    invoke-direct {v9}, Ljava/util/ArrayList;-><init>()V

    .line 1201
    iget-object v8, v8, Landroid/content/pm/PackageInfo;->requestedPermissions:[Ljava/lang/String;

    array-length v10, v8

    move v11, v6

    :goto_0
    if-ge v11, v10, :cond_1

    aget-object v12, v8, v11

    .line 1202
    invoke-interface {v7, v12}, Ljava/util/List;->contains(Ljava/lang/Object;)Z

    move-result v13

    if-nez v13, :cond_0

    .line 1203
    invoke-interface {v9, v12}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    :cond_0
    add-int/lit8 v11, v11, 0x1

    goto :goto_0

    .line 1206
    :cond_1
    invoke-interface {v9}, Ljava/util/List;->isEmpty()Z

    move-result v7

    if-nez v7, :cond_3

    const-string v7, "PluginInstaller"

    .line 1207
    invoke-static {v9}, Ljava/lang/String;->valueOf(Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v8

    invoke-virtual {v0, v8}, Ljava/lang/String;->concat(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v8

    invoke-static {v7, v8}, Lcom/bytedance/pangle/log/ZeusLogger;->w(Ljava/lang/String;Ljava/lang/String;)V

    .line 1208
    invoke-static {}, Lcom/bytedance/pangle/GlobalParam;->getInstance()Lcom/bytedance/pangle/GlobalParam;

    move-result-object v7

    invoke-virtual {v7}, Lcom/bytedance/pangle/GlobalParam;->checkPermission()Z

    move-result v7

    if-nez v7, :cond_2

    goto :goto_1

    .line 1209
    :cond_2
    new-instance v7, Lcom/bytedance/pangle/plugin/b$a;

    invoke-static {v9}, Ljava/lang/String;->valueOf(Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v8

    invoke-virtual {v0, v8}, Ljava/lang/String;->concat(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    invoke-direct {v7, v0, v6}, Lcom/bytedance/pangle/plugin/b$a;-><init>(Ljava/lang/String;B)V

    throw v7
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 1218
    :cond_3
    :goto_1
    invoke-virtual {v1, v3}, Ljava/lang/StringBuffer;->append(Ljava/lang/String;)Ljava/lang/StringBuffer;

    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v6

    sub-long/2addr v6, v4

    invoke-virtual {v1, v6, v7}, Ljava/lang/StringBuffer;->append(J)Ljava/lang/StringBuffer;

    invoke-virtual {v1, v2}, Ljava/lang/StringBuffer;->append(Ljava/lang/String;)Ljava/lang/StringBuffer;

    return-void

    :catchall_0
    move-exception v0

    goto :goto_2

    :catch_0
    move-exception v0

    .line 1214
    :try_start_1
    sget-object v7, Lcom/bytedance/pangle/c/b;->f:Ljava/lang/String;

    sget v8, Lcom/bytedance/pangle/c/b$a;->r:I

    const-wide/16 v11, -0x1

    const/4 v13, 0x0

    move-object v9, p1

    move/from16 v10, p2

    invoke-static/range {v7 .. v13}, Lcom/bytedance/pangle/plugin/b;->a(Ljava/lang/String;ILjava/lang/String;IJLjava/lang/String;)V

    .line 1215
    sget-object v8, Lcom/bytedance/pangle/plugin/b;->a:Lcom/bytedance/pangle/h;

    const/16 v9, 0x44c

    const/4 v10, -0x4

    move-object v11, p1

    move/from16 v12, p2

    move-object v13, v0

    invoke-virtual/range {v8 .. v13}, Lcom/bytedance/pangle/h;->a(IILjava/lang/String;ILjava/lang/Throwable;)V

    .line 1216
    new-instance v7, Lcom/bytedance/pangle/plugin/b$a;

    const-string v8, "\u5b89\u88c5\u5305\u6743\u9650\u6821\u9a8c\u5931\u8d25"

    invoke-direct {v7, v8, v0, v6}, Lcom/bytedance/pangle/plugin/b$a;-><init>(Ljava/lang/String;Ljava/lang/Throwable;B)V

    throw v7
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    .line 1218
    :goto_2
    invoke-virtual {v1, v3}, Ljava/lang/StringBuffer;->append(Ljava/lang/String;)Ljava/lang/StringBuffer;

    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v6

    sub-long/2addr v6, v4

    invoke-virtual {v1, v6, v7}, Ljava/lang/StringBuffer;->append(J)Ljava/lang/StringBuffer;

    invoke-virtual {v1, v2}, Ljava/lang/StringBuffer;->append(Ljava/lang/String;)Ljava/lang/StringBuffer;

    .line 1219
    throw v0
.end method

.method static synthetic d(Ljava/io/File;Ljava/lang/String;ILjava/lang/StringBuffer;)Ljava/lang/String;
    .locals 0

    .line 53
    invoke-static {p0, p1, p2, p3}, Lcom/bytedance/pangle/plugin/b;->g(Ljava/io/File;Ljava/lang/String;ILjava/lang/StringBuffer;)Ljava/lang/String;

    move-result-object p0

    return-object p0
.end method

.method static synthetic e(Ljava/io/File;Ljava/lang/String;ILjava/lang/StringBuffer;)V
    .locals 21

    move-object/from16 v3, p1

    move/from16 v4, p2

    move-object/from16 v8, p3

    const-string v1, ".dex"

    const-string v2, "classes"

    const-string v9, ";"

    const-string v10, "dexOpt cost:"

    const-string v5, "Zeus/install_pangle"

    .line 2254
    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v11

    .line 2256
    :try_start_0
    invoke-static {}, Lcom/bytedance/pangle/util/i;->b()Z

    move-result v0

    if-eqz v0, :cond_8

    .line 3055
    invoke-virtual/range {p0 .. p0}, Ljava/io/File;->exists()Z

    move-result v0
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_2
    .catchall {:try_start_0 .. :try_end_0} :catchall_4

    if-eqz v0, :cond_7

    if-eqz v3, :cond_7

    const/4 v6, 0x0

    .line 3062
    :try_start_1
    new-instance v7, Ljava/util/zip/ZipFile;

    move-object/from16 v14, p0

    invoke-direct {v7, v14}, Ljava/util/zip/ZipFile;-><init>(Ljava/io/File;)V
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_2

    .line 3063
    :try_start_2
    new-instance v6, Ljava/util/ArrayList;

    invoke-direct {v6}, Ljava/util/ArrayList;-><init>()V

    .line 3066
    invoke-static/range {p1 .. p2}, Lcom/bytedance/pangle/d/c;->i(Ljava/lang/String;I)Ljava/lang/String;

    move-result-object v0

    .line 3067
    new-instance v15, Ljava/io/File;

    invoke-direct {v15, v0}, Ljava/io/File;-><init>(Ljava/lang/String;)V

    .line 3068
    invoke-static {v15}, Lcom/bytedance/pangle/e/g;->a(Ljava/io/File;)V

    const/4 v13, 0x1

    .line 3075
    :goto_0
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0, v2}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_1

    const-string v16, ""

    const/4 v14, 0x1

    if-ne v13, v14, :cond_0

    move-object/from16 v14, v16

    goto :goto_1

    :cond_0
    :try_start_3
    invoke-static {v13}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v14

    :goto_1
    invoke-virtual {v0, v14}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    .line 3078
    invoke-virtual {v7, v0}, Ljava/util/zip/ZipFile;->getEntry(Ljava/lang/String;)Ljava/util/zip/ZipEntry;

    move-result-object v14

    if-eqz v14, :cond_6

    .line 3085
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;
    :try_end_3
    .catchall {:try_start_3 .. :try_end_3} :catchall_1

    move-object/from16 v17, v9

    const/4 v9, 0x1

    if-ne v13, v9, :cond_1

    goto :goto_2

    :cond_1
    :try_start_4
    invoke-static {v13}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v16

    :goto_2
    move-object/from16 v9, v16

    invoke-virtual {v0, v9}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    .line 3090
    new-instance v9, Lcom/bytedance/pangle/e/g$a;

    invoke-direct {v9, v15, v0}, Lcom/bytedance/pangle/e/g$a;-><init>(Ljava/io/File;Ljava/lang/String;)V
    :try_end_4
    .catchall {:try_start_4 .. :try_end_4} :catchall_0

    move-object/from16 v18, v1

    const/4 v1, 0x0

    const/16 v16, 0x0

    :goto_3
    const/4 v0, 0x3

    if-ge v1, v0, :cond_4

    if-nez v16, :cond_4

    .line 3094
    :try_start_5
    invoke-static {v7, v14, v9, v2}, Lcom/bytedance/pangle/e/g;->a(Ljava/util/zip/ZipFile;Ljava/util/zip/ZipEntry;Lcom/bytedance/pangle/e/g$a;Ljava/lang/String;)V
    :try_end_5
    .catch Ljava/io/IOException; {:try_start_5 .. :try_end_5} :catch_0
    .catchall {:try_start_5 .. :try_end_5} :catchall_0

    move-object/from16 v19, v2

    move-object/from16 v20, v14

    const/16 v16, 0x1

    goto :goto_4

    :catch_0
    move-exception v0

    move-object/from16 v19, v2

    move-object v2, v0

    .line 3097
    :try_start_6
    new-instance v0, Ljava/lang/StringBuilder;

    move-object/from16 v20, v14

    const-string v14, "Plugin-MultiDex Failed to extract entry from "

    invoke-direct {v0, v14}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    .line 3098
    invoke-virtual {v9}, Lcom/bytedance/pangle/e/g$a;->getAbsolutePath()Ljava/lang/String;

    move-result-object v14

    invoke-virtual {v0, v14}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    .line 3097
    invoke-static {v5, v0, v2}, Lcom/bytedance/pangle/log/ZeusLogger;->w(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)V

    :goto_4
    add-int/lit8 v1, v1, 0x1

    .line 3105
    new-instance v0, Ljava/lang/StringBuilder;

    const-string v2, "Plugin-MultiDex Extraction "

    invoke-direct {v0, v2}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    if-eqz v16, :cond_2

    const-string v2, "succeeded"

    goto :goto_5

    :cond_2
    const-string v2, "failed"

    :goto_5
    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v2, " \'"

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 3107
    invoke-virtual {v9}, Lcom/bytedance/pangle/e/g$a;->getAbsolutePath()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v2, "\': length "

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    move v14, v1

    invoke-virtual {v9}, Lcom/bytedance/pangle/e/g$a;->length()J

    move-result-wide v1

    invoke-virtual {v0, v1, v2}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    .line 3105
    invoke-static {v5, v0}, Lcom/bytedance/pangle/log/ZeusLogger;->i(Ljava/lang/String;Ljava/lang/String;)V

    if-nez v16, :cond_3

    .line 3111
    invoke-virtual {v9}, Lcom/bytedance/pangle/e/g$a;->delete()Z

    .line 3112
    invoke-virtual {v9}, Lcom/bytedance/pangle/e/g$a;->exists()Z

    move-result v0

    if-eqz v0, :cond_3

    .line 3113
    new-instance v0, Ljava/lang/StringBuilder;

    const-string v1, "Plugin-MultiDex Failed to delete corrupted secondary dex \'"

    invoke-direct {v0, v1}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    .line 3115
    invoke-virtual {v9}, Lcom/bytedance/pangle/e/g$a;->getPath()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v1, "\'"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    .line 3113
    invoke-static {v5, v0}, Lcom/bytedance/pangle/log/ZeusLogger;->w(Ljava/lang/String;Ljava/lang/String;)V

    :cond_3
    move v1, v14

    move-object/from16 v2, v19

    move-object/from16 v14, v20

    goto/16 :goto_3

    :cond_4
    move-object/from16 v19, v2

    if-eqz v16, :cond_5

    .line 3126
    invoke-interface {v6, v9}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    add-int/lit8 v13, v13, 0x1

    move-object/from16 v14, p0

    move-object/from16 v9, v17

    move-object/from16 v1, v18

    move-object/from16 v2, v19

    goto/16 :goto_0

    .line 3122
    :cond_5
    new-instance v0, Ljava/io/IOException;

    new-instance v1, Ljava/lang/StringBuilder;

    const-string v2, "Could not create zip file "

    invoke-direct {v1, v2}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {v9}, Lcom/bytedance/pangle/e/g$a;->getAbsolutePath()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v2, " for secondary dex ("

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v13}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v2, ")"

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-direct {v0, v1}, Ljava/io/IOException;-><init>(Ljava/lang/String;)V

    throw v0

    :cond_6
    move-object/from16 v17, v9

    .line 3132
    invoke-virtual/range {p0 .. p0}, Ljava/io/File;->getName()Ljava/lang/String;

    .line 3239
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v0, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v1, "-"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v4}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    .line 3240
    invoke-static {}, Lcom/bytedance/pangle/e/g;->a()Landroid/content/SharedPreferences;

    move-result-object v1

    .line 3241
    invoke-interface {v1}, Landroid/content/SharedPreferences;->edit()Landroid/content/SharedPreferences$Editor;

    move-result-object v1

    .line 3242
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v2, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v0, ".dex.number"

    invoke-virtual {v2, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-interface {v6}, Ljava/util/List;->size()I

    move-result v2

    invoke-interface {v1, v0, v2}, Landroid/content/SharedPreferences$Editor;->putInt(Ljava/lang/String;I)Landroid/content/SharedPreferences$Editor;

    .line 3243
    invoke-interface {v1}, Landroid/content/SharedPreferences$Editor;->commit()Z
    :try_end_6
    .catchall {:try_start_6 .. :try_end_6} :catchall_0

    .line 3135
    :try_start_7
    invoke-static {v7}, Lcom/bytedance/pangle/util/g;->a(Ljava/util/zip/ZipFile;)V

    .line 2260
    invoke-static {}, Lcom/bytedance/pangle/Zeus;->getAppApplication()Landroid/app/Application;

    move-result-object v0

    invoke-static {v0}, Lcom/bytedance/pangle/e/b;->a(Landroid/content/Context;)Landroid/content/SharedPreferences;

    move-result-object v0

    invoke-interface {v0}, Landroid/content/SharedPreferences;->edit()Landroid/content/SharedPreferences$Editor;

    move-result-object v0

    invoke-interface {v0, v3, v4}, Landroid/content/SharedPreferences$Editor;->putInt(Ljava/lang/String;I)Landroid/content/SharedPreferences$Editor;

    move-result-object v0

    invoke-interface {v0}, Landroid/content/SharedPreferences$Editor;->apply()V

    .line 2261
    invoke-static {}, Lcom/bytedance/pangle/e/f;->a()V

    goto/16 :goto_9

    :catchall_0
    move-exception v0

    goto :goto_6

    :catchall_1
    move-exception v0

    move-object/from16 v17, v9

    :goto_6
    move-object v6, v7

    goto :goto_7

    :catchall_2
    move-exception v0

    move-object/from16 v17, v9

    .line 3135
    :goto_7
    invoke-static {v6}, Lcom/bytedance/pangle/util/g;->a(Ljava/util/zip/ZipFile;)V

    .line 3136
    throw v0

    :cond_7
    move-object/from16 v17, v9

    .line 3056
    new-instance v0, Ljava/io/IOException;

    new-instance v1, Ljava/lang/StringBuilder;

    const-string v2, "Could not check apk info "

    invoke-direct {v1, v2}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual/range {p0 .. p0}, Ljava/io/File;->getAbsolutePath()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-direct {v0, v1}, Ljava/io/IOException;-><init>(Ljava/lang/String;)V

    throw v0

    :cond_8
    move-object/from16 v17, v9

    .line 2262
    invoke-static {}, Lcom/bytedance/pangle/util/i;->d()Z

    move-result v0

    if-nez v0, :cond_a

    invoke-static {}, Lcom/bytedance/pangle/util/i;->f()Z

    move-result v0

    if-eqz v0, :cond_9

    goto :goto_8

    .line 2267
    :cond_9
    invoke-static {}, Lcom/bytedance/pangle/util/i;->e()Z

    move-result v0

    if-eqz v0, :cond_b

    .line 2269
    invoke-static/range {p1 .. p2}, Lcom/bytedance/pangle/d/c;->c(Ljava/lang/String;I)Ljava/lang/String;

    move-result-object v0

    .line 2270
    invoke-static/range {p1 .. p2}, Lcom/bytedance/pangle/d/c;->b(Ljava/lang/String;I)Ljava/lang/String;

    move-result-object v1

    .line 2271
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v2, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    sget-object v0, Ljava/io/File;->separator:Ljava/lang/String;

    invoke-virtual {v2, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-static {v1}, Lcom/bytedance/pangle/e/b;->a(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v2, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v1, v0}, Lcom/bytedance/pangle/e/b;->a(Ljava/lang/String;Ljava/lang/String;)V

    goto :goto_9

    .line 2265
    :cond_a
    :goto_8
    invoke-static {}, Lcom/bytedance/pangle/Zeus;->getAppApplication()Landroid/app/Application;

    move-result-object v0

    invoke-static {v0}, Lcom/bytedance/pangle/e/b;->a(Landroid/content/Context;)Landroid/content/SharedPreferences;

    move-result-object v0

    invoke-interface {v0}, Landroid/content/SharedPreferences;->edit()Landroid/content/SharedPreferences$Editor;

    move-result-object v0

    invoke-interface {v0, v3, v4}, Landroid/content/SharedPreferences$Editor;->putInt(Ljava/lang/String;I)Landroid/content/SharedPreferences$Editor;

    move-result-object v0

    invoke-interface {v0}, Landroid/content/SharedPreferences$Editor;->apply()V

    .line 2266
    invoke-static {}, Lcom/bytedance/pangle/e/f;->a()V
    :try_end_7
    .catch Ljava/lang/Exception; {:try_start_7 .. :try_end_7} :catch_1
    .catchall {:try_start_7 .. :try_end_7} :catchall_3

    .line 2277
    :cond_b
    :goto_9
    invoke-virtual {v8, v10}, Ljava/lang/StringBuffer;->append(Ljava/lang/String;)Ljava/lang/StringBuffer;

    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v0

    sub-long/2addr v0, v11

    invoke-virtual {v8, v0, v1}, Ljava/lang/StringBuffer;->append(J)Ljava/lang/StringBuffer;

    move-object/from16 v9, v17

    invoke-virtual {v8, v9}, Ljava/lang/StringBuffer;->append(Ljava/lang/String;)Ljava/lang/StringBuffer;

    return-void

    :catchall_3
    move-exception v0

    move-object/from16 v9, v17

    goto :goto_b

    :catch_1
    move-exception v0

    move-object/from16 v9, v17

    goto :goto_a

    :catchall_4
    move-exception v0

    goto :goto_b

    :catch_2
    move-exception v0

    .line 2274
    :goto_a
    :try_start_8
    sget-object v1, Lcom/bytedance/pangle/c/b;->f:Ljava/lang/String;

    sget v2, Lcom/bytedance/pangle/c/b$a;->v:I

    const-wide/16 v5, -0x1

    const/4 v7, 0x0

    move-object/from16 v3, p1

    move/from16 v4, p2

    invoke-static/range {v1 .. v7}, Lcom/bytedance/pangle/plugin/b;->a(Ljava/lang/String;ILjava/lang/String;IJLjava/lang/String;)V

    .line 2275
    new-instance v1, Lcom/bytedance/pangle/plugin/b$a;

    const-string v2, "dexOpt\u5931\u8d25"

    const/4 v3, 0x0

    invoke-direct {v1, v2, v0, v3}, Lcom/bytedance/pangle/plugin/b$a;-><init>(Ljava/lang/String;Ljava/lang/Throwable;B)V

    throw v1
    :try_end_8
    .catchall {:try_start_8 .. :try_end_8} :catchall_4

    .line 2277
    :goto_b
    invoke-virtual {v8, v10}, Ljava/lang/StringBuffer;->append(Ljava/lang/String;)Ljava/lang/StringBuffer;

    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v1

    sub-long/2addr v1, v11

    invoke-virtual {v8, v1, v2}, Ljava/lang/StringBuffer;->append(J)Ljava/lang/StringBuffer;

    invoke-virtual {v8, v9}, Ljava/lang/StringBuffer;->append(Ljava/lang/String;)Ljava/lang/StringBuffer;

    .line 2278
    throw v0
.end method

.method private static f(Ljava/io/File;Ljava/lang/String;ILjava/lang/StringBuffer;)Ljava/util/Map;
    .locals 15
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/io/File;",
            "Ljava/lang/String;",
            "I",
            "Ljava/lang/StringBuffer;",
            ")",
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/util/List<",
            "Ljava/util/zip/ZipEntry;",
            ">;>;"
        }
    .end annotation

    move-object/from16 v1, p3

    const-string v2, "\u63d2\u4ef6\u5305\u5305\u542bso\u4e0d\u7b26\u5408\u5bbf\u4e3bABI\u7c7b\u578b"

    const-string v3, ";"

    const-string v4, "checkMatchHostAbi cost:"

    .line 171
    invoke-static {}, Lcom/bytedance/pangle/GlobalParam;->getInstance()Lcom/bytedance/pangle/GlobalParam;

    move-result-object v0

    invoke-virtual {v0}, Lcom/bytedance/pangle/GlobalParam;->checkMatchHostAbi()Z

    move-result v0

    if-eqz v0, :cond_1

    .line 172
    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v5

    const/4 v7, 0x0

    .line 174
    :try_start_0
    invoke-static {p0}, Lcom/bytedance/pangle/d/b;->a(Ljava/io/File;)Lcom/bytedance/pangle/util/e;

    move-result-object v0

    .line 175
    iget-object v8, v0, Lcom/bytedance/pangle/util/e;->a:Ljava/lang/Object;

    check-cast v8, Ljava/lang/Boolean;

    invoke-virtual {v8}, Ljava/lang/Boolean;->booleanValue()Z

    move-result v8

    .line 176
    iget-object v0, v0, Lcom/bytedance/pangle/util/e;->b:Ljava/lang/Object;

    check-cast v0, Ljava/util/Map;
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    if-eqz v8, :cond_0

    .line 186
    invoke-virtual {v1, v4}, Ljava/lang/StringBuffer;->append(Ljava/lang/String;)Ljava/lang/StringBuffer;

    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v7

    sub-long/2addr v7, v5

    invoke-virtual {v1, v7, v8}, Ljava/lang/StringBuffer;->append(J)Ljava/lang/StringBuffer;

    invoke-virtual {v1, v3}, Ljava/lang/StringBuffer;->append(Ljava/lang/String;)Ljava/lang/StringBuffer;

    return-object v0

    .line 178
    :cond_0
    :try_start_1
    new-instance v0, Lcom/bytedance/pangle/plugin/b$a;

    invoke-direct {v0, v2, v7}, Lcom/bytedance/pangle/plugin/b$a;-><init>(Ljava/lang/String;B)V

    throw v0
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_0
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    :catchall_0
    move-exception v0

    goto :goto_0

    :catch_0
    move-exception v0

    .line 182
    :try_start_2
    sget-object v8, Lcom/bytedance/pangle/c/b;->f:Ljava/lang/String;

    sget v9, Lcom/bytedance/pangle/c/b$a;->w:I

    const-wide/16 v12, -0x1

    const/4 v14, 0x0

    move-object/from16 v10, p1

    move/from16 v11, p2

    invoke-static/range {v8 .. v14}, Lcom/bytedance/pangle/plugin/b;->a(Ljava/lang/String;ILjava/lang/String;IJLjava/lang/String;)V

    .line 183
    sget-object v8, Lcom/bytedance/pangle/plugin/b;->a:Lcom/bytedance/pangle/h;

    const/16 v9, 0x44c

    const/4 v10, -0x5

    move-object/from16 v11, p1

    move/from16 v12, p2

    move-object v13, v0

    invoke-virtual/range {v8 .. v13}, Lcom/bytedance/pangle/h;->a(IILjava/lang/String;ILjava/lang/Throwable;)V

    .line 184
    new-instance v8, Lcom/bytedance/pangle/plugin/b$a;

    invoke-direct {v8, v2, v0, v7}, Lcom/bytedance/pangle/plugin/b$a;-><init>(Ljava/lang/String;Ljava/lang/Throwable;B)V

    throw v8
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_0

    .line 186
    :goto_0
    invoke-virtual {v1, v4}, Ljava/lang/StringBuffer;->append(Ljava/lang/String;)Ljava/lang/StringBuffer;

    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v7

    sub-long/2addr v7, v5

    invoke-virtual {v1, v7, v8}, Ljava/lang/StringBuffer;->append(J)Ljava/lang/StringBuffer;

    invoke-virtual {v1, v3}, Ljava/lang/StringBuffer;->append(Ljava/lang/String;)Ljava/lang/StringBuffer;

    .line 187
    throw v0

    :cond_1
    const/4 v0, 0x0

    return-object v0
.end method

.method private static g(Ljava/io/File;Ljava/lang/String;ILjava/lang/StringBuffer;)Ljava/lang/String;
    .locals 11

    const-string v0, ";"

    const-string v1, "copyApk cost:"

    .line 223
    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v2

    .line 225
    invoke-static {p1, p2}, Lcom/bytedance/pangle/d/c;->b(Ljava/lang/String;I)Ljava/lang/String;

    move-result-object v4

    .line 227
    :try_start_0
    invoke-virtual {p0}, Ljava/io/File;->getAbsolutePath()Ljava/lang/String;

    move-result-object p0

    invoke-static {p0, v4}, Lcom/bytedance/pangle/util/h;->a(Ljava/lang/String;Ljava/lang/String;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 234
    invoke-virtual {p3, v1}, Ljava/lang/StringBuffer;->append(Ljava/lang/String;)Ljava/lang/StringBuffer;

    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide p0

    sub-long/2addr p0, v2

    invoke-virtual {p3, p0, p1}, Ljava/lang/StringBuffer;->append(J)Ljava/lang/StringBuffer;

    invoke-virtual {p3, v0}, Ljava/lang/StringBuffer;->append(Ljava/lang/String;)Ljava/lang/StringBuffer;

    return-object v4

    :catchall_0
    move-exception p0

    goto :goto_0

    :catch_0
    move-exception p0

    .line 230
    :try_start_1
    sget-object v4, Lcom/bytedance/pangle/c/b;->f:Ljava/lang/String;

    sget v5, Lcom/bytedance/pangle/c/b$a;->s:I

    const-wide/16 v8, -0x1

    const/4 v10, 0x0

    move-object v6, p1

    move v7, p2

    invoke-static/range {v4 .. v10}, Lcom/bytedance/pangle/plugin/b;->a(Ljava/lang/String;ILjava/lang/String;IJLjava/lang/String;)V

    .line 231
    sget-object v4, Lcom/bytedance/pangle/plugin/b;->a:Lcom/bytedance/pangle/h;

    const/16 v5, 0x44c

    const/4 v6, -0x6

    move-object v7, p1

    move v8, p2

    move-object v9, p0

    invoke-virtual/range {v4 .. v9}, Lcom/bytedance/pangle/h;->a(IILjava/lang/String;ILjava/lang/Throwable;)V

    .line 232
    new-instance p1, Lcom/bytedance/pangle/plugin/b$a;

    const-string p2, "\u5b89\u88c5\u5305\u62f7\u8d1d\u5931\u8d25"

    const/4 v4, 0x0

    invoke-direct {p1, p2, p0, v4}, Lcom/bytedance/pangle/plugin/b$a;-><init>(Ljava/lang/String;Ljava/lang/Throwable;B)V

    throw p1
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    .line 234
    :goto_0
    invoke-virtual {p3, v1}, Ljava/lang/StringBuffer;->append(Ljava/lang/String;)Ljava/lang/StringBuffer;

    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide p1

    sub-long/2addr p1, v2

    invoke-virtual {p3, p1, p2}, Ljava/lang/StringBuffer;->append(J)Ljava/lang/StringBuffer;

    invoke-virtual {p3, v0}, Ljava/lang/StringBuffer;->append(Ljava/lang/String;)Ljava/lang/StringBuffer;

    .line 235
    throw p0
.end method
