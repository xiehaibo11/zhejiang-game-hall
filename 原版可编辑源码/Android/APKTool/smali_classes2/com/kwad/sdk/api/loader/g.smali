.class final Lcom/kwad/sdk/api/loader/g;
.super Ljava/lang/Object;


# static fields
.field static air:Ljava/lang/String; = "autoRevert"


# direct methods
.method static constructor <clinit>()V
    .locals 0

    return-void
.end method

.method static F(Ljava/lang/String;Ljava/lang/String;)Z
    .locals 5

    invoke-static {p0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    const/4 v1, 0x0

    if-eqz v0, :cond_0

    return v1

    :cond_0
    invoke-static {p0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_1

    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_1

    return v1

    :cond_1
    invoke-static {p0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    const/4 v2, 0x1

    if-nez v0, :cond_2

    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_2

    return v2

    :cond_2
    const-string v0, "\\."

    invoke-virtual {p0, v0}, Ljava/lang/String;->split(Ljava/lang/String;)[Ljava/lang/String;

    move-result-object p0

    invoke-virtual {p1, v0}, Ljava/lang/String;->split(Ljava/lang/String;)[Ljava/lang/String;

    move-result-object p1

    move v0, v1

    :goto_0
    array-length v3, p0

    if-ge v0, v3, :cond_5

    array-length v3, p1

    if-ge v0, v3, :cond_5

    :try_start_0
    aget-object v3, p0, v0

    invoke-static {v3}, Ljava/lang/Integer;->parseInt(Ljava/lang/String;)I

    move-result v3

    aget-object v4, p1, v0

    invoke-static {v4}, Ljava/lang/Integer;->parseInt(Ljava/lang/String;)I

    move-result v4
    :try_end_0
    .catch Ljava/lang/NumberFormatException; {:try_start_0 .. :try_end_0} :catch_0

    sub-int/2addr v3, v4

    if-lez v3, :cond_3

    return v2

    :cond_3
    if-gez v3, :cond_4

    return v1

    :cond_4
    add-int/lit8 v0, v0, 0x1

    goto :goto_0

    :catch_0
    return v1

    :cond_5
    array-length p0, p0

    array-length p1, p1

    if-le p0, p1, :cond_6

    return v2

    :cond_6
    return v1
.end method

.method static aA(Landroid/content/Context;)Ljava/lang/String;
    .locals 1

    const-string v0, "apiversion"

    invoke-static {p0, v0}, Lcom/kwad/sdk/api/loader/g;->getVersion(Landroid/content/Context;Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0

    return-object p0
.end method

.method public static ay(Landroid/content/Context;)Ljava/lang/String;
    .locals 1

    const-string v0, "curversion"

    invoke-static {p0, v0}, Lcom/kwad/sdk/api/loader/g;->getVersion(Landroid/content/Context;Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0

    return-object p0
.end method

.method public static az(Landroid/content/Context;)Ljava/lang/String;
    .locals 1

    const-string v0, "newversion"

    invoke-static {p0, v0}, Lcom/kwad/sdk/api/loader/g;->getVersion(Landroid/content/Context;Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0

    return-object p0
.end method

.method private static b(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)V
    .locals 0

    invoke-static {p0, p1, p2}, Lcom/kwad/sdk/api/loader/t;->c(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)V

    return-void
.end method

.method private static getVersion(Landroid/content/Context;Ljava/lang/String;)Ljava/lang/String;
    .locals 1

    const-string v0, ""

    invoke-static {p0, p1, v0}, Lcom/kwad/sdk/api/loader/t;->d(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0

    return-object p0
.end method

.method public static k(Landroid/content/Context;Ljava/lang/String;)V
    .locals 1

    const-string v0, "curversion"

    invoke-static {p0, v0, p1}, Lcom/kwad/sdk/api/loader/g;->b(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)V

    return-void
.end method

.method public static l(Landroid/content/Context;Ljava/lang/String;)V
    .locals 1

    const-string v0, "newversion"

    invoke-static {p0, v0, p1}, Lcom/kwad/sdk/api/loader/g;->b(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)V

    return-void
.end method

.method static m(Landroid/content/Context;Ljava/lang/String;)V
    .locals 1

    const-string v0, "apiversion"

    invoke-static {p0, v0, p1}, Lcom/kwad/sdk/api/loader/g;->b(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)V

    return-void
.end method
