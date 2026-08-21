.class public final Lcom/kwad/sdk/utils/as;
.super Ljava/lang/Object;


# static fields
.field private static aJc:Ljava/lang/String;

.field private static aJd:Ljava/lang/String;


# direct methods
.method public static IS()Z
    .locals 1

    const-string v0, "EMUI"

    invoke-static {v0}, Lcom/kwad/sdk/utils/as;->W(Ljava/lang/String;)Z

    move-result v0

    return v0
.end method

.method public static IT()Z
    .locals 1

    const-string v0, "MIUI"

    invoke-static {v0}, Lcom/kwad/sdk/utils/as;->W(Ljava/lang/String;)Z

    move-result v0

    return v0
.end method

.method public static IU()Z
    .locals 1

    const-string v0, "FLYME"

    invoke-static {v0}, Lcom/kwad/sdk/utils/as;->W(Ljava/lang/String;)Z

    move-result v0

    return v0
.end method

.method private static W(Ljava/lang/String;)Z
    .locals 2

    sget-object v0, Lcom/kwad/sdk/utils/as;->aJc:Ljava/lang/String;

    if-eqz v0, :cond_0

    invoke-virtual {v0, p0}, Ljava/lang/String;->contains(Ljava/lang/CharSequence;)Z

    move-result p0

    return p0

    :cond_0
    const-string v0, "ro.build.version.opporom"

    invoke-static {v0}, Lcom/kwad/sdk/utils/bd;->get(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    sput-object v0, Lcom/kwad/sdk/utils/as;->aJd:Ljava/lang/String;

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_1

    const-string v0, "OPPO"

    :goto_0
    sput-object v0, Lcom/kwad/sdk/utils/as;->aJc:Ljava/lang/String;

    goto/16 :goto_2

    :cond_1
    const-string v0, "ro.vivo.os.version"

    invoke-static {v0}, Lcom/kwad/sdk/utils/bd;->get(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    sput-object v0, Lcom/kwad/sdk/utils/as;->aJd:Ljava/lang/String;

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_2

    const-string v0, "VIVO"

    goto :goto_0

    :cond_2
    const-string v0, "ro.build.version.emui"

    invoke-static {v0}, Lcom/kwad/sdk/utils/bd;->get(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    sput-object v0, Lcom/kwad/sdk/utils/as;->aJd:Ljava/lang/String;

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_3

    const-string v0, "EMUI"

    goto :goto_0

    :cond_3
    const-string v0, "ro.miui.ui.version.name"

    invoke-static {v0}, Lcom/kwad/sdk/utils/bd;->get(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    sput-object v0, Lcom/kwad/sdk/utils/as;->aJd:Ljava/lang/String;

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_4

    const-string v0, "MIUI"

    goto :goto_0

    :cond_4
    const-string v0, "ro.product.system.manufacturer"

    invoke-static {v0}, Lcom/kwad/sdk/utils/bd;->get(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    sput-object v0, Lcom/kwad/sdk/utils/as;->aJd:Ljava/lang/String;

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_5

    const-string v0, "OnePlus"

    goto :goto_0

    :cond_5
    const-string v0, "ro.smartisan.version"

    invoke-static {v0}, Lcom/kwad/sdk/utils/bd;->get(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    sput-object v0, Lcom/kwad/sdk/utils/as;->aJd:Ljava/lang/String;

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_6

    const-string v0, "SMARTISAN"

    goto :goto_0

    :cond_6
    const-string v0, "ro.product.manufacturer"

    invoke-static {v0}, Lcom/kwad/sdk/utils/bd;->get(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v0}, Ljava/lang/String;->toUpperCase()Ljava/lang/String;

    move-result-object v0

    const-string v1, "SAMSUNG"

    invoke-virtual {v0, v1}, Ljava/lang/String;->contains(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_7

    :goto_1
    sput-object v1, Lcom/kwad/sdk/utils/as;->aJc:Ljava/lang/String;

    goto :goto_2

    :cond_7
    sget-object v0, Landroid/os/Build;->DISPLAY:Ljava/lang/String;

    sput-object v0, Lcom/kwad/sdk/utils/as;->aJd:Ljava/lang/String;

    invoke-virtual {v0}, Ljava/lang/String;->toUpperCase()Ljava/lang/String;

    move-result-object v0

    const-string v1, "FLYME"

    invoke-virtual {v0, v1}, Ljava/lang/String;->contains(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_8

    goto :goto_1

    :cond_8
    const-string v0, "unknown"

    sput-object v0, Lcom/kwad/sdk/utils/as;->aJd:Ljava/lang/String;

    sget-object v0, Landroid/os/Build;->MANUFACTURER:Ljava/lang/String;

    invoke-virtual {v0}, Ljava/lang/String;->toUpperCase()Ljava/lang/String;

    move-result-object v0

    goto/16 :goto_0

    :goto_2
    sget-object v0, Lcom/kwad/sdk/utils/as;->aJc:Ljava/lang/String;

    invoke-virtual {v0, p0}, Ljava/lang/String;->contains(Ljava/lang/CharSequence;)Z

    move-result p0

    return p0
.end method

.method public static getName()Ljava/lang/String;
    .locals 1

    sget-object v0, Lcom/kwad/sdk/utils/as;->aJc:Ljava/lang/String;

    if-nez v0, :cond_0

    const-string v0, ""

    invoke-static {v0}, Lcom/kwad/sdk/utils/as;->W(Ljava/lang/String;)Z

    :cond_0
    sget-object v0, Lcom/kwad/sdk/utils/as;->aJc:Ljava/lang/String;

    return-object v0
.end method

.method public static getVersion()Ljava/lang/String;
    .locals 1

    sget-object v0, Lcom/kwad/sdk/utils/as;->aJd:Ljava/lang/String;

    if-nez v0, :cond_0

    const-string v0, ""

    invoke-static {v0}, Lcom/kwad/sdk/utils/as;->W(Ljava/lang/String;)Z

    :cond_0
    sget-object v0, Lcom/kwad/sdk/utils/as;->aJd:Ljava/lang/String;

    return-object v0
.end method
