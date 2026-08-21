.class public final Lcom/tramini/plugin/a/g/e;
.super Ljava/lang/Object;


# static fields
.field private static a:Ljava/lang/String; = ""

.field private static b:Ljava/lang/String; = ""

.field private static c:Ljava/lang/String; = ""

.field private static d:Ljava/lang/String; = ""

.field private static e:I

.field private static f:Ljava/lang/String;


# direct methods
.method static constructor <clinit>()V
    .locals 0

    return-void
.end method

.method private constructor <init>()V
    .locals 0

    .line 30
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method public static a()Ljava/lang/String;
    .locals 2

    .line 112
    invoke-static {}, Lcom/tramini/plugin/a/a/c;->a()Lcom/tramini/plugin/a/a/c;

    move-result-object v0

    const-string v1, "os_vc"

    invoke-virtual {v0, v1}, Lcom/tramini/plugin/a/a/c;->a(Ljava/lang/String;)Z

    move-result v0

    if-eqz v0, :cond_0

    const-string v0, ""

    return-object v0

    .line 116
    :cond_0
    sget-object v0, Lcom/tramini/plugin/a/g/e;->b:Ljava/lang/String;

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_1

    .line 1141
    sget v0, Landroid/os/Build$VERSION;->SDK_INT:I

    .line 118
    invoke-static {v0}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v0

    sput-object v0, Lcom/tramini/plugin/a/g/e;->b:Ljava/lang/String;

    .line 121
    :cond_1
    sget-object v0, Lcom/tramini/plugin/a/g/e;->b:Ljava/lang/String;

    return-object v0
.end method

.method public static a(Landroid/content/Context;)Ljava/lang/String;
    .locals 3

    .line 39
    invoke-static {}, Lcom/tramini/plugin/a/a/c;->a()Lcom/tramini/plugin/a/a/c;

    move-result-object v0

    const-string v1, "app_vc"

    invoke-virtual {v0, v1}, Lcom/tramini/plugin/a/a/c;->a(Ljava/lang/String;)Z

    move-result v0

    const-string v1, ""

    if-eqz v0, :cond_0

    return-object v1

    .line 43
    :cond_0
    sget v0, Lcom/tramini/plugin/a/g/e;->e:I

    if-nez v0, :cond_1

    .line 45
    :try_start_0
    invoke-virtual {p0}, Landroid/content/Context;->getPackageManager()Landroid/content/pm/PackageManager;

    move-result-object v0

    invoke-virtual {p0}, Landroid/content/Context;->getPackageName()Ljava/lang/String;

    move-result-object p0

    const/4 v2, 0x0

    invoke-virtual {v0, p0, v2}, Landroid/content/pm/PackageManager;->getPackageInfo(Ljava/lang/String;I)Landroid/content/pm/PackageInfo;

    move-result-object p0

    .line 46
    iget p0, p0, Landroid/content/pm/PackageInfo;->versionCode:I

    sput p0, Lcom/tramini/plugin/a/g/e;->e:I

    .line 47
    new-instance p0, Ljava/lang/StringBuilder;

    invoke-direct {p0}, Ljava/lang/StringBuilder;-><init>()V

    sget v0, Lcom/tramini/plugin/a/g/e;->e:I

    invoke-virtual {p0, v0}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {p0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p0
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    return-object p0

    :catch_0
    move-exception p0

    .line 49
    invoke-virtual {p0}, Ljava/lang/Exception;->printStackTrace()V

    return-object v1

    .line 53
    :cond_1
    new-instance p0, Ljava/lang/StringBuilder;

    invoke-direct {p0}, Ljava/lang/StringBuilder;-><init>()V

    sget v0, Lcom/tramini/plugin/a/g/e;->e:I

    invoke-virtual {p0, v0}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {p0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p0

    return-object p0
.end method

.method public static b()Ljava/lang/String;
    .locals 2

    .line 125
    invoke-static {}, Lcom/tramini/plugin/a/a/c;->a()Lcom/tramini/plugin/a/a/c;

    move-result-object v0

    const-string v1, "os_vn"

    invoke-virtual {v0, v1}, Lcom/tramini/plugin/a/a/c;->a(Ljava/lang/String;)Z

    move-result v0

    if-eqz v0, :cond_0

    const-string v0, ""

    return-object v0

    .line 129
    :cond_0
    sget-object v0, Lcom/tramini/plugin/a/g/e;->a:Ljava/lang/String;

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_1

    .line 130
    sget-object v0, Landroid/os/Build$VERSION;->RELEASE:Ljava/lang/String;

    sput-object v0, Lcom/tramini/plugin/a/g/e;->a:Ljava/lang/String;

    .line 132
    :cond_1
    sget-object v0, Lcom/tramini/plugin/a/g/e;->a:Ljava/lang/String;

    return-object v0
.end method

.method public static b(Landroid/content/Context;)Ljava/lang/String;
    .locals 3

    .line 62
    invoke-static {}, Lcom/tramini/plugin/a/a/c;->a()Lcom/tramini/plugin/a/a/c;

    move-result-object v0

    const-string v1, "app_vn"

    invoke-virtual {v0, v1}, Lcom/tramini/plugin/a/a/c;->a(Ljava/lang/String;)Z

    move-result v0

    const-string v1, ""

    if-eqz v0, :cond_0

    return-object v1

    .line 67
    :cond_0
    :try_start_0
    sget-object v0, Lcom/tramini/plugin/a/g/e;->d:Ljava/lang/String;

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_1

    .line 68
    invoke-virtual {p0}, Landroid/content/Context;->getPackageManager()Landroid/content/pm/PackageManager;

    move-result-object v0

    invoke-virtual {p0}, Landroid/content/Context;->getPackageName()Ljava/lang/String;

    move-result-object p0

    const/4 v2, 0x0

    invoke-virtual {v0, p0, v2}, Landroid/content/pm/PackageManager;->getPackageInfo(Ljava/lang/String;I)Landroid/content/pm/PackageInfo;

    move-result-object p0

    .line 69
    iget-object p0, p0, Landroid/content/pm/PackageInfo;->versionName:Ljava/lang/String;

    .line 70
    sput-object p0, Lcom/tramini/plugin/a/g/e;->d:Ljava/lang/String;
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    return-object p0

    .line 76
    :cond_1
    sget-object p0, Lcom/tramini/plugin/a/g/e;->d:Ljava/lang/String;

    return-object p0

    :catch_0
    move-exception p0

    .line 73
    invoke-virtual {p0}, Ljava/lang/Exception;->printStackTrace()V

    return-object v1
.end method

.method private static c()I
    .locals 1

    .line 141
    sget v0, Landroid/os/Build$VERSION;->SDK_INT:I

    return v0
.end method

.method public static c(Landroid/content/Context;)Ljava/lang/String;
    .locals 3

    .line 86
    invoke-static {}, Lcom/tramini/plugin/a/a/c;->a()Lcom/tramini/plugin/a/a/c;

    move-result-object v0

    const-string v1, "package_name"

    invoke-virtual {v0, v1}, Lcom/tramini/plugin/a/a/c;->a(Ljava/lang/String;)Z

    move-result v0

    const-string v1, ""

    if-eqz v0, :cond_0

    return-object v1

    .line 91
    :cond_0
    :try_start_0
    sget-object v0, Lcom/tramini/plugin/a/g/e;->c:Ljava/lang/String;

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_1

    .line 92
    invoke-virtual {p0}, Landroid/content/Context;->getPackageManager()Landroid/content/pm/PackageManager;

    move-result-object v0

    invoke-virtual {p0}, Landroid/content/Context;->getPackageName()Ljava/lang/String;

    move-result-object p0

    const/4 v2, 0x0

    invoke-virtual {v0, p0, v2}, Landroid/content/pm/PackageManager;->getPackageInfo(Ljava/lang/String;I)Landroid/content/pm/PackageInfo;

    move-result-object p0

    .line 93
    iget-object p0, p0, Landroid/content/pm/PackageInfo;->packageName:Ljava/lang/String;

    .line 94
    sput-object p0, Lcom/tramini/plugin/a/g/e;->c:Ljava/lang/String;
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    return-object p0

    .line 101
    :cond_1
    sget-object p0, Lcom/tramini/plugin/a/g/e;->c:Ljava/lang/String;

    return-object p0

    :catch_0
    move-exception p0

    .line 97
    invoke-virtual {p0}, Ljava/lang/Exception;->printStackTrace()V

    return-object v1
.end method

.method public static d(Landroid/content/Context;)Ljava/lang/String;
    .locals 3

    .line 149
    invoke-static {}, Lcom/tramini/plugin/a/a/c;->a()Lcom/tramini/plugin/a/a/c;

    move-result-object v0

    const-string v1, "android_id"

    invoke-virtual {v0, v1}, Lcom/tramini/plugin/a/a/c;->a(Ljava/lang/String;)Z

    move-result v0

    const-string v2, ""

    if-eqz v0, :cond_0

    return-object v2

    .line 154
    :cond_0
    :try_start_0
    sget-object v0, Lcom/tramini/plugin/a/g/e;->f:Ljava/lang/String;

    if-nez v0, :cond_1

    .line 155
    invoke-virtual {p0}, Landroid/content/Context;->getContentResolver()Landroid/content/ContentResolver;

    move-result-object p0

    invoke-static {p0, v1}, Landroid/provider/Settings$Secure;->getString(Landroid/content/ContentResolver;Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0

    .line 157
    sput-object p0, Lcom/tramini/plugin/a/g/e;->f:Ljava/lang/String;

    if-nez p0, :cond_1

    .line 158
    sput-object v2, Lcom/tramini/plugin/a/g/e;->f:Ljava/lang/String;
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    .line 162
    :catch_0
    sput-object v2, Lcom/tramini/plugin/a/g/e;->f:Ljava/lang/String;

    .line 164
    :cond_1
    :goto_0
    sget-object p0, Lcom/tramini/plugin/a/g/e;->f:Ljava/lang/String;

    return-object p0
.end method
