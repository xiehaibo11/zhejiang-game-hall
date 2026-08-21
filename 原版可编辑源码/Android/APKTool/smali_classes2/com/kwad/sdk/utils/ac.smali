.class public final Lcom/kwad/sdk/utils/ac;
.super Ljava/lang/Object;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/kwad/sdk/utils/ac$a;
    }
.end annotation


# direct methods
.method public static a(Ljava/lang/String;Lcom/kwad/sdk/utils/ac$a;)Ljava/lang/String;
    .locals 2

    invoke-static {p0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_1

    if-nez p1, :cond_0

    goto :goto_0

    :cond_0
    invoke-virtual {p1}, Lcom/kwad/sdk/utils/ac$a;->getWidth()I

    move-result v0

    invoke-static {v0}, Lcom/kwad/sdk/utils/ac;->dd(I)Ljava/lang/String;

    move-result-object v0

    const-string v1, "__WIDTH__"

    invoke-virtual {p0, v1, v0}, Ljava/lang/String;->replace(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Ljava/lang/String;

    move-result-object p0

    invoke-virtual {p1}, Lcom/kwad/sdk/utils/ac$a;->getHeight()I

    move-result v0

    invoke-static {v0}, Lcom/kwad/sdk/utils/ac;->dd(I)Ljava/lang/String;

    move-result-object v0

    const-string v1, "__HEIGHT__"

    invoke-virtual {p0, v1, v0}, Ljava/lang/String;->replace(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Ljava/lang/String;

    move-result-object p0

    invoke-virtual {p1}, Lcom/kwad/sdk/utils/ac$a;->IJ()I

    move-result v0

    invoke-static {v0}, Lcom/kwad/sdk/utils/ac;->dd(I)Ljava/lang/String;

    move-result-object v0

    const-string v1, "__DOWN_X__"

    invoke-virtual {p0, v1, v0}, Ljava/lang/String;->replace(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Ljava/lang/String;

    move-result-object p0

    invoke-virtual {p1}, Lcom/kwad/sdk/utils/ac$a;->IK()I

    move-result v0

    invoke-static {v0}, Lcom/kwad/sdk/utils/ac;->dd(I)Ljava/lang/String;

    move-result-object v0

    const-string v1, "__DOWN_Y__"

    invoke-virtual {p0, v1, v0}, Ljava/lang/String;->replace(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Ljava/lang/String;

    move-result-object p0

    invoke-virtual {p1}, Lcom/kwad/sdk/utils/ac$a;->IL()I

    move-result v0

    invoke-static {v0}, Lcom/kwad/sdk/utils/ac;->dd(I)Ljava/lang/String;

    move-result-object v0

    const-string v1, "__UP_X__"

    invoke-virtual {p0, v1, v0}, Ljava/lang/String;->replace(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Ljava/lang/String;

    move-result-object p0

    invoke-virtual {p1}, Lcom/kwad/sdk/utils/ac$a;->IM()I

    move-result p1

    invoke-static {p1}, Lcom/kwad/sdk/utils/ac;->dd(I)Ljava/lang/String;

    move-result-object p1

    const-string v0, "__UP_Y__"

    invoke-virtual {p0, v0, p1}, Ljava/lang/String;->replace(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Ljava/lang/String;

    move-result-object p0

    :cond_1
    :goto_0
    return-object p0
.end method

.method public static aj(Landroid/content/Context;Ljava/lang/String;)Ljava/lang/String;
    .locals 2

    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_0

    return-object p1

    :cond_0
    invoke-static {p0}, Lcom/kwad/sdk/utils/k;->getScreenWidth(Landroid/content/Context;)I

    move-result v0

    invoke-static {v0}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v0

    const-string v1, "__SCREEN_WIDTH__"

    invoke-virtual {p1, v1, v0}, Ljava/lang/String;->replace(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Ljava/lang/String;

    move-result-object p1

    invoke-static {p0}, Lcom/kwad/sdk/utils/k;->getScreenHeight(Landroid/content/Context;)I

    move-result v0

    invoke-static {v0}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v0

    const-string v1, "__SCREEN_HEIGHT__"

    invoke-virtual {p1, v1, v0}, Ljava/lang/String;->replace(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Ljava/lang/String;

    move-result-object p1

    invoke-static {p0}, Lcom/kwad/sdk/utils/k;->bS(Landroid/content/Context;)I

    move-result v0

    invoke-static {v0}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v0

    const-string v1, "__DEVICE_WIDTH__"

    invoke-virtual {p1, v1, v0}, Ljava/lang/String;->replace(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Ljava/lang/String;

    move-result-object p1

    invoke-static {p0}, Lcom/kwad/sdk/utils/k;->bT(Landroid/content/Context;)I

    move-result p0

    invoke-static {p0}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object p0

    const-string v0, "__DEVICE_HEIGHT__"

    invoke-virtual {p1, v0, p0}, Ljava/lang/String;->replace(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Ljava/lang/String;

    move-result-object p0

    return-object p0
.end method

.method public static c(Landroid/content/Context;Ljava/lang/String;Z)Ljava/lang/String;
    .locals 2

    invoke-static {p0, p2}, Lcom/kwad/sdk/utils/bg;->v(Landroid/content/Context;Z)J

    move-result-wide v0

    invoke-static {v0, v1}, Ljava/lang/String;->valueOf(J)Ljava/lang/String;

    move-result-object p0

    const-string p2, "__TS__"

    invoke-virtual {p1, p2, p0}, Ljava/lang/String;->replace(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Ljava/lang/String;

    move-result-object p0

    return-object p0
.end method

.method private static dd(I)Ljava/lang/String;
    .locals 0

    if-ltz p0, :cond_0

    invoke-static {p0}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object p0

    return-object p0

    :cond_0
    const-string p0, "-999"

    return-object p0
.end method
