.class public final Lcom/bytedance/pangle/d/c;
.super Ljava/lang/Object;


# static fields
.field private static a:Ljava/io/File;

.field private static b:Ljava/io/File;

.field private static c:Ljava/io/File;


# direct methods
.method static constructor <clinit>()V
    .locals 0

    return-void
.end method

.method public static a()Ljava/lang/String;
    .locals 4

    .line 70
    invoke-static {}, Lcom/bytedance/pangle/Zeus;->getAppApplication()Landroid/app/Application;

    move-result-object v0

    .line 71
    sget-object v1, Lcom/bytedance/pangle/d/c;->b:Ljava/io/File;

    if-nez v1, :cond_1

    .line 72
    invoke-static {}, Lcom/bytedance/pangle/GlobalParam;->getInstance()Lcom/bytedance/pangle/GlobalParam;

    move-result-object v1

    invoke-virtual {v1}, Lcom/bytedance/pangle/GlobalParam;->getDownloadDir()Ljava/io/File;

    move-result-object v1

    if-nez v1, :cond_0

    .line 74
    new-instance v1, Ljava/io/File;

    invoke-virtual {v0}, Landroid/content/Context;->getFilesDir()Ljava/io/File;

    move-result-object v0

    new-instance v2, Ljava/lang/StringBuilder;

    const-string v3, ".pangle"

    invoke-direct {v2, v3}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    sget-object v3, Lcom/bytedance/pangle/g;->b:Ljava/lang/String;

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-direct {v1, v0, v2}, Ljava/io/File;-><init>(Ljava/io/File;Ljava/lang/String;)V

    .line 76
    :cond_0
    sput-object v1, Lcom/bytedance/pangle/d/c;->b:Ljava/io/File;

    .line 78
    :cond_1
    sget-object v0, Lcom/bytedance/pangle/d/c;->b:Ljava/io/File;

    invoke-static {v0}, Lcom/bytedance/pangle/d/c;->a(Ljava/io/File;)Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method private static a(Ljava/io/File;)Ljava/lang/String;
    .locals 1

    if-eqz p0, :cond_1

    .line 39
    invoke-virtual {p0}, Ljava/io/File;->exists()Z

    move-result v0

    if-nez v0, :cond_0

    .line 40
    invoke-virtual {p0}, Ljava/io/File;->mkdirs()Z

    .line 42
    :cond_0
    invoke-virtual {p0}, Ljava/io/File;->getPath()Ljava/lang/String;

    move-result-object p0

    return-object p0

    :cond_1
    const/4 p0, 0x0

    return-object p0
.end method

.method public static a(Ljava/lang/String;)Ljava/lang/String;
    .locals 2

    const/4 v0, 0x1

    new-array v0, v0, [Ljava/lang/String;

    const/4 v1, 0x0

    aput-object p0, v0, v1

    .line 123
    invoke-static {v0}, Lcom/bytedance/pangle/d/c;->a([Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0

    return-object p0
.end method

.method public static a(Ljava/lang/String;I)Ljava/lang/String;
    .locals 4

    .line 111
    invoke-static {}, Lcom/bytedance/pangle/d/c;->d()V

    .line 112
    sget-object v0, Lcom/bytedance/pangle/d/c;->a:Ljava/io/File;

    const/4 v1, 0x2

    new-array v2, v1, [Ljava/lang/String;

    const/4 v3, 0x0

    aput-object p0, v2, v3

    .line 113
    invoke-static {p1}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object p0

    const-string p1, "version-"

    invoke-virtual {p1, p0}, Ljava/lang/String;->concat(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0

    const/4 p1, 0x1

    aput-object p0, v2, p1

    :goto_0
    if-ge v3, v1, :cond_1

    .line 114
    aget-object p0, v2, v3

    .line 115
    invoke-static {p0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p1

    if-nez p1, :cond_0

    .line 116
    new-instance p1, Ljava/io/File;

    invoke-direct {p1, v0, p0}, Ljava/io/File;-><init>(Ljava/io/File;Ljava/lang/String;)V

    move-object v0, p1

    :cond_0
    add-int/lit8 v3, v3, 0x1

    goto :goto_0

    :cond_1
    if-eqz v0, :cond_2

    .line 119
    invoke-virtual {v0}, Ljava/io/File;->getPath()Ljava/lang/String;

    move-result-object p0

    return-object p0

    :cond_2
    const/4 p0, 0x0

    return-object p0
.end method

.method private static varargs a([Ljava/lang/String;)Ljava/lang/String;
    .locals 5

    .line 49
    invoke-static {}, Lcom/bytedance/pangle/d/c;->d()V

    .line 50
    sget-object v0, Lcom/bytedance/pangle/d/c;->a:Ljava/io/File;

    .line 51
    array-length v1, p0

    if-lez v1, :cond_1

    .line 52
    array-length v1, p0

    const/4 v2, 0x0

    :goto_0
    if-ge v2, v1, :cond_1

    aget-object v3, p0, v2

    .line 53
    invoke-static {v3}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v4

    if-nez v4, :cond_0

    .line 54
    new-instance v4, Ljava/io/File;

    invoke-direct {v4, v0, v3}, Ljava/io/File;-><init>(Ljava/io/File;Ljava/lang/String;)V

    move-object v0, v4

    :cond_0
    add-int/lit8 v2, v2, 0x1

    goto :goto_0

    .line 58
    :cond_1
    invoke-static {v0}, Lcom/bytedance/pangle/d/c;->a(Ljava/io/File;)Ljava/lang/String;

    move-result-object p0

    return-object p0
.end method

.method public static b()Ljava/lang/String;
    .locals 4

    .line 85
    invoke-static {}, Lcom/bytedance/pangle/Zeus;->getAppApplication()Landroid/app/Application;

    move-result-object v0

    .line 86
    sget-object v1, Lcom/bytedance/pangle/d/c;->c:Ljava/io/File;

    if-nez v1, :cond_0

    .line 87
    new-instance v1, Ljava/io/File;

    invoke-virtual {v0}, Landroid/content/Context;->getFilesDir()Ljava/io/File;

    move-result-object v0

    new-instance v2, Ljava/lang/StringBuilder;

    const-string v3, ".pangle"

    invoke-direct {v2, v3}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    sget-object v3, Lcom/bytedance/pangle/g;->a:Ljava/lang/String;

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-direct {v1, v0, v2}, Ljava/io/File;-><init>(Ljava/io/File;Ljava/lang/String;)V

    sput-object v1, Lcom/bytedance/pangle/d/c;->c:Ljava/io/File;

    .line 89
    :cond_0
    sget-object v0, Lcom/bytedance/pangle/d/c;->c:Ljava/io/File;

    invoke-static {v0}, Lcom/bytedance/pangle/d/c;->a(Ljava/io/File;)Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method public static b(Ljava/lang/String;I)Ljava/lang/String;
    .locals 2

    const/4 v0, 0x3

    new-array v0, v0, [Ljava/lang/String;

    const/4 v1, 0x0

    aput-object p0, v0, v1

    .line 136
    invoke-static {p1}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object p0

    const-string p1, "version-"

    invoke-virtual {p1, p0}, Ljava/lang/String;->concat(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0

    const/4 p1, 0x1

    aput-object p0, v0, p1

    const/4 p0, 0x2

    const-string p1, "apk"

    aput-object p1, v0, p0

    invoke-static {v0}, Lcom/bytedance/pangle/d/c;->a([Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0

    .line 137
    new-instance p1, Ljava/io/File;

    const-string v0, "base-1.apk"

    invoke-direct {p1, p0, v0}, Ljava/io/File;-><init>(Ljava/lang/String;Ljava/lang/String;)V

    invoke-virtual {p1}, Ljava/io/File;->getPath()Ljava/lang/String;

    move-result-object p0

    return-object p0
.end method

.method public static c()Ljava/lang/String;
    .locals 3

    .line 96
    invoke-static {}, Lcom/bytedance/pangle/Zeus;->getAppApplication()Landroid/app/Application;

    move-result-object v0

    :try_start_0
    const-string v1, "mounted"

    .line 98
    invoke-static {}, Landroid/os/Environment;->getExternalStorageState()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v2}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_0

    .line 99
    new-instance v1, Ljava/lang/StringBuilder;

    const-string v2, ".pangle"

    invoke-direct {v1, v2}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    sget-object v2, Lcom/bytedance/pangle/g;->b:Ljava/lang/String;

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Landroid/content/Context;->getExternalFilesDir(Ljava/lang/String;)Ljava/io/File;

    move-result-object v0

    if-eqz v0, :cond_0

    .line 101
    invoke-static {v0}, Lcom/bytedance/pangle/d/c;->a(Ljava/io/File;)Ljava/lang/String;

    move-result-object v0
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    return-object v0

    :catch_0
    move-exception v0

    .line 105
    invoke-virtual {v0}, Ljava/lang/Exception;->printStackTrace()V

    :cond_0
    const/4 v0, 0x0

    return-object v0
.end method

.method public static c(Ljava/lang/String;I)Ljava/lang/String;
    .locals 6

    .line 141
    invoke-static {}, Lcom/bytedance/pangle/util/i;->h()Z

    move-result v0

    const/4 v1, 0x2

    const-string v2, "version-"

    const/4 v3, 0x1

    const/4 v4, 0x0

    const/4 v5, 0x3

    if-eqz v0, :cond_0

    const/4 v0, 0x5

    new-array v0, v0, [Ljava/lang/String;

    aput-object p0, v0, v4

    .line 142
    invoke-static {p1}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object p0

    invoke-virtual {v2, p0}, Ljava/lang/String;->concat(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0

    aput-object p0, v0, v3

    const-string p0, "apk"

    aput-object p0, v0, v1

    const-string p0, "oat"

    aput-object p0, v0, v5

    const/4 p0, 0x4

    invoke-static {}, Lcom/bytedance/pangle/e/b;->a()Ljava/lang/String;

    move-result-object p1

    aput-object p1, v0, p0

    invoke-static {v0}, Lcom/bytedance/pangle/d/c;->a([Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0

    return-object p0

    :cond_0
    new-array v0, v5, [Ljava/lang/String;

    aput-object p0, v0, v4

    .line 144
    invoke-static {p1}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object p0

    invoke-virtual {v2, p0}, Ljava/lang/String;->concat(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0

    aput-object p0, v0, v3

    const-string p0, "dalvik-cache"

    aput-object p0, v0, v1

    invoke-static {v0}, Lcom/bytedance/pangle/d/c;->a([Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0

    return-object p0
.end method

.method public static d(Ljava/lang/String;I)Ljava/lang/String;
    .locals 2

    const/4 v0, 0x3

    new-array v0, v0, [Ljava/lang/String;

    const/4 v1, 0x0

    aput-object p0, v0, v1

    .line 150
    invoke-static {p1}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object p0

    const-string p1, "version-"

    invoke-virtual {p1, p0}, Ljava/lang/String;->concat(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0

    const/4 p1, 0x1

    aput-object p0, v0, p1

    const/4 p0, 0x2

    const-string p1, "lib"

    aput-object p1, v0, p0

    invoke-static {v0}, Lcom/bytedance/pangle/d/c;->a([Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0

    return-object p0
.end method

.method private static d()V
    .locals 4

    .line 31
    sget-object v0, Lcom/bytedance/pangle/d/c;->a:Ljava/io/File;

    if-nez v0, :cond_0

    .line 32
    new-instance v0, Ljava/io/File;

    invoke-static {}, Lcom/bytedance/pangle/Zeus;->getAppApplication()Landroid/app/Application;

    move-result-object v1

    invoke-virtual {v1}, Landroid/app/Application;->getFilesDir()Ljava/io/File;

    move-result-object v1

    new-instance v2, Ljava/lang/StringBuilder;

    const-string v3, "pangle"

    invoke-direct {v2, v3}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    sget-object v3, Lcom/bytedance/pangle/g;->c:Ljava/lang/String;

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-direct {v0, v1, v2}, Ljava/io/File;-><init>(Ljava/io/File;Ljava/lang/String;)V

    .line 33
    sput-object v0, Lcom/bytedance/pangle/d/c;->a:Ljava/io/File;

    invoke-static {v0}, Lcom/bytedance/pangle/d/c;->a(Ljava/io/File;)Ljava/lang/String;

    :cond_0
    return-void
.end method

.method public static e(Ljava/lang/String;I)Ljava/lang/String;
    .locals 2

    const/4 v0, 0x4

    new-array v0, v0, [Ljava/lang/String;

    const/4 v1, 0x0

    aput-object p0, v0, v1

    .line 154
    invoke-static {p1}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object p0

    const-string p1, "version-"

    invoke-virtual {p1, p0}, Ljava/lang/String;->concat(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0

    const/4 p1, 0x1

    aput-object p0, v0, p1

    const/4 p0, 0x2

    const-string p1, "apk"

    aput-object p1, v0, p0

    const/4 p0, 0x3

    const-string p1, "temp"

    aput-object p1, v0, p0

    invoke-static {v0}, Lcom/bytedance/pangle/d/c;->a([Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0

    .line 155
    new-instance p1, Ljava/io/File;

    const-string v0, "base-1.apk"

    invoke-direct {p1, p0, v0}, Ljava/io/File;-><init>(Ljava/lang/String;Ljava/lang/String;)V

    invoke-virtual {p1}, Ljava/io/File;->getPath()Ljava/lang/String;

    move-result-object p0

    return-object p0
.end method

.method public static f(Ljava/lang/String;I)Ljava/lang/String;
    .locals 2

    const/4 v0, 0x3

    new-array v0, v0, [Ljava/lang/String;

    const/4 v1, 0x0

    aput-object p0, v0, v1

    .line 159
    invoke-static {p1}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object p0

    const-string p1, "version-"

    invoke-virtual {p1, p0}, Ljava/lang/String;->concat(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0

    const/4 p1, 0x1

    aput-object p0, v0, p1

    const/4 p0, 0x2

    const-string p1, "apk"

    aput-object p1, v0, p0

    invoke-static {v0}, Lcom/bytedance/pangle/d/c;->a([Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0

    .line 160
    new-instance p1, Ljava/io/File;

    invoke-direct {p1, p0}, Ljava/io/File;-><init>(Ljava/lang/String;)V

    invoke-virtual {p1}, Ljava/io/File;->getPath()Ljava/lang/String;

    move-result-object p0

    return-object p0
.end method

.method public static g(Ljava/lang/String;I)Ljava/lang/String;
    .locals 2

    const/4 v0, 0x4

    new-array v0, v0, [Ljava/lang/String;

    const/4 v1, 0x0

    aput-object p0, v0, v1

    .line 164
    invoke-static {p1}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object p0

    const-string p1, "version-"

    invoke-virtual {p1, p0}, Ljava/lang/String;->concat(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0

    const/4 p1, 0x1

    aput-object p0, v0, p1

    const/4 p0, 0x2

    const-string p1, "apk"

    aput-object p1, v0, p0

    const/4 p0, 0x3

    const-string p1, "temp"

    aput-object p1, v0, p0

    invoke-static {v0}, Lcom/bytedance/pangle/d/c;->a([Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0

    .line 165
    new-instance p1, Ljava/io/File;

    invoke-direct {p1, p0}, Ljava/io/File;-><init>(Ljava/lang/String;)V

    invoke-virtual {p1}, Ljava/io/File;->getPath()Ljava/lang/String;

    move-result-object p0

    return-object p0
.end method

.method public static h(Ljava/lang/String;I)Ljava/lang/String;
    .locals 6

    .line 169
    invoke-static {}, Lcom/bytedance/pangle/util/i;->h()Z

    move-result v0

    const/4 v1, 0x2

    const-string v2, "version-"

    const/4 v3, 0x1

    const/4 v4, 0x0

    const/4 v5, 0x3

    if-eqz v0, :cond_0

    const/4 v0, 0x6

    new-array v0, v0, [Ljava/lang/String;

    aput-object p0, v0, v4

    .line 170
    invoke-static {p1}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object p0

    invoke-virtual {v2, p0}, Ljava/lang/String;->concat(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0

    aput-object p0, v0, v3

    const-string p0, "apk"

    aput-object p0, v0, v1

    const-string p0, "temp"

    aput-object p0, v0, v5

    const/4 p0, 0x4

    const-string p1, "oat"

    aput-object p1, v0, p0

    const/4 p0, 0x5

    invoke-static {}, Lcom/bytedance/pangle/e/b;->a()Ljava/lang/String;

    move-result-object p1

    aput-object p1, v0, p0

    invoke-static {v0}, Lcom/bytedance/pangle/d/c;->a([Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0

    return-object p0

    :cond_0
    new-array v0, v5, [Ljava/lang/String;

    aput-object p0, v0, v4

    .line 172
    invoke-static {p1}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object p0

    invoke-virtual {v2, p0}, Ljava/lang/String;->concat(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0

    aput-object p0, v0, v3

    const-string p0, "dalvik-cache"

    aput-object p0, v0, v1

    invoke-static {v0}, Lcom/bytedance/pangle/d/c;->a([Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0

    return-object p0
.end method

.method public static i(Ljava/lang/String;I)Ljava/lang/String;
    .locals 2

    const/4 v0, 0x3

    new-array v0, v0, [Ljava/lang/String;

    const/4 v1, 0x0

    aput-object p0, v0, v1

    .line 177
    invoke-static {p1}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object p0

    const-string p1, "version-"

    invoke-virtual {p1, p0}, Ljava/lang/String;->concat(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0

    const/4 p1, 0x1

    aput-object p0, v0, p1

    const/4 p0, 0x2

    const-string p1, "secondary-dexes"

    aput-object p1, v0, p0

    invoke-static {v0}, Lcom/bytedance/pangle/d/c;->a([Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0

    return-object p0
.end method
