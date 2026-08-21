.class public final Lcom/bytedance/pangle/plugin/c;
.super Ljava/lang/Object;


# static fields
.field private static final a:Lcom/bytedance/pangle/h;


# direct methods
.method static constructor <clinit>()V
    .locals 1

    .line 63
    invoke-static {}, Lcom/bytedance/pangle/h;->a()Lcom/bytedance/pangle/h;

    move-result-object v0

    sput-object v0, Lcom/bytedance/pangle/plugin/c;->a:Lcom/bytedance/pangle/h;

    return-void
.end method

.method constructor <init>()V
    .locals 0

    .line 65
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method static synthetic a(Lcom/bytedance/pangle/plugin/c;Ljava/lang/String;Lcom/bytedance/pangle/plugin/Plugin;Ljava/lang/StringBuilder;Ljava/lang/String;Ljava/io/File;)Landroid/content/pm/PackageInfo;
    .locals 0

    .line 60
    invoke-direct/range {p0 .. p5}, Lcom/bytedance/pangle/plugin/c;->a(Ljava/lang/String;Lcom/bytedance/pangle/plugin/Plugin;Ljava/lang/StringBuilder;Ljava/lang/String;Ljava/io/File;)Landroid/content/pm/PackageInfo;

    move-result-object p0

    return-object p0
.end method

.method private a(Ljava/lang/String;Lcom/bytedance/pangle/plugin/Plugin;Ljava/lang/StringBuilder;Ljava/lang/String;Ljava/io/File;)Landroid/content/pm/PackageInfo;
    .locals 5

    .line 241
    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v0

    .line 242
    invoke-static {}, Lcom/bytedance/pangle/Zeus;->getAppApplication()Landroid/app/Application;

    move-result-object v2

    invoke-virtual {v2}, Landroid/app/Application;->getPackageManager()Landroid/content/pm/PackageManager;

    move-result-object v2

    const/16 v3, 0x8f

    invoke-virtual {v2, p4, v3}, Landroid/content/pm/PackageManager;->getPackageArchiveInfo(Ljava/lang/String;I)Landroid/content/pm/PackageInfo;

    move-result-object v2

    .line 244
    invoke-static {}, Lcom/bytedance/pangle/Zeus;->getAppApplication()Landroid/app/Application;

    move-result-object v3

    iget-object v4, p2, Lcom/bytedance/pangle/plugin/Plugin;->mPkgName:Ljava/lang/String;

    invoke-static {v3, v4}, Lcom/bytedance/pangle/transform/ZeusTransformUtils;->wrapperContext2Application(Ljava/lang/Object;Ljava/lang/String;)Landroid/app/Application;

    move-result-object v3

    check-cast v3, Lcom/bytedance/pangle/wrapper/PluginApplicationWrapper;

    iput-object v3, p2, Lcom/bytedance/pangle/plugin/Plugin;->mHostApplication:Lcom/bytedance/pangle/wrapper/PluginApplicationWrapper;

    .line 245
    new-instance v3, Landroid/content/pm/ApplicationInfo;

    invoke-static {}, Lcom/bytedance/pangle/Zeus;->getAppApplication()Landroid/app/Application;

    move-result-object v4

    invoke-virtual {v4}, Landroid/app/Application;->getApplicationInfo()Landroid/content/pm/ApplicationInfo;

    move-result-object v4

    invoke-direct {v3, v4}, Landroid/content/pm/ApplicationInfo;-><init>(Landroid/content/pm/ApplicationInfo;)V

    iput-object v3, p2, Lcom/bytedance/pangle/plugin/Plugin;->mHostApplicationInfoHookSomeField:Landroid/content/pm/ApplicationInfo;

    .line 246
    iget-object v3, p2, Lcom/bytedance/pangle/plugin/Plugin;->mHostApplicationInfoHookSomeField:Landroid/content/pm/ApplicationInfo;

    invoke-virtual {p5}, Ljava/io/File;->getAbsolutePath()Ljava/lang/String;

    move-result-object p5

    iput-object p5, v3, Landroid/content/pm/ApplicationInfo;->nativeLibraryDir:Ljava/lang/String;

    .line 247
    iget-object p5, p2, Lcom/bytedance/pangle/plugin/Plugin;->mHostApplicationInfoHookSomeField:Landroid/content/pm/ApplicationInfo;

    iget-object v3, p2, Lcom/bytedance/pangle/plugin/Plugin;->mHostApplication:Lcom/bytedance/pangle/wrapper/PluginApplicationWrapper;

    invoke-virtual {v3}, Lcom/bytedance/pangle/wrapper/PluginApplicationWrapper;->getDataDir()Ljava/io/File;

    move-result-object v3

    invoke-virtual {v3}, Ljava/io/File;->getAbsolutePath()Ljava/lang/String;

    move-result-object v3

    iput-object v3, p5, Landroid/content/pm/ApplicationInfo;->dataDir:Ljava/lang/String;

    .line 248
    iget-object p5, p2, Lcom/bytedance/pangle/plugin/Plugin;->mHostApplicationInfoHookSomeField:Landroid/content/pm/ApplicationInfo;

    iput-object p4, p5, Landroid/content/pm/ApplicationInfo;->sourceDir:Ljava/lang/String;

    .line 249
    iget-object p5, v2, Landroid/content/pm/PackageInfo;->applicationInfo:Landroid/content/pm/ApplicationInfo;

    iget-object p5, p5, Landroid/content/pm/ApplicationInfo;->sourceDir:Ljava/lang/String;

    invoke-static {p5}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p5

    if-eqz p5, :cond_0

    .line 250
    iget-object p5, v2, Landroid/content/pm/PackageInfo;->applicationInfo:Landroid/content/pm/ApplicationInfo;

    iput-object p4, p5, Landroid/content/pm/ApplicationInfo;->sourceDir:Ljava/lang/String;

    .line 252
    :cond_0
    iget-object p5, v2, Landroid/content/pm/PackageInfo;->applicationInfo:Landroid/content/pm/ApplicationInfo;

    iget-object p5, p5, Landroid/content/pm/ApplicationInfo;->publicSourceDir:Ljava/lang/String;

    invoke-static {p5}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p5

    if-eqz p5, :cond_1

    .line 253
    iget-object p5, v2, Landroid/content/pm/PackageInfo;->applicationInfo:Landroid/content/pm/ApplicationInfo;

    iput-object p4, p5, Landroid/content/pm/ApplicationInfo;->publicSourceDir:Ljava/lang/String;

    .line 255
    :cond_1
    new-instance p4, Lcom/bytedance/pangle/res/PluginResources;

    invoke-static {}, Lcom/bytedance/pangle/Zeus;->getAppApplication()Landroid/app/Application;

    move-result-object p5

    invoke-virtual {p5}, Landroid/app/Application;->getPackageManager()Landroid/content/pm/PackageManager;

    move-result-object p5

    iget-object v3, v2, Landroid/content/pm/PackageInfo;->applicationInfo:Landroid/content/pm/ApplicationInfo;

    invoke-virtual {p5, v3}, Landroid/content/pm/PackageManager;->getResourcesForApplication(Landroid/content/pm/ApplicationInfo;)Landroid/content/res/Resources;

    move-result-object p5

    invoke-direct {p4, p5, p1}, Lcom/bytedance/pangle/res/PluginResources;-><init>(Landroid/content/res/Resources;Ljava/lang/String;)V

    iput-object p4, p2, Lcom/bytedance/pangle/plugin/Plugin;->mResources:Landroid/content/res/Resources;

    .line 256
    invoke-static {}, Lcom/bytedance/pangle/Zeus;->getAppApplication()Landroid/app/Application;

    move-result-object p1

    new-instance p4, Lcom/bytedance/pangle/plugin/c$3;

    invoke-direct {p4, p0, p2}, Lcom/bytedance/pangle/plugin/c$3;-><init>(Lcom/bytedance/pangle/plugin/c;Lcom/bytedance/pangle/plugin/Plugin;)V

    invoke-virtual {p1, p4}, Landroid/app/Application;->registerComponentCallbacks(Landroid/content/ComponentCallbacks;)V

    const-string p1, "makeResources cost:"

    .line 267
    invoke-virtual {p3, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide p1

    sub-long/2addr p1, v0

    invoke-virtual {p3, p1, p2}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    const-string p1, ";"

    invoke-virtual {p3, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    return-object v2
.end method

.method private static a(Lcom/bytedance/pangle/plugin/Plugin;Ljava/lang/String;)V
    .locals 8

    .line 341
    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_4

    .line 342
    new-instance v0, Lorg/json/JSONObject;

    invoke-direct {v0, p1}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    const-string p1, "mapping"

    .line 343
    invoke-virtual {v0, p1}, Lorg/json/JSONObject;->optJSONObject(Ljava/lang/String;)Lorg/json/JSONObject;

    move-result-object v1

    .line 344
    new-instance v2, Ljava/util/HashMap;

    invoke-direct {v2}, Ljava/util/HashMap;-><init>()V

    if-eqz v1, :cond_0

    .line 347
    invoke-virtual {v1}, Lorg/json/JSONObject;->keys()Ljava/util/Iterator;

    move-result-object v3

    .line 348
    :goto_0
    invoke-interface {v3}, Ljava/util/Iterator;->hasNext()Z

    move-result v4

    if-eqz v4, :cond_0

    .line 349
    invoke-interface {v3}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v4

    check-cast v4, Ljava/lang/String;

    .line 350
    invoke-virtual {v1, v4}, Lorg/json/JSONObject;->getString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v5

    invoke-interface {v2, v4, v5}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    goto :goto_0

    :cond_0
    const-string v1, "forceMappings"

    .line 354
    invoke-virtual {v0, v1}, Lorg/json/JSONObject;->optJSONArray(Ljava/lang/String;)Lorg/json/JSONArray;

    move-result-object v0

    const/4 v1, 0x0

    if-eqz v0, :cond_2

    move v3, v1

    .line 356
    :goto_1
    invoke-virtual {v0}, Lorg/json/JSONArray;->length()I

    move-result v4

    if-ge v3, v4, :cond_2

    .line 357
    invoke-virtual {v0, v3}, Lorg/json/JSONArray;->getJSONObject(I)Lorg/json/JSONObject;

    move-result-object v4

    const-string v5, "minApi"

    .line 358
    invoke-virtual {v4, v5, v1}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;I)I

    move-result v5

    const v6, 0x7fffffff

    const-string v7, "maxApi"

    .line 359
    invoke-virtual {v4, v7, v6}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;I)I

    move-result v6

    .line 360
    invoke-virtual {p0}, Lcom/bytedance/pangle/plugin/Plugin;->getApiVersionCode()I

    move-result v7

    if-gt v7, v6, :cond_1

    if-lt v7, v5, :cond_1

    .line 363
    invoke-virtual {v4, p1}, Lorg/json/JSONObject;->optJSONObject(Ljava/lang/String;)Lorg/json/JSONObject;

    move-result-object v4

    if-eqz v4, :cond_1

    .line 365
    invoke-virtual {v4}, Lorg/json/JSONObject;->keys()Ljava/util/Iterator;

    move-result-object v5

    .line 366
    :goto_2
    invoke-interface {v5}, Ljava/util/Iterator;->hasNext()Z

    move-result v6

    if-eqz v6, :cond_1

    .line 367
    invoke-interface {v5}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v6

    check-cast v6, Ljava/lang/String;

    .line 368
    invoke-virtual {v4, v6}, Lorg/json/JSONObject;->getString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v7

    invoke-interface {v2, v6, v7}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    goto :goto_2

    :cond_1
    add-int/lit8 v3, v3, 0x1

    goto :goto_1

    .line 375
    :cond_2
    invoke-interface {v2}, Ljava/util/Map;->keySet()Ljava/util/Set;

    move-result-object p1

    invoke-interface {p1}, Ljava/util/Set;->iterator()Ljava/util/Iterator;

    move-result-object p1

    :goto_3
    invoke-interface {p1}, Ljava/util/Iterator;->hasNext()Z

    move-result v0

    if-eqz v0, :cond_4

    invoke-interface {p1}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Ljava/lang/String;

    .line 376
    invoke-interface {v2, v0}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Ljava/lang/String;

    .line 377
    iget-object v4, p0, Lcom/bytedance/pangle/plugin/Plugin;->mPkgName:Ljava/lang/String;

    new-instance v5, Ljava/lang/StringBuilder;

    invoke-direct {v5}, Ljava/lang/StringBuilder;-><init>()V

    const-string v6, "."

    if-eqz v3, :cond_3

    invoke-virtual {v3, v6}, Ljava/lang/String;->contains(Ljava/lang/CharSequence;)Z

    move-result v3

    if-eqz v3, :cond_3

    const-string v3, ""

    goto :goto_4

    :cond_3
    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v7, p0, Lcom/bytedance/pangle/plugin/Plugin;->mPkgName:Ljava/lang/String;

    invoke-virtual {v3, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    :goto_4
    invoke-virtual {v5, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-interface {v2, v0}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Ljava/lang/String;

    invoke-virtual {v5, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    const/4 v5, 0x1

    new-array v5, v5, [Ljava/lang/String;

    aput-object v0, v5, v1

    invoke-static {v4, v3, v5}, Lcom/bytedance/pangle/ComponentManager;->registerActivity(Ljava/lang/String;Ljava/lang/String;[Ljava/lang/String;)V

    goto :goto_3

    :cond_4
    return-void
.end method

.method private static a(Lcom/bytedance/pangle/plugin/Plugin;Ljava/lang/String;Ljava/io/File;Ljava/io/File;)V
    .locals 8

    .line 1401
    invoke-static {}, Lcom/bytedance/pangle/util/i;->j()Z

    move-result v0

    const-string v1, ""

    const/4 v2, 0x0

    if-eqz v0, :cond_0

    .line 304
    new-instance v0, Lcom/bytedance/pangle/PluginClassLoader;

    .line 305
    invoke-virtual {p2}, Ljava/io/File;->getAbsolutePath()Ljava/lang/String;

    move-result-object p2

    invoke-direct {v0, v1, p3, p2, v2}, Lcom/bytedance/pangle/PluginClassLoader;-><init>(Ljava/lang/String;Ljava/io/File;Ljava/lang/String;Ljava/util/List;)V

    iput-object v0, p0, Lcom/bytedance/pangle/plugin/Plugin;->mClassLoader:Lcom/bytedance/pangle/PluginClassLoader;

    .line 306
    iget-object p0, p0, Lcom/bytedance/pangle/plugin/Plugin;->mClassLoader:Lcom/bytedance/pangle/PluginClassLoader;

    invoke-static {p0, p1}, Lcom/bytedance/pangle/plugin/c;->a(Ljava/lang/Object;Ljava/lang/String;)V

    return-void

    .line 308
    :cond_0
    invoke-static {}, Lcom/bytedance/pangle/util/i;->b()Z

    move-result v0

    if-eqz v0, :cond_3

    .line 309
    iget-object p1, p0, Lcom/bytedance/pangle/plugin/Plugin;->mPkgName:Ljava/lang/String;

    invoke-virtual {p0}, Lcom/bytedance/pangle/plugin/Plugin;->getVersion()I

    move-result v0

    invoke-static {p1, v0}, Lcom/bytedance/pangle/e/g;->a(Ljava/lang/String;I)Ljava/lang/String;

    move-result-object p1

    const-string v0, ":"

    .line 310
    invoke-virtual {p1, v0}, Ljava/lang/String;->split(Ljava/lang/String;)[Ljava/lang/String;

    move-result-object v0

    .line 311
    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v3

    .line 312
    invoke-virtual {p3}, Ljava/io/File;->getAbsolutePath()Ljava/lang/String;

    move-result-object v5

    invoke-static {v5, v0}, Lcom/bytedance/pangle/e/b;->a(Ljava/lang/String;[Ljava/lang/String;)Z

    move-result v0

    xor-int/lit8 v0, v0, 0x1

    .line 313
    new-instance v5, Ljava/lang/StringBuilder;

    const-string v6, "useDirect:"

    invoke-direct {v5, v6}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v6

    sub-long/2addr v6, v3

    invoke-virtual {v5, v6, v7}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    const-string v3, " "

    invoke-virtual {v5, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5, v0}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    invoke-virtual {v5}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    const-string v4, "Zeus/load_pangle"

    invoke-static {v4, v3}, Lcom/bytedance/pangle/log/ZeusLogger;->d(Ljava/lang/String;Ljava/lang/String;)V

    if-eqz v0, :cond_1

    goto :goto_0

    :cond_1
    move-object v1, p1

    .line 315
    :goto_0
    new-instance p1, Lcom/bytedance/pangle/PluginClassLoader;

    .line 316
    invoke-virtual {p2}, Ljava/io/File;->getAbsolutePath()Ljava/lang/String;

    move-result-object p2

    invoke-direct {p1, v1, p3, p2, v2}, Lcom/bytedance/pangle/PluginClassLoader;-><init>(Ljava/lang/String;Ljava/io/File;Ljava/lang/String;Ljava/util/List;)V

    iput-object p1, p0, Lcom/bytedance/pangle/plugin/Plugin;->mClassLoader:Lcom/bytedance/pangle/PluginClassLoader;

    if-eqz v0, :cond_2

    .line 318
    iget-object p1, p0, Lcom/bytedance/pangle/plugin/Plugin;->mClassLoader:Lcom/bytedance/pangle/PluginClassLoader;

    iget-object p2, p0, Lcom/bytedance/pangle/plugin/Plugin;->mPkgName:Ljava/lang/String;

    invoke-virtual {p0}, Lcom/bytedance/pangle/plugin/Plugin;->getVersion()I

    move-result p0

    invoke-static {p1, p2, p0}, Lcom/bytedance/pangle/dex/a;->a(Ljava/lang/ClassLoader;Ljava/lang/String;I)V

    :cond_2
    return-void

    .line 321
    :cond_3
    new-instance v0, Lcom/bytedance/pangle/PluginClassLoader;

    .line 322
    invoke-virtual {p2}, Ljava/io/File;->getAbsolutePath()Ljava/lang/String;

    move-result-object p2

    invoke-direct {v0, p1, p3, p2, v2}, Lcom/bytedance/pangle/PluginClassLoader;-><init>(Ljava/lang/String;Ljava/io/File;Ljava/lang/String;Ljava/util/List;)V

    iput-object v0, p0, Lcom/bytedance/pangle/plugin/Plugin;->mClassLoader:Lcom/bytedance/pangle/PluginClassLoader;

    return-void
.end method

.method private a(Lcom/bytedance/pangle/plugin/Plugin;Ljava/lang/String;Ljava/io/File;Ljava/io/File;Ljava/lang/StringBuilder;)V
    .locals 4

    const-string v0, ";"

    const-string v1, "actStubV1 cost:"

    .line 272
    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v2

    .line 273
    invoke-static {p1, p2, p3, p4}, Lcom/bytedance/pangle/plugin/c;->a(Lcom/bytedance/pangle/plugin/Plugin;Ljava/lang/String;Ljava/io/File;Ljava/io/File;)V

    const-string p2, "classLoader cost:"

    .line 274
    invoke-virtual {p5, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide p2

    sub-long/2addr p2, v2

    invoke-virtual {p5, p2, p3}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    const-string p2, " ;"

    invoke-virtual {p5, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 276
    iget-boolean p2, p1, Lcom/bytedance/pangle/plugin/Plugin;->mOpenLoadClassOpt:Z

    if-eqz p2, :cond_0

    .line 277
    new-instance p2, Lcom/bytedance/pangle/plugin/c$4;

    invoke-direct {p2, p0, p1}, Lcom/bytedance/pangle/plugin/c$4;-><init>(Lcom/bytedance/pangle/plugin/c;Lcom/bytedance/pangle/plugin/Plugin;)V

    invoke-static {p2}, Lcom/bytedance/pangle/d/e;->a(Ljava/lang/Runnable;)V

    .line 288
    :cond_0
    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide p2

    .line 290
    :try_start_0
    iget-object p4, p1, Lcom/bytedance/pangle/plugin/Plugin;->mClassLoader:Lcom/bytedance/pangle/PluginClassLoader;

    const-string v2, "com.volcengine.StubConfig"

    invoke-virtual {p4, v2}, Lcom/bytedance/pangle/PluginClassLoader;->loadClass(Ljava/lang/String;)Ljava/lang/Class;

    move-result-object p4

    const-string v2, "actStubV1"

    .line 291
    invoke-static {p4, v2}, Lcom/bytedance/pangle/util/FieldUtils;->readStaticField(Ljava/lang/Class;Ljava/lang/String;)Ljava/lang/Object;

    move-result-object p4

    check-cast p4, Ljava/lang/String;

    if-eqz p4, :cond_1

    .line 293
    invoke-static {p1, p4}, Lcom/bytedance/pangle/plugin/c;->a(Lcom/bytedance/pangle/plugin/Plugin;Ljava/lang/String;)V
    :try_end_0
    .catch Ljava/lang/ClassNotFoundException; {:try_start_0 .. :try_end_0} :catch_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 298
    :catch_0
    :cond_1
    invoke-virtual {p5, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v1

    sub-long/2addr v1, p2

    invoke-virtual {p5, v1, v2}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    invoke-virtual {p5, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    return-void

    :catchall_0
    move-exception p1

    invoke-virtual {p5, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v1

    sub-long/2addr v1, p2

    invoke-virtual {p5, v1, v2}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    invoke-virtual {p5, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 299
    throw p1
.end method

.method private static a(Lcom/bytedance/pangle/plugin/Plugin;Ljava/lang/StringBuilder;Landroid/content/pm/PackageInfo;)V
    .locals 10

    .line 177
    iget-object v0, p2, Landroid/content/pm/PackageInfo;->activities:[Landroid/content/pm/ActivityInfo;

    const-string v1, "main"

    const/4 v2, 0x0

    const/4 v3, 0x1

    const-string v4, ":"

    if-eqz v0, :cond_2

    .line 179
    array-length v5, v0

    move v6, v2

    :goto_0
    if-ge v6, v5, :cond_2

    aget-object v7, v0, v6

    .line 180
    iget-object v8, v7, Landroid/content/pm/ActivityInfo;->processName:Ljava/lang/String;

    invoke-static {v8}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v8

    if-nez v8, :cond_1

    iget-object v8, v7, Landroid/content/pm/ActivityInfo;->processName:Ljava/lang/String;

    invoke-virtual {v8, v4}, Ljava/lang/String;->contains(Ljava/lang/CharSequence;)Z

    move-result v8

    if-nez v8, :cond_0

    goto :goto_1

    .line 183
    :cond_0
    iget-object v8, v7, Landroid/content/pm/ActivityInfo;->processName:Ljava/lang/String;

    invoke-virtual {v8, v4}, Ljava/lang/String;->split(Ljava/lang/String;)[Ljava/lang/String;

    move-result-object v8

    aget-object v8, v8, v3

    iput-object v8, v7, Landroid/content/pm/ActivityInfo;->processName:Ljava/lang/String;

    goto :goto_2

    .line 181
    :cond_1
    :goto_1
    iput-object v1, v7, Landroid/content/pm/ActivityInfo;->processName:Ljava/lang/String;

    .line 185
    :goto_2
    iget-object v8, p0, Lcom/bytedance/pangle/plugin/Plugin;->pluginActivities:Ljava/util/HashMap;

    iget-object v9, v7, Landroid/content/pm/ActivityInfo;->name:Ljava/lang/String;

    invoke-virtual {v8, v9, v7}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    add-int/lit8 v6, v6, 0x1

    goto :goto_0

    .line 188
    :cond_2
    iget-object v0, p2, Landroid/content/pm/PackageInfo;->services:[Landroid/content/pm/ServiceInfo;

    if-eqz v0, :cond_5

    .line 190
    array-length v5, v0

    move v6, v2

    :goto_3
    if-ge v6, v5, :cond_5

    aget-object v7, v0, v6

    .line 191
    iget-object v8, v7, Landroid/content/pm/ServiceInfo;->processName:Ljava/lang/String;

    invoke-static {v8}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v8

    if-nez v8, :cond_4

    iget-object v8, v7, Landroid/content/pm/ServiceInfo;->processName:Ljava/lang/String;

    invoke-virtual {v8, v4}, Ljava/lang/String;->contains(Ljava/lang/CharSequence;)Z

    move-result v8

    if-nez v8, :cond_3

    goto :goto_4

    .line 194
    :cond_3
    iget-object v8, v7, Landroid/content/pm/ServiceInfo;->processName:Ljava/lang/String;

    invoke-virtual {v8, v4}, Ljava/lang/String;->split(Ljava/lang/String;)[Ljava/lang/String;

    move-result-object v8

    aget-object v8, v8, v3

    iput-object v8, v7, Landroid/content/pm/ServiceInfo;->processName:Ljava/lang/String;

    goto :goto_5

    .line 192
    :cond_4
    :goto_4
    iput-object v1, v7, Landroid/content/pm/ServiceInfo;->processName:Ljava/lang/String;

    .line 196
    :goto_5
    iget-object v8, p0, Lcom/bytedance/pangle/plugin/Plugin;->pluginServices:Ljava/util/HashMap;

    iget-object v9, v7, Landroid/content/pm/ServiceInfo;->name:Ljava/lang/String;

    invoke-virtual {v8, v9, v7}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    add-int/lit8 v6, v6, 0x1

    goto :goto_3

    .line 200
    :cond_5
    iget-object v0, p2, Landroid/content/pm/PackageInfo;->receivers:[Landroid/content/pm/ActivityInfo;

    if-eqz v0, :cond_8

    .line 202
    array-length v5, v0

    move v6, v2

    :goto_6
    if-ge v6, v5, :cond_8

    aget-object v7, v0, v6

    .line 203
    iget-object v8, v7, Landroid/content/pm/ActivityInfo;->processName:Ljava/lang/String;

    invoke-static {v8}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v8

    if-nez v8, :cond_7

    iget-object v8, v7, Landroid/content/pm/ActivityInfo;->processName:Ljava/lang/String;

    invoke-virtual {v8, v4}, Ljava/lang/String;->contains(Ljava/lang/CharSequence;)Z

    move-result v8

    if-nez v8, :cond_6

    goto :goto_7

    .line 206
    :cond_6
    iget-object v8, v7, Landroid/content/pm/ActivityInfo;->processName:Ljava/lang/String;

    invoke-virtual {v8, v4}, Ljava/lang/String;->split(Ljava/lang/String;)[Ljava/lang/String;

    move-result-object v8

    aget-object v8, v8, v3

    iput-object v8, v7, Landroid/content/pm/ActivityInfo;->processName:Ljava/lang/String;

    goto :goto_8

    .line 204
    :cond_7
    :goto_7
    iput-object v1, v7, Landroid/content/pm/ActivityInfo;->processName:Ljava/lang/String;

    .line 208
    :goto_8
    iget-object v8, p0, Lcom/bytedance/pangle/plugin/Plugin;->pluginReceiver:Ljava/util/HashMap;

    iget-object v9, v7, Landroid/content/pm/ActivityInfo;->name:Ljava/lang/String;

    invoke-virtual {v8, v9, v7}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    add-int/lit8 v6, v6, 0x1

    goto :goto_6

    .line 213
    :cond_8
    iget-object v0, p2, Landroid/content/pm/PackageInfo;->providers:[Landroid/content/pm/ProviderInfo;

    if-eqz v0, :cond_b

    .line 215
    array-length v5, v0

    :goto_9
    if-ge v2, v5, :cond_b

    aget-object v6, v0, v2

    .line 216
    iget-object v7, v6, Landroid/content/pm/ProviderInfo;->processName:Ljava/lang/String;

    invoke-static {v7}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v7

    if-nez v7, :cond_a

    iget-object v7, v6, Landroid/content/pm/ProviderInfo;->processName:Ljava/lang/String;

    invoke-virtual {v7, v4}, Ljava/lang/String;->contains(Ljava/lang/CharSequence;)Z

    move-result v7

    if-nez v7, :cond_9

    goto :goto_a

    .line 219
    :cond_9
    iget-object v7, v6, Landroid/content/pm/ProviderInfo;->processName:Ljava/lang/String;

    invoke-virtual {v7, v4}, Ljava/lang/String;->split(Ljava/lang/String;)[Ljava/lang/String;

    move-result-object v7

    aget-object v7, v7, v3

    iput-object v7, v6, Landroid/content/pm/ProviderInfo;->processName:Ljava/lang/String;

    goto :goto_b

    .line 217
    :cond_a
    :goto_a
    iput-object v1, v6, Landroid/content/pm/ProviderInfo;->processName:Ljava/lang/String;

    .line 221
    :goto_b
    iget-object v7, p0, Lcom/bytedance/pangle/plugin/Plugin;->pluginProvider:Ljava/util/HashMap;

    iget-object v8, v6, Landroid/content/pm/ProviderInfo;->name:Ljava/lang/String;

    invoke-virtual {v7, v8, v6}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    add-int/lit8 v2, v2, 0x1

    goto :goto_9

    .line 225
    :cond_b
    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v0

    .line 227
    iget-object v2, p0, Lcom/bytedance/pangle/plugin/Plugin;->pluginProvider:Ljava/util/HashMap;

    if-eqz v2, :cond_c

    iget-object v2, p0, Lcom/bytedance/pangle/plugin/Plugin;->pluginProvider:Ljava/util/HashMap;

    invoke-virtual {v2}, Ljava/util/HashMap;->size()I

    move-result v2

    if-lez v2, :cond_c

    .line 228
    invoke-static {}, Lcom/bytedance/pangle/provider/ContentProviderManager;->getInstance()Lcom/bytedance/pangle/provider/ContentProviderManager;

    move-result-object v2

    iget-object v3, p0, Lcom/bytedance/pangle/plugin/Plugin;->pluginProvider:Ljava/util/HashMap;

    invoke-virtual {v3}, Ljava/util/HashMap;->values()Ljava/util/Collection;

    move-result-object v3

    invoke-virtual {v2, v3, p0}, Lcom/bytedance/pangle/provider/ContentProviderManager;->installContentProviders(Ljava/util/Collection;Lcom/bytedance/pangle/plugin/Plugin;)V

    :cond_c
    const-string v2, "installProvider cost:"

    .line 230
    invoke-virtual {p1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v2

    sub-long/2addr v2, v0

    invoke-virtual {p1, v2, v3}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    const-string v0, ";"

    invoke-virtual {p1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 231
    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v1

    .line 233
    iget-object v3, p2, Landroid/content/pm/PackageInfo;->applicationInfo:Landroid/content/pm/ApplicationInfo;

    iget-object v3, v3, Landroid/content/pm/ApplicationInfo;->className:Ljava/lang/String;

    invoke-static {v3}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v3

    if-nez v3, :cond_d

    .line 234
    iget-object v3, p0, Lcom/bytedance/pangle/plugin/Plugin;->mClassLoader:Lcom/bytedance/pangle/PluginClassLoader;

    iget-object p2, p2, Landroid/content/pm/PackageInfo;->applicationInfo:Landroid/content/pm/ApplicationInfo;

    iget-object p2, p2, Landroid/content/pm/ApplicationInfo;->className:Ljava/lang/String;

    invoke-virtual {v3, p2}, Lcom/bytedance/pangle/PluginClassLoader;->loadClass(Ljava/lang/String;)Ljava/lang/Class;

    move-result-object p2

    invoke-virtual {p2}, Ljava/lang/Class;->newInstance()Ljava/lang/Object;

    move-result-object p2

    check-cast p2, Lcom/bytedance/pangle/ZeusApplication;

    iput-object p2, p0, Lcom/bytedance/pangle/plugin/Plugin;->mApplication:Lcom/bytedance/pangle/ZeusApplication;

    .line 235
    iget-object p2, p0, Lcom/bytedance/pangle/plugin/Plugin;->mApplication:Lcom/bytedance/pangle/ZeusApplication;

    invoke-static {}, Lcom/bytedance/pangle/Zeus;->getAppApplication()Landroid/app/Application;

    move-result-object v3

    invoke-virtual {p2, p0, v3}, Lcom/bytedance/pangle/ZeusApplication;->attach(Lcom/bytedance/pangle/plugin/Plugin;Landroid/app/Application;)V

    :cond_d
    const-string p0, "makeApplication cost:"

    .line 237
    invoke-virtual {p1, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v3

    sub-long/2addr v3, v1

    invoke-virtual {p1, v3, v4}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    invoke-virtual {p1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    return-void
.end method

.method static synthetic a(Lcom/bytedance/pangle/plugin/c;Lcom/bytedance/pangle/plugin/Plugin;Ljava/lang/String;Ljava/io/File;Ljava/io/File;Ljava/lang/StringBuilder;)V
    .locals 0

    .line 60
    invoke-direct/range {p0 .. p5}, Lcom/bytedance/pangle/plugin/c;->a(Lcom/bytedance/pangle/plugin/Plugin;Ljava/lang/String;Ljava/io/File;Ljava/io/File;Ljava/lang/StringBuilder;)V

    return-void
.end method

.method private static a(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 7

    const-string v0, "Zeus/load_pangle"

    .line 406
    :try_start_0
    const-class v1, Ldalvik/system/BaseDexClassLoader;

    const-string v2, "addDexPath"

    const/4 v3, 0x1

    new-array v4, v3, [Ljava/lang/Class;

    const-class v5, Ljava/lang/String;

    const/4 v6, 0x0

    aput-object v5, v4, v6

    invoke-static {v1, v2, v4}, Lcom/bytedance/pangle/util/MethodUtils;->getAccessibleMethod(Ljava/lang/Class;Ljava/lang/String;[Ljava/lang/Class;)Ljava/lang/reflect/Method;

    move-result-object v1

    new-array v2, v3, [Ljava/lang/Object;

    aput-object p1, v2, v6

    .line 408
    invoke-virtual {v1, p0, v2}, Ljava/lang/reflect/Method;->invoke(Ljava/lang/Object;[Ljava/lang/Object;)Ljava/lang/Object;

    const-string p0, "PluginLoader createPluginClassLoader#addDexPath success >>>"

    .line 409
    invoke-static {p1}, Ljava/lang/String;->valueOf(Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {p0, v1}, Ljava/lang/String;->concat(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0

    invoke-static {v0, p0}, Lcom/bytedance/pangle/log/ZeusLogger;->i(Ljava/lang/String;Ljava/lang/String;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return-void

    :catchall_0
    move-exception p0

    .line 411
    invoke-static {p1}, Ljava/lang/String;->valueOf(Ljava/lang/Object;)Ljava/lang/String;

    move-result-object p1

    const-string v1, "PluginLoader createPluginClassLoader#addDexPath fail >>>"

    invoke-virtual {v1, p1}, Ljava/lang/String;->concat(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p1

    invoke-static {v0, p1, p0}, Lcom/bytedance/pangle/log/ZeusLogger;->errReport(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)V

    return-void
.end method

.method private static a(Ljava/lang/String;ILjava/lang/String;IJLjava/lang/String;)V
    .locals 4

    .line 383
    new-instance v0, Lorg/json/JSONObject;

    invoke-direct {v0}, Lorg/json/JSONObject;-><init>()V

    .line 384
    new-instance v1, Lorg/json/JSONObject;

    invoke-direct {v1}, Lorg/json/JSONObject;-><init>()V

    .line 385
    new-instance v2, Lorg/json/JSONObject;

    invoke-direct {v2}, Lorg/json/JSONObject;-><init>()V

    :try_start_0
    const-string v3, "status_code"

    .line 387
    invoke-static {p1}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object p1

    invoke-static {p1}, Lcom/bytedance/pangle/log/b;->a(Ljava/lang/Object;)Ljava/lang/String;

    move-result-object p1

    invoke-virtual {v0, v3, p1}, Lorg/json/JSONObject;->putOpt(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string p1, "plugin_package_name"

    .line 388
    invoke-static {p2}, Lcom/bytedance/pangle/log/b;->a(Ljava/lang/Object;)Ljava/lang/String;

    move-result-object p2

    invoke-virtual {v0, p1, p2}, Lorg/json/JSONObject;->putOpt(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string p1, "version_code"

    .line 389
    invoke-static {p3}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object p2

    invoke-static {p2}, Lcom/bytedance/pangle/log/b;->a(Ljava/lang/Object;)Ljava/lang/String;

    move-result-object p2

    invoke-virtual {v0, p1, p2}, Lorg/json/JSONObject;->putOpt(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string p1, "duration"

    .line 390
    invoke-static {p4, p5}, Ljava/lang/Long;->valueOf(J)Ljava/lang/Long;

    move-result-object p2

    invoke-static {p2}, Lcom/bytedance/pangle/log/b;->b(Ljava/lang/Object;)I

    move-result p2

    invoke-static {p2}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object p2

    invoke-virtual {v2, p1, p2}, Lorg/json/JSONObject;->putOpt(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string p1, "message"

    .line 391
    invoke-static {p6}, Lcom/bytedance/pangle/log/b;->a(Ljava/lang/Object;)Ljava/lang/String;

    move-result-object p2

    invoke-virtual {v1, p1, p2}, Lorg/json/JSONObject;->putOpt(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;
    :try_end_0
    .catch Lorg/json/JSONException; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p1

    .line 393
    invoke-virtual {p1}, Lorg/json/JSONException;->printStackTrace()V

    .line 395
    :goto_0
    invoke-static {}, Lcom/bytedance/pangle/c/b;->a()Lcom/bytedance/pangle/c/b;

    move-result-object p1

    invoke-virtual {p1, p0, v0, v2, v1}, Lcom/bytedance/pangle/c/b;->a(Ljava/lang/String;Lorg/json/JSONObject;Lorg/json/JSONObject;Lorg/json/JSONObject;)V

    return-void
.end method

.method private a(Ljava/lang/String;Lcom/bytedance/pangle/plugin/Plugin;Ljava/lang/StringBuilder;)Z
    .locals 19

    move-object/from16 v9, p1

    move-object/from16 v0, p2

    move-object/from16 v10, p3

    const-string v11, "PluginLoader loadPluginInternal, plugin["

    const-string v12, "Zeus/load_pangle"

    const/4 v13, 0x0

    if-nez v0, :cond_0

    :try_start_0
    const-string v0, "loadPluginInternal, plugin == null;"

    .line 128
    invoke-virtual {v10, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 129
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0, v11}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {v0, v9}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v1, "] not exist !!!"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v12, v0}, Lcom/bytedance/pangle/log/ZeusLogger;->w(Ljava/lang/String;Ljava/lang/String;)V

    return v13

    .line 132
    :cond_0
    invoke-virtual/range {p2 .. p2}, Lcom/bytedance/pangle/plugin/Plugin;->isInstalled()Z

    move-result v1

    if-nez v1, :cond_1

    const-string v0, "loadPluginInternal, !plugin.isInstalled();"

    .line 133
    invoke-virtual {v10, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 134
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0, v11}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {v0, v9}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v1, "] not installed !!!"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v12, v0}, Lcom/bytedance/pangle/log/ZeusLogger;->w(Ljava/lang/String;Ljava/lang/String;)V

    return v13

    .line 137
    :cond_1
    iget-object v1, v0, Lcom/bytedance/pangle/plugin/Plugin;->mPkgName:Ljava/lang/String;

    invoke-virtual/range {p2 .. p2}, Lcom/bytedance/pangle/plugin/Plugin;->getVersion()I

    move-result v2

    invoke-static {v1, v2}, Lcom/bytedance/pangle/d/c;->b(Ljava/lang/String;I)Ljava/lang/String;

    move-result-object v8

    .line 138
    new-instance v1, Ljava/io/File;

    invoke-direct {v1, v8}, Ljava/io/File;-><init>(Ljava/lang/String;)V

    invoke-virtual {v1}, Ljava/io/File;->exists()Z

    move-result v1

    if-nez v1, :cond_2

    const-string v0, "loadPluginInternal, sourceApk not exist;"

    .line 139
    invoke-virtual {v10, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 140
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0, v11}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {v0, v9}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v1, "] file not exist !!!"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v12, v0}, Lcom/bytedance/pangle/log/ZeusLogger;->w(Ljava/lang/String;Ljava/lang/String;)V

    return v13

    .line 143
    :cond_2
    new-instance v14, Ljava/io/File;

    iget-object v1, v0, Lcom/bytedance/pangle/plugin/Plugin;->mPkgName:Ljava/lang/String;

    invoke-virtual/range {p2 .. p2}, Lcom/bytedance/pangle/plugin/Plugin;->getVersion()I

    move-result v2

    invoke-static {v1, v2}, Lcom/bytedance/pangle/d/c;->d(Ljava/lang/String;I)Ljava/lang/String;

    move-result-object v1

    invoke-direct {v14, v1}, Ljava/io/File;-><init>(Ljava/lang/String;)V

    .line 145
    iget-object v1, v0, Lcom/bytedance/pangle/plugin/Plugin;->mPkgName:Ljava/lang/String;

    invoke-virtual/range {p2 .. p2}, Lcom/bytedance/pangle/plugin/Plugin;->getVersion()I

    move-result v2

    .line 1328
    new-instance v3, Ljava/io/File;

    invoke-static {v1, v2}, Lcom/bytedance/pangle/d/c;->c(Ljava/lang/String;I)Ljava/lang/String;

    move-result-object v1

    invoke-direct {v3, v1}, Ljava/io/File;-><init>(Ljava/lang/String;)V

    .line 1329
    invoke-static {}, Lcom/bytedance/pangle/util/i;->d()Z

    move-result v1

    const/4 v15, 0x1

    if-eqz v1, :cond_4

    .line 1331
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v1, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    sget-object v2, Ljava/io/File;->separator:Ljava/lang/String;

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-static {v8}, Lcom/bytedance/pangle/e/b;->a(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    new-array v2, v15, [Ljava/lang/String;

    aput-object v1, v2, v13

    .line 1332
    invoke-static {v2}, Lcom/bytedance/pangle/e/b;->a([Ljava/lang/String;)Z

    move-result v1

    if-eqz v1, :cond_3

    goto :goto_0

    :cond_3
    const/4 v3, 0x0

    :cond_4
    :goto_0
    move-object v6, v3

    if-eqz v6, :cond_5

    .line 1334
    invoke-virtual {v6}, Ljava/io/File;->exists()Z

    move-result v1

    if-nez v1, :cond_5

    .line 1335
    invoke-virtual {v6}, Ljava/io/File;->mkdirs()Z

    :cond_5
    new-array v7, v15, [Landroid/content/pm/PackageInfo;

    .line 148
    invoke-static {}, Lcom/bytedance/pangle/util/i;->j()Z

    move-result v1

    if-eqz v1, :cond_6

    const/4 v1, 0x2

    new-array v5, v1, [Lcom/bytedance/pangle/a/a$a;

    .line 149
    new-instance v16, Lcom/bytedance/pangle/plugin/c$1;

    move-object/from16 v1, v16

    move-object/from16 v2, p0

    move-object/from16 v3, p2

    move-object v4, v8

    move-object/from16 v17, v5

    move-object v5, v14

    move-object/from16 v18, v7

    move-object/from16 v7, p3

    invoke-direct/range {v1 .. v7}, Lcom/bytedance/pangle/plugin/c$1;-><init>(Lcom/bytedance/pangle/plugin/c;Lcom/bytedance/pangle/plugin/Plugin;Ljava/lang/String;Ljava/io/File;Ljava/io/File;Ljava/lang/StringBuilder;)V

    aput-object v16, v17, v13

    new-instance v16, Lcom/bytedance/pangle/plugin/c$2;

    move-object/from16 v1, v16

    move-object/from16 v2, p0

    move-object/from16 v3, v18

    move-object/from16 v4, p1

    move-object/from16 v5, p2

    move-object/from16 v6, p3

    move-object v7, v8

    move-object v8, v14

    invoke-direct/range {v1 .. v8}, Lcom/bytedance/pangle/plugin/c$2;-><init>(Lcom/bytedance/pangle/plugin/c;[Landroid/content/pm/PackageInfo;Ljava/lang/String;Lcom/bytedance/pangle/plugin/Plugin;Ljava/lang/StringBuilder;Ljava/lang/String;Ljava/io/File;)V

    aput-object v16, v17, v15

    invoke-static/range {v17 .. v17}, Lcom/bytedance/pangle/a/a;->a([Lcom/bytedance/pangle/a/a$a;)V

    goto :goto_1

    :cond_6
    move-object/from16 v18, v7

    move-object/from16 v1, p0

    move-object/from16 v2, p2

    move-object v3, v8

    move-object v4, v14

    move-object v5, v6

    move-object/from16 v6, p3

    .line 163
    invoke-direct/range {v1 .. v6}, Lcom/bytedance/pangle/plugin/c;->a(Lcom/bytedance/pangle/plugin/Plugin;Ljava/lang/String;Ljava/io/File;Ljava/io/File;Ljava/lang/StringBuilder;)V

    move-object/from16 v1, p0

    move-object/from16 v2, p1

    move-object/from16 v3, p2

    move-object/from16 v4, p3

    move-object v5, v8

    move-object v6, v14

    .line 165
    invoke-direct/range {v1 .. v6}, Lcom/bytedance/pangle/plugin/c;->a(Ljava/lang/String;Lcom/bytedance/pangle/plugin/Plugin;Ljava/lang/StringBuilder;Ljava/lang/String;Ljava/io/File;)Landroid/content/pm/PackageInfo;

    move-result-object v1

    aput-object v1, v18, v13

    .line 167
    :goto_1
    aget-object v1, v18, v13

    invoke-static {v0, v10, v1}, Lcom/bytedance/pangle/plugin/c;->a(Lcom/bytedance/pangle/plugin/Plugin;Ljava/lang/StringBuilder;Landroid/content/pm/PackageInfo;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return v15

    :catchall_0
    move-exception v0

    const-string v1, "loadPluginInternal "

    .line 169
    invoke-virtual {v10, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v10, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v1, ";"

    invoke-virtual {v10, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 170
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1, v11}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {v1, v9}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v2, "] "

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v12, v1, v0}, Lcom/bytedance/pangle/log/ZeusLogger;->w(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)V

    return v13
.end method


# virtual methods
.method final a(Ljava/lang/String;)Z
    .locals 13

    .line 72
    invoke-static {}, Lcom/bytedance/pangle/plugin/PluginManager;->getInstance()Lcom/bytedance/pangle/plugin/PluginManager;

    move-result-object v0

    invoke-virtual {v0, p1}, Lcom/bytedance/pangle/plugin/PluginManager;->getPlugin(Ljava/lang/String;)Lcom/bytedance/pangle/plugin/Plugin;

    move-result-object v0

    const/4 v1, 0x0

    if-nez v0, :cond_0

    .line 74
    invoke-static {p1}, Ljava/lang/String;->valueOf(Ljava/lang/Object;)Ljava/lang/String;

    move-result-object p1

    const-string v0, "PluginLoader loadPlugin, plugin == null, pkg = "

    invoke-virtual {v0, p1}, Ljava/lang/String;->concat(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p1

    const-string v0, "Zeus/load_pangle"

    invoke-static {v0, p1}, Lcom/bytedance/pangle/log/ZeusLogger;->w(Ljava/lang/String;Ljava/lang/String;)V

    return v1

    .line 77
    :cond_0
    monitor-enter v0

    .line 79
    :try_start_0
    invoke-virtual {v0}, Lcom/bytedance/pangle/plugin/Plugin;->isInstalled()Z

    move-result v2

    if-nez v2, :cond_1

    const-string v2, "Zeus/load_pangle"

    const-string v3, "PluginLoader loadPlugin, UN_INSTALLED, "

    .line 80
    invoke-static {p1}, Ljava/lang/String;->valueOf(Ljava/lang/Object;)Ljava/lang/String;

    move-result-object p1

    invoke-virtual {v3, p1}, Ljava/lang/String;->concat(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p1

    invoke-static {v2, p1}, Lcom/bytedance/pangle/log/ZeusLogger;->w(Ljava/lang/String;Ljava/lang/String;)V

    .line 81
    monitor-exit v0

    return v1

    .line 85
    :cond_1
    invoke-virtual {v0}, Lcom/bytedance/pangle/plugin/Plugin;->isLoaded()Z

    move-result v2

    const/4 v3, 0x1

    if-eqz v2, :cond_2

    .line 86
    monitor-exit v0

    return v3

    .line 90
    :cond_2
    sget-object v4, Lcom/bytedance/pangle/plugin/c;->a:Lcom/bytedance/pangle/h;

    const/16 v5, 0x7d0

    const/4 v6, 0x0

    iget-object v7, v0, Lcom/bytedance/pangle/plugin/Plugin;->mPkgName:Ljava/lang/String;

    invoke-virtual {v0}, Lcom/bytedance/pangle/plugin/Plugin;->getVersion()I

    move-result v8

    const/4 v9, 0x0

    invoke-virtual/range {v4 .. v9}, Lcom/bytedance/pangle/h;->a(IILjava/lang/String;ILjava/lang/Throwable;)V

    const-string v2, "Zeus/load_pangle"

    const-string v4, "PluginLoader"

    const-string v5, "loadPlugin:"

    .line 91
    invoke-static {p1}, Ljava/lang/String;->valueOf(Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v6

    invoke-virtual {v5, v6}, Ljava/lang/String;->concat(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v5

    invoke-static {v2, v4, v5}, Lcom/bytedance/pangle/log/a;->a(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Lcom/bytedance/pangle/log/a;

    move-result-object v2

    .line 92
    sget-object v4, Lcom/bytedance/pangle/c/b;->g:Ljava/lang/String;

    sget v5, Lcom/bytedance/pangle/c/b$a;->z:I

    iget-object v6, v0, Lcom/bytedance/pangle/plugin/Plugin;->mPkgName:Ljava/lang/String;

    .line 93
    invoke-virtual {v0}, Lcom/bytedance/pangle/plugin/Plugin;->getVersion()I

    move-result v7

    const-wide/16 v8, -0x1

    const/4 v10, 0x0

    .line 92
    invoke-static/range {v4 .. v10}, Lcom/bytedance/pangle/plugin/c;->a(Ljava/lang/String;ILjava/lang/String;IJLjava/lang/String;)V

    const/16 v4, 0x8

    new-array v5, v1, [Ljava/lang/Object;

    .line 94
    invoke-static {p1, v4, v5}, Lcom/bytedance/pangle/ZeusPluginStateListener;->postStateChange(Ljava/lang/String;I[Ljava/lang/Object;)V

    .line 96
    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    .line 98
    invoke-direct {p0, p1, v0, v4}, Lcom/bytedance/pangle/plugin/c;->a(Ljava/lang/String;Lcom/bytedance/pangle/plugin/Plugin;Ljava/lang/StringBuilder;)Z

    move-result v5

    const-string v6, "loadPluginInternal:"

    .line 99
    invoke-static {v5}, Ljava/lang/String;->valueOf(Z)Ljava/lang/String;

    move-result-object v7

    invoke-virtual {v6, v7}, Ljava/lang/String;->concat(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v6

    invoke-virtual {v2, v6}, Lcom/bytedance/pangle/log/a;->a(Ljava/lang/String;)J

    if-eqz v5, :cond_3

    const/4 v5, 0x3

    .line 102
    invoke-virtual {v0, v5}, Lcom/bytedance/pangle/plugin/Plugin;->setLifeCycle(I)V

    .line 103
    sget-object v6, Lcom/bytedance/pangle/c/b;->h:Ljava/lang/String;

    sget v7, Lcom/bytedance/pangle/c/b$a;->A:I

    iget-object v8, v0, Lcom/bytedance/pangle/plugin/Plugin;->mPkgName:Ljava/lang/String;

    .line 104
    invoke-virtual {v0}, Lcom/bytedance/pangle/plugin/Plugin;->getVersion()I

    move-result v9

    invoke-virtual {v2}, Lcom/bytedance/pangle/log/a;->a()J

    move-result-wide v10

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v12

    .line 103
    invoke-static/range {v6 .. v12}, Lcom/bytedance/pangle/plugin/c;->a(Ljava/lang/String;ILjava/lang/String;IJLjava/lang/String;)V

    const/16 v2, 0x9

    new-array v4, v1, [Ljava/lang/Object;

    .line 105
    invoke-static {p1, v2, v4}, Lcom/bytedance/pangle/ZeusPluginStateListener;->postStateChange(Ljava/lang/String;I[Ljava/lang/Object;)V

    .line 106
    sget-object v5, Lcom/bytedance/pangle/plugin/c;->a:Lcom/bytedance/pangle/h;

    const/16 v6, 0x834

    const/4 v7, 0x0

    iget-object v8, v0, Lcom/bytedance/pangle/plugin/Plugin;->mPkgName:Ljava/lang/String;

    invoke-virtual {v0}, Lcom/bytedance/pangle/plugin/Plugin;->getVersion()I

    move-result v9

    const/4 v10, 0x0

    invoke-virtual/range {v5 .. v10}, Lcom/bytedance/pangle/h;->a(IILjava/lang/String;ILjava/lang/Throwable;)V

    goto :goto_0

    :cond_3
    const-string v2, "plugin:"

    .line 108
    invoke-virtual {v4, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v2, v0, Lcom/bytedance/pangle/plugin/Plugin;->mPkgName:Ljava/lang/String;

    invoke-virtual {v4, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v2, " versionCode:"

    invoke-virtual {v4, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Lcom/bytedance/pangle/plugin/Plugin;->getVersion()I

    move-result v2

    invoke-virtual {v4, v2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v2, "load failed;"

    invoke-virtual {v4, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 109
    sget-object v5, Lcom/bytedance/pangle/c/b;->h:Ljava/lang/String;

    sget v6, Lcom/bytedance/pangle/c/b$a;->B:I

    iget-object v7, v0, Lcom/bytedance/pangle/plugin/Plugin;->mPkgName:Ljava/lang/String;

    .line 110
    invoke-virtual {v0}, Lcom/bytedance/pangle/plugin/Plugin;->getVersion()I

    move-result v8

    const-wide/16 v9, -0x1

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v11

    .line 109
    invoke-static/range {v5 .. v11}, Lcom/bytedance/pangle/plugin/c;->a(Ljava/lang/String;ILjava/lang/String;IJLjava/lang/String;)V

    const/16 v2, 0xa

    new-array v4, v1, [Ljava/lang/Object;

    .line 111
    invoke-static {p1, v2, v4}, Lcom/bytedance/pangle/ZeusPluginStateListener;->postStateChange(Ljava/lang/String;I[Ljava/lang/Object;)V

    .line 112
    sget-object v5, Lcom/bytedance/pangle/plugin/c;->a:Lcom/bytedance/pangle/h;

    const/16 v6, 0x834

    const/4 v7, -0x1

    iget-object v8, v0, Lcom/bytedance/pangle/plugin/Plugin;->mPkgName:Ljava/lang/String;

    invoke-virtual {v0}, Lcom/bytedance/pangle/plugin/Plugin;->getVersion()I

    move-result v9

    const/4 v10, 0x0

    invoke-virtual/range {v5 .. v10}, Lcom/bytedance/pangle/h;->a(IILjava/lang/String;ILjava/lang/Throwable;)V

    :goto_0
    const-string p1, "Zeus/load_pangle"

    const-string v2, "PluginLoader loadFinished, "

    .line 114
    invoke-static {v0}, Ljava/lang/String;->valueOf(Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v2, v4}, Ljava/lang/String;->concat(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    invoke-static {p1, v2}, Lcom/bytedance/pangle/log/ZeusLogger;->i(Ljava/lang/String;Ljava/lang/String;)V

    .line 117
    invoke-virtual {v0}, Lcom/bytedance/pangle/plugin/Plugin;->isLoaded()Z

    move-result p1

    if-eqz p1, :cond_4

    const-string p1, "Zeus/load_pangle"

    .line 118
    new-instance v1, Ljava/lang/StringBuilder;

    const-string v2, "PluginLoader postResult, LOADED "

    invoke-direct {v1, v2}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    iget-object v2, v0, Lcom/bytedance/pangle/plugin/Plugin;->mPkgName:Ljava/lang/String;

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {p1, v1}, Lcom/bytedance/pangle/log/ZeusLogger;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 119
    monitor-exit v0

    return v3

    .line 121
    :cond_4
    monitor-exit v0

    return v1

    :catchall_0
    move-exception p1

    .line 122
    monitor-exit v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    throw p1
.end method
