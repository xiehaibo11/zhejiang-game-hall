.class public final Lcom/kwad/sdk/utils/ab;
.super Ljava/lang/Object;


# direct methods
.method public static a(Landroid/content/Context;Ljava/lang/String;Lcom/kwad/sdk/utils/ac$a;Z)Ljava/lang/String;
    .locals 2

    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_0

    return-object p1

    :cond_0
    invoke-static {p1, p2}, Lcom/kwad/sdk/utils/ac;->a(Ljava/lang/String;Lcom/kwad/sdk/utils/ac$a;)Ljava/lang/String;

    move-result-object p1

    invoke-static {p0, p1}, Lcom/kwad/sdk/utils/ac;->aj(Landroid/content/Context;Ljava/lang/String;)Ljava/lang/String;

    move-result-object p1

    invoke-static {p0}, Lcom/kwad/sdk/utils/au;->cw(Landroid/content/Context;)Ljava/lang/String;

    move-result-object p2

    invoke-static {p2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_1

    const-string v0, "__MAC__"

    invoke-virtual {p1, v0, p2}, Ljava/lang/String;->replace(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Ljava/lang/String;

    move-result-object p1

    invoke-static {p2}, Lcom/kwad/sdk/utils/ad;->bp(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    const-string v1, "__MAC2__"

    invoke-virtual {p1, v1, v0}, Ljava/lang/String;->replace(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Ljava/lang/String;

    move-result-object p1

    const-string v0, ":"

    const-string v1, ""

    invoke-virtual {p2, v0, v1}, Ljava/lang/String;->replace(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Ljava/lang/String;

    move-result-object p2

    invoke-static {p2}, Lcom/kwad/sdk/utils/ad;->bp(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p2

    const-string v0, "__MAC3__"

    invoke-virtual {p1, v0, p2}, Ljava/lang/String;->replace(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Ljava/lang/String;

    move-result-object p1

    :cond_1
    invoke-static {p0}, Lcom/kwad/sdk/utils/au;->cu(Landroid/content/Context;)Ljava/lang/String;

    move-result-object p2

    invoke-static {p2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_2

    const-string v0, "__IMEI__"

    invoke-virtual {p1, v0, p2}, Ljava/lang/String;->replace(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Ljava/lang/String;

    move-result-object p1

    invoke-static {p2}, Lcom/kwad/sdk/utils/ad;->bp(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    const-string v1, "__IMEI2__"

    invoke-virtual {p1, v1, v0}, Ljava/lang/String;->replace(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Ljava/lang/String;

    move-result-object p1

    invoke-static {p2}, Lcom/kwad/sdk/utils/ad;->fx(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p2

    const-string v0, "__IMEI3__"

    invoke-virtual {p1, v0, p2}, Ljava/lang/String;->replace(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Ljava/lang/String;

    move-result-object p1

    :cond_2
    invoke-static {}, Lcom/kwad/sdk/utils/au;->getOaid()Ljava/lang/String;

    move-result-object p2

    invoke-static {p2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_3

    const-string v0, "__OAID__"

    invoke-virtual {p1, v0, p2}, Ljava/lang/String;->replace(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Ljava/lang/String;

    move-result-object p1

    invoke-static {p2}, Lcom/kwad/sdk/utils/ad;->bp(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p2

    const-string v0, "__OAID2__"

    invoke-virtual {p1, v0, p2}, Ljava/lang/String;->replace(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Ljava/lang/String;

    move-result-object p1

    :cond_3
    invoke-static {p0}, Lcom/kwad/sdk/utils/au;->cv(Landroid/content/Context;)Ljava/lang/String;

    move-result-object p2

    invoke-static {p2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_4

    invoke-static {p2}, Lcom/kwad/sdk/utils/ad;->bp(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    const-string v1, "__ANDROIDID2__"

    invoke-virtual {p1, v1, v0}, Ljava/lang/String;->replace(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Ljava/lang/String;

    move-result-object p1

    invoke-static {p2}, Lcom/kwad/sdk/utils/ad;->fx(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    const-string v1, "__ANDROIDID3__"

    invoke-virtual {p1, v1, v0}, Ljava/lang/String;->replace(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Ljava/lang/String;

    move-result-object p1

    const-string v0, "__ANDROIDID__"

    invoke-virtual {p1, v0, p2}, Ljava/lang/String;->replace(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Ljava/lang/String;

    move-result-object p1

    :cond_4
    invoke-static {p0, p1, p3}, Lcom/kwad/sdk/utils/ac;->c(Landroid/content/Context;Ljava/lang/String;Z)Ljava/lang/String;

    move-result-object p0

    return-object p0
.end method
