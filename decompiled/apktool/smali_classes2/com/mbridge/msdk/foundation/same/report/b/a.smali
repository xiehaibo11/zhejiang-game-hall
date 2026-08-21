.class public Lcom/mbridge/msdk/foundation/same/report/b/a;
.super Ljava/lang/Object;
.source "CrashHandlerUtil.java"

# interfaces
.implements Ljava/lang/Thread$UncaughtExceptionHandler;


# static fields
.field private static volatile c:Lcom/mbridge/msdk/foundation/same/report/b/a;


# instance fields
.field a:Landroid/os/Handler;

.field private b:Ljava/lang/ref/WeakReference;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/lang/ref/WeakReference<",
            "Landroid/content/Context;",
            ">;"
        }
    .end annotation
.end field

.field private d:Ljava/lang/Thread$UncaughtExceptionHandler;

.field private e:Ljava/lang/Throwable;


# direct methods
.method private constructor <init>(Landroid/content/Context;)V
    .locals 1

    .line 99
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 128
    new-instance v0, Lcom/mbridge/msdk/foundation/same/report/b/a$1;

    invoke-direct {v0, p0}, Lcom/mbridge/msdk/foundation/same/report/b/a$1;-><init>(Lcom/mbridge/msdk/foundation/same/report/b/a;)V

    iput-object v0, p0, Lcom/mbridge/msdk/foundation/same/report/b/a;->a:Landroid/os/Handler;

    .line 100
    new-instance v0, Ljava/lang/ref/WeakReference;

    invoke-direct {v0, p1}, Ljava/lang/ref/WeakReference;-><init>(Ljava/lang/Object;)V

    iput-object v0, p0, Lcom/mbridge/msdk/foundation/same/report/b/a;->b:Ljava/lang/ref/WeakReference;

    return-void
.end method

.method public static a(Landroid/content/Context;)Lcom/mbridge/msdk/foundation/same/report/b/a;
    .locals 2

    .line 107
    sget-object v0, Lcom/mbridge/msdk/foundation/same/report/b/a;->c:Lcom/mbridge/msdk/foundation/same/report/b/a;

    if-nez v0, :cond_1

    .line 108
    const-class v0, Lcom/mbridge/msdk/foundation/same/report/b/a;

    monitor-enter v0

    .line 109
    :try_start_0
    sget-object v1, Lcom/mbridge/msdk/foundation/same/report/b/a;->c:Lcom/mbridge/msdk/foundation/same/report/b/a;

    if-nez v1, :cond_0

    .line 110
    new-instance v1, Lcom/mbridge/msdk/foundation/same/report/b/a;

    invoke-direct {v1, p0}, Lcom/mbridge/msdk/foundation/same/report/b/a;-><init>(Landroid/content/Context;)V

    sput-object v1, Lcom/mbridge/msdk/foundation/same/report/b/a;->c:Lcom/mbridge/msdk/foundation/same/report/b/a;

    .line 112
    :cond_0
    monitor-exit v0

    goto :goto_0

    :catchall_0
    move-exception p0

    monitor-exit v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    throw p0

    .line 114
    :cond_1
    :goto_0
    sget-object p0, Lcom/mbridge/msdk/foundation/same/report/b/a;->c:Lcom/mbridge/msdk/foundation/same/report/b/a;

    return-object p0
.end method

.method private a(Ljava/lang/Throwable;)Ljava/lang/String;
    .locals 4

    .line 312
    invoke-virtual {p1}, Ljava/lang/Throwable;->getStackTrace()[Ljava/lang/StackTraceElement;

    move-result-object p1

    .line 313
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const/4 v1, 0x0

    .line 314
    :goto_0
    array-length v2, p1

    if-ge v1, v2, :cond_0

    .line 315
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    aget-object v3, p1, v1

    invoke-virtual {v3}, Ljava/lang/StackTraceElement;->toString()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v3, "\n"

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    add-int/lit8 v1, v1, 0x1

    goto :goto_0

    .line 317
    :cond_0
    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    return-object p1
.end method

.method private a(Ljava/lang/Throwable;Ljava/lang/String;)Ljava/lang/String;
    .locals 17

    move-object/from16 v1, p0

    const-string v0, "appname"

    const-string v2, "appversionname"

    const-string v3, "-1"

    const-string v4, "appversioncode"

    const-string v5, "osversion"

    const-string v6, ""

    .line 159
    :try_start_0
    new-instance v7, Lorg/json/JSONObject;

    invoke-direct {v7}, Lorg/json/JSONObject;-><init>()V

    .line 160
    iget-object v8, v1, Lcom/mbridge/msdk/foundation/same/report/b/a;->b:Ljava/lang/ref/WeakReference;

    invoke-virtual {v8}, Ljava/lang/ref/WeakReference;->get()Ljava/lang/Object;

    move-result-object v8

    check-cast v8, Landroid/content/Context;

    if-nez v8, :cond_0

    return-object v6

    .line 163
    :cond_0
    invoke-static {}, Ljava/lang/Runtime;->getRuntime()Ljava/lang/Runtime;

    move-result-object v9

    invoke-virtual {v9}, Ljava/lang/Runtime;->maxMemory()J

    move-result-wide v9

    long-to-double v9, v9

    const-wide/high16 v11, 0x3ff0000000000000L    # 1.0

    mul-double/2addr v9, v11

    const-wide/high16 v13, 0x4130000000000000L    # 1048576.0

    div-double/2addr v9, v13

    double-to-float v9, v9

    .line 164
    invoke-static {}, Ljava/lang/Runtime;->getRuntime()Ljava/lang/Runtime;

    move-result-object v10

    invoke-virtual {v10}, Ljava/lang/Runtime;->totalMemory()J

    move-result-wide v13

    long-to-double v13, v13

    mul-double/2addr v13, v11

    const-wide/high16 v15, 0x4130000000000000L    # 1048576.0

    div-double/2addr v13, v15

    double-to-float v10, v13

    .line 165
    invoke-static {}, Ljava/lang/Runtime;->getRuntime()Ljava/lang/Runtime;

    move-result-object v13

    invoke-virtual {v13}, Ljava/lang/Runtime;->freeMemory()J

    move-result-wide v13

    long-to-double v13, v13

    mul-double/2addr v13, v11

    div-double/2addr v13, v15

    double-to-float v11, v13

    .line 166
    invoke-static {}, Landroid/os/Environment;->getExternalStorageDirectory()Ljava/io/File;

    move-result-object v12

    .line 167
    invoke-virtual {v12}, Ljava/io/File;->getUsableSpace()J

    move-result-wide v13

    move-object v15, v2

    move-object/from16 v16, v3

    .line 168
    invoke-virtual {v12}, Ljava/io/File;->getTotalSpace()J

    move-result-wide v2

    .line 169
    invoke-static {v8, v13, v14}, Landroid/text/format/Formatter;->formatFileSize(Landroid/content/Context;J)Ljava/lang/String;

    move-result-object v12

    .line 170
    invoke-static {v8, v2, v3}, Landroid/text/format/Formatter;->formatFileSize(Landroid/content/Context;J)Ljava/lang/String;

    move-result-object v2

    const-string v3, "max_memory"

    .line 171
    invoke-static {v9}, Ljava/lang/String;->valueOf(F)Ljava/lang/String;

    move-result-object v9

    invoke-virtual {v7, v3, v9}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v3, "memoryby_app"

    .line 172
    invoke-static {v10}, Ljava/lang/String;->valueOf(F)Ljava/lang/String;

    move-result-object v9

    invoke-virtual {v7, v3, v9}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v3, "remaining_memory"

    float-to-double v9, v11

    .line 173
    invoke-virtual {v7, v3, v9, v10}, Lorg/json/JSONObject;->put(Ljava/lang/String;D)Lorg/json/JSONObject;

    const-string v3, "sdcard_remainder"

    .line 174
    invoke-virtual {v7, v3, v12}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v3, "totalspacestr"

    .line 175
    invoke-virtual {v7, v3, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v2, "crashtime"

    move-object/from16 v3, p2

    .line 176
    invoke-virtual {v7, v2, v3}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 177
    invoke-static {}, Lcom/mbridge/msdk/foundation/a/a/a;->a()Lcom/mbridge/msdk/foundation/a/a/a;

    move-result-object v2

    const-string v3, "sdk_app_id"

    invoke-virtual {v2, v3}, Lcom/mbridge/msdk/foundation/a/a/a;->b(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    .line 178
    invoke-static {v2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v3

    if-nez v3, :cond_1

    const-string v3, "appid"

    .line 179
    invoke-virtual {v7, v3, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 182
    :cond_1
    :try_start_1
    sget v2, Landroid/os/Build$VERSION;->SDK_INT:I

    invoke-virtual {v7, v5, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    .line 183
    invoke-direct {v1, v8}, Lcom/mbridge/msdk/foundation/same/report/b/a;->b(Landroid/content/Context;)I

    move-result v2

    invoke-virtual {v7, v4, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    .line 184
    invoke-static {v8}, Lcom/mbridge/msdk/foundation/same/report/b/a;->c(Landroid/content/Context;)Ljava/lang/String;

    move-result-object v2
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_0
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    move-object v3, v15

    :try_start_2
    invoke-virtual {v7, v3, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 185
    invoke-direct {v1, v8}, Lcom/mbridge/msdk/foundation/same/report/b/a;->d(Landroid/content/Context;)Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v7, v0, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;
    :try_end_2
    .catch Ljava/lang/Exception; {:try_start_2 .. :try_end_2} :catch_1
    .catchall {:try_start_2 .. :try_end_2} :catchall_0

    goto :goto_0

    :catch_0
    move-object v3, v15

    :catch_1
    const/4 v2, 0x0

    .line 187
    :try_start_3
    invoke-virtual {v7, v5, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    move-object/from16 v2, v16

    .line 188
    invoke-virtual {v7, v4, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 189
    invoke-virtual {v7, v3, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 190
    invoke-virtual {v7, v0, v6}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 192
    :goto_0
    new-instance v0, Ljava/io/StringWriter;

    invoke-direct {v0}, Ljava/io/StringWriter;-><init>()V

    .line 193
    new-instance v2, Ljava/io/PrintWriter;

    invoke-direct {v2, v0}, Ljava/io/PrintWriter;-><init>(Ljava/io/Writer;)V

    move-object/from16 v3, p1

    .line 194
    invoke-virtual {v3, v2}, Ljava/lang/Throwable;->printStackTrace(Ljava/io/PrintWriter;)V

    const-string v2, "crashinfo"

    .line 195
    invoke-virtual {v0}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v7, v2, v0}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 196
    invoke-virtual {v7}, Lorg/json/JSONObject;->toString()Ljava/lang/String;

    move-result-object v0

    .line 197
    new-instance v2, Ljava/lang/StringBuffer;

    invoke-direct {v2}, Ljava/lang/StringBuffer;-><init>()V

    const-string v3, "key=2000052"

    .line 198
    invoke-virtual {v2, v3}, Ljava/lang/StringBuffer;->append(Ljava/lang/String;)Ljava/lang/StringBuffer;

    .line 199
    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    const-string v4, "&exception="

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v2, v0}, Ljava/lang/StringBuffer;->append(Ljava/lang/String;)Ljava/lang/StringBuffer;

    .line 200
    invoke-virtual {v2}, Ljava/lang/StringBuffer;->toString()Ljava/lang/String;

    move-result-object v0
    :try_end_3
    .catchall {:try_start_3 .. :try_end_3} :catchall_0

    return-object v0

    :catchall_0
    move-exception v0

    .line 202
    invoke-virtual {v0}, Ljava/lang/Throwable;->printStackTrace()V

    return-object v6
.end method

.method static synthetic a(Lcom/mbridge/msdk/foundation/same/report/b/a;)Ljava/lang/ref/WeakReference;
    .locals 0

    .line 52
    iget-object p0, p0, Lcom/mbridge/msdk/foundation/same/report/b/a;->b:Ljava/lang/ref/WeakReference;

    return-object p0
.end method

.method private a(Ljava/lang/String;Ljava/lang/String;)Ljava/util/List;
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            ")",
            "Ljava/util/List<",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation

    .line 353
    new-instance v0, Ljava/util/ArrayList;

    invoke-direct {v0}, Ljava/util/ArrayList;-><init>()V

    .line 355
    :try_start_0
    invoke-static {p2}, Ljava/util/regex/Pattern;->compile(Ljava/lang/String;)Ljava/util/regex/Pattern;

    move-result-object p2

    .line 356
    invoke-virtual {p2, p1}, Ljava/util/regex/Pattern;->matcher(Ljava/lang/CharSequence;)Ljava/util/regex/Matcher;

    move-result-object p1

    .line 357
    :goto_0
    invoke-virtual {p1}, Ljava/util/regex/Matcher;->find()Z

    move-result p2

    if-eqz p2, :cond_0

    const/4 p2, 0x1

    .line 359
    invoke-virtual {p1, p2}, Ljava/util/regex/Matcher;->group(I)Ljava/lang/String;

    move-result-object p2

    invoke-interface {v0, p2}, Ljava/util/List;->add(Ljava/lang/Object;)Z
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p1

    .line 363
    invoke-virtual {p1}, Ljava/lang/Exception;->printStackTrace()V

    :cond_0
    return-object v0
.end method

.method private a(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;Ljava/lang/Thread;)V
    .locals 4

    .line 327
    invoke-virtual {p1, p2}, Ljava/lang/String;->contains(Ljava/lang/CharSequence;)Z

    move-result p1

    if-eqz p1, :cond_0

    .line 328
    invoke-direct {p0}, Lcom/mbridge/msdk/foundation/same/report/b/a;->b()Ljava/util/HashMap;

    move-result-object p1

    if-eqz p1, :cond_1

    const-string p2, "file"

    .line 329
    invoke-virtual {p1, p2}, Ljava/util/HashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    if-eqz v0, :cond_1

    .line 330
    invoke-static {}, Landroid/os/Message;->obtain()Landroid/os/Message;

    move-result-object v0

    .line 331
    new-instance v1, Ljava/util/HashMap;

    invoke-direct {v1}, Ljava/util/HashMap;-><init>()V

    const-string v2, "time"

    .line 332
    invoke-virtual {p1, v2}, Ljava/util/HashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Ljava/lang/String;

    invoke-direct {p0, p3, v2}, Lcom/mbridge/msdk/foundation/same/report/b/a;->a(Ljava/lang/Throwable;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    const-string v3, "crashinfo"

    invoke-virtual {v1, v3, v2}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 333
    invoke-virtual {p1, p2}, Ljava/util/HashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p1

    invoke-virtual {v1, p2, p1}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 334
    iput-object v1, v0, Landroid/os/Message;->obj:Ljava/lang/Object;

    const/16 p1, 0x65

    .line 335
    iput p1, v0, Landroid/os/Message;->what:I

    .line 336
    iget-object p1, p0, Lcom/mbridge/msdk/foundation/same/report/b/a;->a:Landroid/os/Handler;

    invoke-virtual {p1, v0}, Landroid/os/Handler;->sendMessage(Landroid/os/Message;)Z

    .line 337
    invoke-direct {p0, p4, p3}, Lcom/mbridge/msdk/foundation/same/report/b/a;->a(Ljava/lang/Thread;Ljava/lang/Throwable;)V

    goto :goto_0

    .line 340
    :cond_0
    iget-object p1, p0, Lcom/mbridge/msdk/foundation/same/report/b/a;->d:Ljava/lang/Thread$UncaughtExceptionHandler;

    if-eqz p1, :cond_1

    .line 341
    invoke-interface {p1, p4, p3}, Ljava/lang/Thread$UncaughtExceptionHandler;->uncaughtException(Ljava/lang/Thread;Ljava/lang/Throwable;)V

    :cond_1
    :goto_0
    return-void
.end method

.method private a(Ljava/lang/Thread;Ljava/lang/Throwable;)V
    .locals 0

    const-wide/16 p1, 0x7d0

    .line 374
    :try_start_0
    invoke-static {p1, p2}, Ljava/lang/Thread;->sleep(J)V
    :try_end_0
    .catch Ljava/lang/InterruptedException; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p1

    .line 376
    invoke-virtual {p1}, Ljava/lang/InterruptedException;->printStackTrace()V

    .line 378
    :goto_0
    invoke-static {}, Landroid/os/Process;->myPid()I

    move-result p1

    invoke-static {p1}, Landroid/os/Process;->killProcess(I)V

    return-void
.end method

.method private b(Landroid/content/Context;)I
    .locals 2

    .line 217
    invoke-virtual {p1}, Landroid/content/Context;->getPackageManager()Landroid/content/pm/PackageManager;

    move-result-object v0

    const/4 v1, 0x0

    .line 220
    :try_start_0
    invoke-virtual {p1}, Landroid/content/Context;->getPackageName()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {v0, p1, v1}, Landroid/content/pm/PackageManager;->getPackageInfo(Ljava/lang/String;I)Landroid/content/pm/PackageInfo;

    move-result-object p1

    .line 222
    iget p1, p1, Landroid/content/pm/PackageInfo;->versionCode:I
    :try_end_0
    .catch Landroid/content/pm/PackageManager$NameNotFoundException; {:try_start_0 .. :try_end_0} :catch_0

    return p1

    :catch_0
    move-exception p1

    .line 224
    invoke-virtual {p1}, Landroid/content/pm/PackageManager$NameNotFoundException;->printStackTrace()V

    return v1
.end method

.method private b()Ljava/util/HashMap;
    .locals 8
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "()",
            "Ljava/util/HashMap<",
            "Ljava/lang/String;",
            "Ljava/lang/Object;",
            ">;"
        }
    .end annotation

    .line 385
    new-instance v0, Ljava/util/HashMap;

    invoke-direct {v0}, Ljava/util/HashMap;-><init>()V

    .line 386
    iget-object v1, p0, Lcom/mbridge/msdk/foundation/same/report/b/a;->e:Ljava/lang/Throwable;

    const/4 v2, 0x0

    if-nez v1, :cond_0

    return-object v2

    .line 389
    :cond_0
    sget-object v1, Lcom/mbridge/msdk/foundation/same/b/c;->i:Lcom/mbridge/msdk/foundation/same/b/c;

    invoke-static {v1}, Lcom/mbridge/msdk/foundation/same/b/e;->b(Lcom/mbridge/msdk/foundation/same/b/c;)Ljava/lang/String;

    move-result-object v1

    .line 390
    new-instance v3, Ljava/io/File;

    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v4, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v5, "/"

    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v4

    invoke-direct {v3, v4}, Ljava/io/File;-><init>(Ljava/lang/String;)V

    .line 391
    invoke-virtual {v3}, Ljava/io/File;->exists()Z

    move-result v4

    if-nez v4, :cond_1

    .line 392
    invoke-virtual {v3}, Ljava/io/File;->mkdirs()Z

    .line 394
    :cond_1
    new-instance v3, Ljava/text/SimpleDateFormat;

    const-string v4, "yyyy-MM-dd HH:mm:ss"

    invoke-direct {v3, v4}, Ljava/text/SimpleDateFormat;-><init>(Ljava/lang/String;)V

    new-instance v4, Ljava/util/Date;

    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v6

    invoke-direct {v4, v6, v7}, Ljava/util/Date;-><init>(J)V

    invoke-virtual {v3, v4}, Ljava/text/SimpleDateFormat;->format(Ljava/util/Date;)Ljava/lang/String;

    move-result-object v3

    .line 395
    new-instance v4, Ljava/io/File;

    new-instance v6, Ljava/lang/StringBuilder;

    invoke-direct {v6}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v6, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v6, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v1, "sdkcrash"

    invoke-virtual {v6, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v6, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v1, ".txt"

    invoke-virtual {v6, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v6}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-direct {v4, v1}, Ljava/io/File;-><init>(Ljava/lang/String;)V

    .line 397
    :try_start_0
    new-instance v1, Ljava/io/PrintWriter;

    new-instance v5, Ljava/io/BufferedWriter;

    new-instance v6, Ljava/io/FileWriter;

    invoke-direct {v6, v4}, Ljava/io/FileWriter;-><init>(Ljava/io/File;)V

    invoke-direct {v5, v6}, Ljava/io/BufferedWriter;-><init>(Ljava/io/Writer;)V

    invoke-direct {v1, v5}, Ljava/io/PrintWriter;-><init>(Ljava/io/Writer;)V

    .line 398
    iget-object v5, p0, Lcom/mbridge/msdk/foundation/same/report/b/a;->e:Ljava/lang/Throwable;

    invoke-direct {p0, v5, v3}, Lcom/mbridge/msdk/foundation/same/report/b/a;->a(Ljava/lang/Throwable;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v5

    invoke-virtual {v1, v5}, Ljava/io/PrintWriter;->println(Ljava/lang/String;)V

    const-string v5, "===="

    .line 399
    invoke-virtual {v1, v5}, Ljava/io/PrintWriter;->println(Ljava/lang/String;)V

    .line 400
    iget-object v5, p0, Lcom/mbridge/msdk/foundation/same/report/b/a;->e:Ljava/lang/Throwable;

    invoke-virtual {v5, v1}, Ljava/lang/Throwable;->printStackTrace(Ljava/io/PrintWriter;)V

    .line 401
    invoke-virtual {v1}, Ljava/io/PrintWriter;->close()V

    const-string v1, "file"

    .line 402
    invoke-virtual {v0, v1, v4}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    const-string v1, "time"

    .line 403
    invoke-virtual {v0, v1, v3}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    return-object v0

    :catch_0
    move-exception v0

    .line 406
    invoke-virtual {v0}, Ljava/lang/Exception;->printStackTrace()V

    return-object v2
.end method

.method private static c(Landroid/content/Context;)Ljava/lang/String;
    .locals 3

    const-string v0, ""

    .line 238
    :try_start_0
    invoke-virtual {p0}, Landroid/content/Context;->getApplicationContext()Landroid/content/Context;

    move-result-object v1

    .line 239
    invoke-virtual {v1}, Landroid/content/Context;->getPackageManager()Landroid/content/pm/PackageManager;

    move-result-object v1

    .line 240
    invoke-virtual {p0}, Landroid/content/Context;->getPackageName()Ljava/lang/String;

    move-result-object p0

    const/4 v2, 0x0

    invoke-virtual {v1, p0, v2}, Landroid/content/pm/PackageManager;->getPackageInfo(Ljava/lang/String;I)Landroid/content/pm/PackageInfo;

    move-result-object p0

    .line 241
    iget-object v0, p0, Landroid/content/pm/PackageInfo;->versionName:Ljava/lang/String;
    :try_end_0
    .catch Landroid/content/pm/PackageManager$NameNotFoundException; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p0

    .line 243
    invoke-virtual {p0}, Landroid/content/pm/PackageManager$NameNotFoundException;->getMessage()Ljava/lang/String;

    move-result-object p0

    invoke-static {v0, p0}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;)I

    :goto_0
    return-object v0
.end method

.method private d(Landroid/content/Context;)Ljava/lang/String;
    .locals 3

    .line 258
    invoke-virtual {p1}, Landroid/content/Context;->getPackageManager()Landroid/content/pm/PackageManager;

    move-result-object v0

    .line 261
    :try_start_0
    invoke-virtual {p1}, Landroid/content/Context;->getPackageName()Ljava/lang/String;

    move-result-object v1

    const/4 v2, 0x0

    invoke-virtual {v0, v1, v2}, Landroid/content/pm/PackageManager;->getPackageInfo(Ljava/lang/String;I)Landroid/content/pm/PackageInfo;

    move-result-object v0

    .line 263
    iget-object v0, v0, Landroid/content/pm/PackageInfo;->applicationInfo:Landroid/content/pm/ApplicationInfo;

    .line 265
    iget v0, v0, Landroid/content/pm/ApplicationInfo;->labelRes:I

    .line 267
    invoke-virtual {p1}, Landroid/content/Context;->getResources()Landroid/content/res/Resources;

    move-result-object p1

    invoke-virtual {p1, v0}, Landroid/content/res/Resources;->getString(I)Ljava/lang/String;

    move-result-object p1
    :try_end_0
    .catch Landroid/content/pm/PackageManager$NameNotFoundException; {:try_start_0 .. :try_end_0} :catch_0

    return-object p1

    :catch_0
    move-exception p1

    .line 269
    invoke-virtual {p1}, Landroid/content/pm/PackageManager$NameNotFoundException;->printStackTrace()V

    const/4 p1, 0x0

    return-object p1
.end method


# virtual methods
.method public final a()V
    .locals 1

    .line 121
    invoke-static {}, Ljava/lang/Thread;->getDefaultUncaughtExceptionHandler()Ljava/lang/Thread$UncaughtExceptionHandler;

    move-result-object v0

    iput-object v0, p0, Lcom/mbridge/msdk/foundation/same/report/b/a;->d:Ljava/lang/Thread$UncaughtExceptionHandler;

    .line 122
    invoke-static {p0}, Ljava/lang/Thread;->setDefaultUncaughtExceptionHandler(Ljava/lang/Thread$UncaughtExceptionHandler;)V

    return-void
.end method

.method public uncaughtException(Ljava/lang/Thread;Ljava/lang/Throwable;)V
    .locals 4

    .line 286
    :try_start_0
    iput-object p2, p0, Lcom/mbridge/msdk/foundation/same/report/b/a;->e:Ljava/lang/Throwable;

    .line 287
    invoke-static {}, Lcom/mbridge/msdk/c/b;->a()Lcom/mbridge/msdk/c/b;

    move-result-object v0

    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v1

    invoke-virtual {v1}, Lcom/mbridge/msdk/foundation/controller/a;->k()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/mbridge/msdk/c/b;->b(Ljava/lang/String;)Lcom/mbridge/msdk/c/a;

    move-result-object v0

    if-nez v0, :cond_0

    .line 289
    invoke-static {}, Lcom/mbridge/msdk/c/b;->a()Lcom/mbridge/msdk/c/b;

    move-result-object v0

    invoke-virtual {v0}, Lcom/mbridge/msdk/c/b;->b()Lcom/mbridge/msdk/c/a;

    move-result-object v0

    .line 291
    :cond_0
    invoke-virtual {v0}, Lcom/mbridge/msdk/c/a;->L()Ljava/lang/String;

    move-result-object v1

    if-nez v1, :cond_1

    const-string v0, "mbridge"

    goto :goto_0

    :cond_1
    invoke-virtual {v0}, Lcom/mbridge/msdk/c/a;->L()Ljava/lang/String;

    move-result-object v0

    :goto_0
    const-string v1, "<mvpackage>(.*?)</mvpackage>"

    .line 292
    invoke-direct {p0, v0, v1}, Lcom/mbridge/msdk/foundation/same/report/b/a;->a(Ljava/lang/String;Ljava/lang/String;)Ljava/util/List;

    move-result-object v1

    .line 293
    invoke-interface {v1}, Ljava/util/List;->size()I

    move-result v2

    if-lez v2, :cond_2

    const/4 v0, 0x0

    .line 294
    :goto_1
    invoke-interface {v1}, Ljava/util/List;->size()I

    move-result v2

    if-ge v0, v2, :cond_3

    .line 295
    invoke-interface {v1, v0}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Ljava/lang/String;

    .line 296
    invoke-direct {p0, p2}, Lcom/mbridge/msdk/foundation/same/report/b/a;->a(Ljava/lang/Throwable;)Ljava/lang/String;

    move-result-object v3

    invoke-direct {p0, v3, v2, p2, p1}, Lcom/mbridge/msdk/foundation/same/report/b/a;->a(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;Ljava/lang/Thread;)V

    add-int/lit8 v0, v0, 0x1

    goto :goto_1

    .line 299
    :cond_2
    invoke-direct {p0, p2}, Lcom/mbridge/msdk/foundation/same/report/b/a;->a(Ljava/lang/Throwable;)Ljava/lang/String;

    move-result-object v1

    invoke-direct {p0, v1, v0, p2, p1}, Lcom/mbridge/msdk/foundation/same/report/b/a;->a(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;Ljava/lang/Thread;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_2

    :catch_0
    move-exception v0

    .line 302
    invoke-direct {p0, p1, p2}, Lcom/mbridge/msdk/foundation/same/report/b/a;->a(Ljava/lang/Thread;Ljava/lang/Throwable;)V

    .line 303
    invoke-virtual {v0}, Ljava/lang/Exception;->printStackTrace()V

    :cond_3
    :goto_2
    return-void
.end method
