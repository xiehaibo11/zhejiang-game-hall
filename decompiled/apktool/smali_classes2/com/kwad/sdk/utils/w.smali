.class public final Lcom/kwad/sdk/utils/w;
.super Ljava/lang/Object;


# direct methods
.method public static bW(Landroid/content/Context;)Ljava/lang/String;
    .locals 1

    sget v0, Lcom/kwad/sdk/R$string;->ksad_network_error_toast:I

    invoke-virtual {p0, v0}, Landroid/content/Context;->getString(I)Ljava/lang/String;

    move-result-object p0

    return-object p0
.end method

.method public static bX(Landroid/content/Context;)Ljava/lang/String;
    .locals 1

    sget v0, Lcom/kwad/sdk/R$string;->ksad_page_loading_network_error_title:I

    invoke-virtual {p0, v0}, Landroid/content/Context;->getString(I)Ljava/lang/String;

    move-result-object p0

    return-object p0
.end method
