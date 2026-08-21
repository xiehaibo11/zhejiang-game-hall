.class public final Lcom/bytedance/pangle/util/j;
.super Ljava/lang/Object;


# static fields
.field static volatile a:Ljava/util/ArrayList;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/ArrayList<",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation
.end field

.field private static b:Ljava/lang/String;


# direct methods
.method static constructor <clinit>()V
    .locals 0

    return-void
.end method

.method public constructor <init>()V
    .locals 0

    .line 27
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method public static a()Ljava/util/List;
    .locals 3
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "()",
            "Ljava/util/List<",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation

    .line 41
    :try_start_0
    const-class v0, Landroid/content/res/AssetManager;

    invoke-virtual {v0}, Ljava/lang/Class;->newInstance()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Landroid/content/res/AssetManager;
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception v0

    const-string v1, "Zeus/resources_pangle"

    const-string v2, "Execute \'AssetManager.class.newInstance()\' failed. "

    .line 43
    invoke-static {v1, v2, v0}, Lcom/bytedance/pangle/log/ZeusLogger;->errReport(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)V

    const/4 v0, 0x0

    .line 46
    :goto_0
    invoke-static {v0}, Lcom/bytedance/pangle/util/j;->a(Landroid/content/res/AssetManager;)Ljava/util/List;

    move-result-object v0

    return-object v0
.end method

.method public static a(Landroid/content/res/AssetManager;)Ljava/util/List;
    .locals 7
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Landroid/content/res/AssetManager;",
            ")",
            "Ljava/util/List<",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation

    .line 84
    new-instance v0, Ljava/util/ArrayList;

    invoke-direct {v0}, Ljava/util/ArrayList;-><init>()V

    if-nez p0, :cond_0

    return-object v0

    .line 94
    :cond_0
    :try_start_0
    invoke-static {}, Lcom/bytedance/pangle/util/i;->i()Z

    move-result v1

    const/4 v2, 0x0

    if-eqz v1, :cond_1

    const-string v1, "getApkAssets"

    new-array v3, v2, [Ljava/lang/Object;

    .line 95
    invoke-static {p0, v1, v3}, Lcom/bytedance/pangle/util/MethodUtils;->invokeMethod(Ljava/lang/Object;Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p0

    check-cast p0, [Ljava/lang/Object;

    check-cast p0, [Ljava/lang/Object;

    if-eqz p0, :cond_3

    .line 96
    array-length v1, p0

    if-lez v1, :cond_3

    .line 97
    array-length v1, p0

    move v3, v2

    :goto_0
    if-ge v3, v1, :cond_3

    aget-object v4, p0, v3

    const-string v5, "getAssetPath"

    new-array v6, v2, [Ljava/lang/Object;

    .line 98
    invoke-static {v4, v5, v6}, Lcom/bytedance/pangle/util/MethodUtils;->invokeMethod(Ljava/lang/Object;Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v4

    check-cast v4, Ljava/lang/String;

    invoke-interface {v0, v4}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    add-int/lit8 v3, v3, 0x1

    goto :goto_0

    :cond_1
    const-string v1, "getStringBlockCount"

    new-array v3, v2, [Ljava/lang/Object;

    .line 102
    invoke-static {p0, v1, v3}, Lcom/bytedance/pangle/util/MethodUtils;->invokeMethod(Ljava/lang/Object;Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Ljava/lang/Integer;

    invoke-virtual {v1}, Ljava/lang/Integer;->intValue()I

    move-result v1
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    move v3, v2

    :goto_1
    if-ge v3, v1, :cond_3

    :try_start_1
    const-string v4, "getCookieName"

    const/4 v5, 0x1

    new-array v5, v5, [Ljava/lang/Object;

    add-int/lit8 v6, v3, 0x1

    .line 106
    invoke-static {v6}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v6

    aput-object v6, v5, v2

    invoke-static {p0, v4, v5}, Lcom/bytedance/pangle/util/MethodUtils;->invokeMethod(Ljava/lang/Object;Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v4

    check-cast v4, Ljava/lang/String;

    .line 107
    invoke-static {v4}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v5

    if-nez v5, :cond_2

    .line 108
    invoke-interface {v0, v4}, Ljava/util/List;->add(Ljava/lang/Object;)Z
    :try_end_1
    .catch Ljava/lang/IndexOutOfBoundsException; {:try_start_1 .. :try_end_1} :catch_0
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    :catch_0
    :cond_2
    add-int/lit8 v3, v3, 0x1

    goto :goto_1

    :catchall_0
    move-exception p0

    const-string v1, "Zeus/resources_pangle"

    const-string v2, "ResUtils GetAssetsPaths error. "

    .line 116
    invoke-static {v1, v2, p0}, Lcom/bytedance/pangle/log/ZeusLogger;->errReport(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)V

    :cond_3
    return-object v0
.end method

.method public static a(Landroid/content/res/AssetManager;Ljava/lang/String;)Z
    .locals 7

    const/4 v0, 0x0

    .line 131
    :try_start_0
    invoke-static {}, Lcom/bytedance/pangle/util/i;->i()Z

    move-result v1

    const/4 v2, 0x1

    if-eqz v1, :cond_1

    const-string v1, "getApkAssets"

    new-array v3, v0, [Ljava/lang/Object;

    .line 132
    invoke-static {p0, v1, v3}, Lcom/bytedance/pangle/util/MethodUtils;->invokeMethod(Ljava/lang/Object;Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p0

    check-cast p0, [Ljava/lang/Object;

    check-cast p0, [Ljava/lang/Object;

    if-eqz p0, :cond_3

    .line 133
    array-length v1, p0

    if-lez v1, :cond_3

    .line 134
    array-length v1, p0

    move v3, v0

    :goto_0
    if-ge v3, v1, :cond_3

    aget-object v4, p0, v3

    const-string v5, "getAssetPath"

    new-array v6, v0, [Ljava/lang/Object;

    .line 135
    invoke-static {v4, v5, v6}, Lcom/bytedance/pangle/util/MethodUtils;->invokeMethod(Ljava/lang/Object;Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v4

    check-cast v4, Ljava/lang/String;

    .line 136
    invoke-static {v4, p1}, Landroid/text/TextUtils;->equals(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Z

    move-result v4

    if-eqz v4, :cond_0

    return v2

    :cond_0
    add-int/lit8 v3, v3, 0x1

    goto :goto_0

    :cond_1
    const-string v1, "getStringBlockCount"

    new-array v3, v0, [Ljava/lang/Object;

    .line 142
    invoke-static {p0, v1, v3}, Lcom/bytedance/pangle/util/MethodUtils;->invokeMethod(Ljava/lang/Object;Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Ljava/lang/Integer;

    invoke-virtual {v1}, Ljava/lang/Integer;->intValue()I

    move-result v1

    move v3, v0

    :cond_2
    if-ge v3, v1, :cond_3

    const-string v4, "getCookieName"

    new-array v5, v2, [Ljava/lang/Object;

    add-int/lit8 v3, v3, 0x1

    .line 144
    invoke-static {v3}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v6

    aput-object v6, v5, v0

    invoke-static {p0, v4, v5}, Lcom/bytedance/pangle/util/MethodUtils;->invokeMethod(Ljava/lang/Object;Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v4

    check-cast v4, Ljava/lang/String;

    .line 145
    invoke-static {v4, p1}, Landroid/text/TextUtils;->equals(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Z

    move-result v4
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    if-eqz v4, :cond_2

    return v2

    :catchall_0
    move-exception p0

    const-string p1, "Zeus/resources_pangle"

    const-string v1, "containsPath error. "

    .line 151
    invoke-static {p1, v1, p0}, Lcom/bytedance/pangle/log/ZeusLogger;->errReport(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)V

    :cond_3
    return v0
.end method

.method private static a(Landroid/content/pm/ApplicationInfo;)[Ljava/lang/String;
    .locals 6

    const/4 v0, 0x0

    .line 227
    :try_start_0
    const-class v1, Landroid/content/pm/ApplicationInfo;

    const-string v2, "resourceDirs"

    invoke-static {v1, v2}, Lcom/bytedance/pangle/b/b/a;->a(Ljava/lang/Class;Ljava/lang/String;)Ljava/lang/reflect/Field;

    move-result-object v1

    invoke-virtual {v1, p0}, Ljava/lang/reflect/Field;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, [Ljava/lang/String;

    check-cast v1, [Ljava/lang/String;
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception v1

    const-string v2, "Zeus/load_pangle"

    const-string v3, "get resourceDirs failed."

    .line 229
    invoke-static {v2, v3, v1}, Lcom/bytedance/pangle/log/ZeusLogger;->errReport(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)V

    new-array v1, v0, [Ljava/lang/String;

    :goto_0
    const/4 v2, 0x3

    new-array v3, v2, [[Ljava/lang/String;

    .line 232
    iget-object v4, p0, Landroid/content/pm/ApplicationInfo;->splitSourceDirs:[Ljava/lang/String;

    aput-object v4, v3, v0

    iget-object v4, p0, Landroid/content/pm/ApplicationInfo;->sharedLibraryFiles:[Ljava/lang/String;

    const/4 v5, 0x1

    aput-object v4, v3, v5

    const/4 v4, 0x2

    aput-object v1, v3, v4

    .line 233
    new-instance v1, Ljava/util/ArrayList;

    const/16 v4, 0xa

    invoke-direct {v1, v4}, Ljava/util/ArrayList;-><init>(I)V

    .line 234
    iget-object v4, p0, Landroid/content/pm/ApplicationInfo;->sourceDir:Ljava/lang/String;

    if-eqz v4, :cond_0

    .line 235
    iget-object p0, p0, Landroid/content/pm/ApplicationInfo;->sourceDir:Ljava/lang/String;

    invoke-interface {v1, p0}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    :cond_0
    move p0, v0

    :goto_1
    if-ge p0, v2, :cond_2

    .line 237
    aget-object v4, v3, p0

    if-eqz v4, :cond_1

    .line 239
    invoke-static {v4}, Ljava/util/Arrays;->asList([Ljava/lang/Object;)Ljava/util/List;

    move-result-object v4

    invoke-interface {v1, v4}, Ljava/util/List;->addAll(Ljava/util/Collection;)Z

    :cond_1
    add-int/lit8 p0, p0, 0x1

    goto :goto_1

    :cond_2
    new-array p0, v0, [Ljava/lang/String;

    .line 242
    invoke-interface {v1, p0}, Ljava/util/List;->toArray([Ljava/lang/Object;)[Ljava/lang/Object;

    move-result-object p0

    check-cast p0, [Ljava/lang/String;

    return-object p0
.end method

.method public static b(Landroid/content/res/AssetManager;)Ljava/lang/String;
    .locals 3

    .line 163
    invoke-static {p0}, Lcom/bytedance/pangle/util/j;->a(Landroid/content/res/AssetManager;)Ljava/util/List;

    move-result-object p0

    .line 1173
    new-instance v0, Ljava/lang/StringBuilder;

    const-string v1, "["

    invoke-direct {v0, v1}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    .line 1174
    invoke-interface {p0}, Ljava/util/List;->size()I

    move-result v1

    if-lez v1, :cond_1

    .line 1175
    invoke-interface {p0}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object p0

    :goto_0
    invoke-interface {p0}, Ljava/util/Iterator;->hasNext()Z

    move-result v1

    const-string v2, " , "

    if-eqz v1, :cond_0

    invoke-interface {p0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Ljava/lang/String;

    .line 1176
    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    goto :goto_0

    .line 1180
    :cond_0
    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->lastIndexOf(Ljava/lang/String;)I

    move-result p0

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->length()I

    move-result v1

    invoke-virtual {v0, p0, v1}, Ljava/lang/StringBuilder;->delete(II)Ljava/lang/StringBuilder;

    :cond_1
    const-string p0, "]"

    .line 1183
    invoke-virtual {v0, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 1185
    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p0

    return-object p0
.end method

.method public static declared-synchronized b()Ljava/util/List;
    .locals 6
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "()",
            "Ljava/util/List<",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation

    const-class v0, Lcom/bytedance/pangle/util/j;

    monitor-enter v0

    .line 191
    :try_start_0
    sget-object v1, Lcom/bytedance/pangle/util/j;->a:Ljava/util/ArrayList;

    if-nez v1, :cond_5

    .line 192
    monitor-enter v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_1

    .line 193
    :try_start_1
    sget-object v1, Lcom/bytedance/pangle/util/j;->a:Ljava/util/ArrayList;

    if-nez v1, :cond_4

    .line 194
    new-instance v1, Ljava/util/ArrayList;

    invoke-direct {v1}, Ljava/util/ArrayList;-><init>()V

    sput-object v1, Lcom/bytedance/pangle/util/j;->a:Ljava/util/ArrayList;

    .line 195
    invoke-static {}, Lcom/bytedance/pangle/util/i;->c()Z

    move-result v1
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    const/4 v2, 0x0

    if-eqz v1, :cond_0

    .line 197
    :try_start_2
    invoke-static {}, Lcom/bytedance/pangle/Zeus;->getAppApplication()Landroid/app/Application;

    move-result-object v1

    invoke-virtual {v1}, Landroid/app/Application;->getResources()Landroid/content/res/Resources;

    move-result-object v1

    const-string v3, "android:string/config_webViewPackageName"

    const-string v4, "string"

    const-string v5, "android"

    .line 198
    invoke-virtual {v1, v3, v4, v5}, Landroid/content/res/Resources;->getIdentifier(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)I

    move-result v3

    .line 199
    sget-object v4, Lcom/bytedance/pangle/util/j;->a:Ljava/util/ArrayList;

    invoke-static {}, Lcom/bytedance/pangle/Zeus;->getAppApplication()Landroid/app/Application;

    move-result-object v5

    invoke-virtual {v1, v3}, Landroid/content/res/Resources;->getString(I)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v5, v1, v2}, Landroid/app/Application;->createPackageContext(Ljava/lang/String;I)Landroid/content/Context;

    move-result-object v1

    invoke-virtual {v1}, Landroid/content/Context;->getApplicationInfo()Landroid/content/pm/ApplicationInfo;

    move-result-object v1

    iget-object v1, v1, Landroid/content/pm/ApplicationInfo;->sourceDir:Ljava/lang/String;

    invoke-virtual {v4, v1}, Ljava/util/ArrayList;->add(Ljava/lang/Object;)Z
    :try_end_2
    .catch Ljava/lang/Exception; {:try_start_2 .. :try_end_2} :catch_0
    .catchall {:try_start_2 .. :try_end_2} :catchall_0

    goto :goto_0

    :catch_0
    move-exception v1

    :try_start_3
    const-string v2, "Zeus/load_pangle"

    const-string v3, "getWebViewPaths1 failed."

    .line 201
    invoke-static {v2, v3, v1}, Lcom/bytedance/pangle/log/ZeusLogger;->w(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)V

    goto :goto_0

    .line 203
    :cond_0
    invoke-static {}, Lcom/bytedance/pangle/util/i;->g()Z

    move-result v1
    :try_end_3
    .catchall {:try_start_3 .. :try_end_3} :catchall_0

    if-eqz v1, :cond_4

    :try_start_4
    const-string v1, "android.webkit.WebViewFactory"

    .line 205
    invoke-static {v1}, Ljava/lang/Class;->forName(Ljava/lang/String;)Ljava/lang/Class;

    move-result-object v1

    const-string v3, "getWebViewContextAndSetProvider"

    new-array v4, v2, [Ljava/lang/Object;

    .line 206
    invoke-static {v1, v3, v4}, Lcom/bytedance/pangle/util/MethodUtils;->invokeStaticMethod(Ljava/lang/Class;Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v1

    .line 1278
    sget v3, Landroid/os/Build$VERSION;->SDK_INT:I

    const/16 v4, 0x1d

    if-ge v3, v4, :cond_1

    sget v3, Landroid/os/Build$VERSION;->SDK_INT:I

    const/16 v4, 0x1c

    if-ne v3, v4, :cond_2

    sget v3, Landroid/os/Build$VERSION;->PREVIEW_SDK_INT:I

    if-lez v3, :cond_2

    :cond_1
    const/4 v2, 0x1

    :cond_2
    if-eqz v2, :cond_3

    .line 208
    sget-object v2, Lcom/bytedance/pangle/util/j;->a:Ljava/util/ArrayList;

    check-cast v1, Landroid/content/Context;

    invoke-virtual {v1}, Landroid/content/Context;->getApplicationInfo()Landroid/content/pm/ApplicationInfo;

    move-result-object v1

    invoke-static {v1}, Lcom/bytedance/pangle/util/j;->a(Landroid/content/pm/ApplicationInfo;)[Ljava/lang/String;

    move-result-object v1

    invoke-static {v2, v1}, Ljava/util/Collections;->addAll(Ljava/util/Collection;[Ljava/lang/Object;)Z

    goto :goto_0

    .line 210
    :cond_3
    check-cast v1, Landroid/content/Context;

    invoke-virtual {v1}, Landroid/content/Context;->getApplicationInfo()Landroid/content/pm/ApplicationInfo;

    move-result-object v1

    iget-object v1, v1, Landroid/content/pm/ApplicationInfo;->sourceDir:Ljava/lang/String;

    .line 211
    sget-object v2, Lcom/bytedance/pangle/util/j;->a:Ljava/util/ArrayList;

    check-cast v1, Ljava/lang/String;

    invoke-virtual {v2, v1}, Ljava/util/ArrayList;->add(Ljava/lang/Object;)Z
    :try_end_4
    .catch Ljava/lang/Exception; {:try_start_4 .. :try_end_4} :catch_1
    .catchall {:try_start_4 .. :try_end_4} :catchall_0

    goto :goto_0

    :catch_1
    move-exception v1

    :try_start_5
    const-string v2, "Zeus/load_pangle"

    const-string v3, "getWebViewPaths2 failed."

    .line 214
    invoke-static {v2, v3, v1}, Lcom/bytedance/pangle/log/ZeusLogger;->w(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)V

    .line 218
    :cond_4
    :goto_0
    monitor-exit v0

    goto :goto_1

    :catchall_0
    move-exception v1

    monitor-exit v0
    :try_end_5
    .catchall {:try_start_5 .. :try_end_5} :catchall_0

    :try_start_6
    throw v1

    .line 220
    :cond_5
    :goto_1
    sget-object v1, Lcom/bytedance/pangle/util/j;->a:Ljava/util/ArrayList;
    :try_end_6
    .catchall {:try_start_6 .. :try_end_6} :catchall_1

    monitor-exit v0

    return-object v1

    :catchall_1
    move-exception v1

    monitor-exit v0

    throw v1
.end method
