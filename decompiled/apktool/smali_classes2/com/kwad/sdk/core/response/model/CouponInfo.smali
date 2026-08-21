.class public Lcom/kwad/sdk/core/response/model/CouponInfo;
.super Lcom/kwad/sdk/core/response/a/a;

# interfaces
.implements Lcom/kwad/sdk/core/b;
.implements Ljava/io/Serializable;


# static fields
.field private static final COUPON_DISCOUNT_THRESHOLD:F = 20.0f

.field public static final JINNIIU_DISCOUNT:Ljava/lang/String; = "2"

.field public static final JINNIIU_PRICE_BREAK_DISCOUNT:Ljava/lang/String; = "1"

.field private static final serialVersionUID:J = -0x7ee45f4672c64f2aL


# instance fields
.field public displayActionWords:Ljava/lang/String;

.field public displayBase:Ljava/lang/String;

.field public displayDiscount:Ljava/lang/String;

.field public displayName:Ljava/lang/String;

.field public displayTitle:Ljava/lang/String;

.field public displayType:Ljava/lang/String;

.field public displayValue:Ljava/lang/String;


# direct methods
.method public constructor <init>()V
    .locals 0

    invoke-direct {p0}, Lcom/kwad/sdk/core/response/a/a;-><init>()V

    return-void
.end method

.method public static jinniuFormatCoupon(Lcom/kwad/sdk/core/response/model/CouponInfo;)Ljava/lang/String;
    .locals 7

    const/4 v0, 0x0

    if-nez p0, :cond_0

    return-object v0

    :cond_0
    invoke-virtual {p0}, Lcom/kwad/sdk/core/response/model/CouponInfo;->getDisplayType()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {p0}, Lcom/kwad/sdk/core/response/model/CouponInfo;->getDisplayValue()Ljava/lang/String;

    move-result-object v2

    invoke-static {v2}, Lcom/kwad/sdk/core/response/model/CouponInfo;->rinToYuan(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    const/4 v3, -0x1

    invoke-virtual {v1}, Ljava/lang/String;->hashCode()I

    move-result v4

    const/16 v5, 0x31

    const/4 v6, 0x1

    if-eq v4, v5, :cond_2

    const/16 v5, 0x32

    if-eq v4, v5, :cond_1

    goto :goto_0

    :cond_1
    const-string v4, "2"

    invoke-virtual {v1, v4}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_3

    move v3, v6

    goto :goto_0

    :cond_2
    const-string v4, "1"

    invoke-virtual {v1, v4}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_3

    const/4 v3, 0x0

    :cond_3
    :goto_0
    const-string v1, "\u00a5"

    if-eqz v3, :cond_6

    if-eq v3, v6, :cond_4

    goto :goto_2

    :cond_4
    invoke-static {v2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v3

    if-nez v3, :cond_8

    :try_start_0
    invoke-static {v2}, Ljava/lang/Float;->parseFloat(Ljava/lang/String;)F

    move-result v3

    const/high16 v4, 0x41a00000    # 20.0f

    cmpl-float v3, v3, v4

    if-ltz v3, :cond_5

    new-instance p0, Ljava/lang/StringBuilder;

    invoke-direct {p0, v1}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {p0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    goto :goto_2

    :cond_5
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {p0}, Lcom/kwad/sdk/core/response/model/CouponInfo;->getFormattedDisplayDiscount()Ljava/lang/String;

    move-result-object p0

    invoke-virtual {v1, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string p0, "\u6298"

    invoke-virtual {v1, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_2

    :cond_6
    invoke-virtual {p0}, Lcom/kwad/sdk/core/response/model/CouponInfo;->getDisplayBase()Ljava/lang/String;

    move-result-object v3

    invoke-static {v3}, Lcom/kwad/sdk/core/response/model/CouponInfo;->rinToYuan(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v3

    invoke-static {v3}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v4

    if-nez v4, :cond_8

    invoke-static {v2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v4

    if-nez v4, :cond_8

    invoke-virtual {p0}, Lcom/kwad/sdk/core/response/model/CouponInfo;->isNoPreRequirement()Z

    move-result p0

    if-eqz p0, :cond_7

    new-instance p0, Ljava/lang/StringBuilder;

    invoke-direct {p0, v1}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    goto :goto_1

    :cond_7
    new-instance p0, Ljava/lang/StringBuilder;

    invoke-direct {p0}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {p0, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v0, "\u51cf"

    invoke-virtual {p0, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    :goto_1
    invoke-virtual {p0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    :catch_0
    :cond_8
    :goto_2
    return-object v0
.end method

.method public static rinToYuan(Ljava/lang/String;)Ljava/lang/String;
    .locals 4

    const/4 v0, 0x0

    if-nez p0, :cond_0

    return-object v0

    :cond_0
    :try_start_0
    invoke-static {p0}, Ljava/lang/Float;->parseFloat(Ljava/lang/String;)F

    move-result p0

    const/high16 v1, 0x447a0000    # 1000.0f

    div-float/2addr p0, v1

    new-instance v1, Ljava/text/DecimalFormat;

    const-string v2, "#.#"

    invoke-direct {v1, v2}, Ljava/text/DecimalFormat;-><init>(Ljava/lang/String;)V

    float-to-double v2, p0

    invoke-virtual {v1, v2, v3}, Ljava/text/DecimalFormat;->format(D)Ljava/lang/String;

    move-result-object v0
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p0

    invoke-static {p0}, Lcom/kwad/sdk/core/e/c;->printStackTraceOnly(Ljava/lang/Throwable;)V

    :goto_0
    return-object v0
.end method


# virtual methods
.method public getDisplayActionWords()Ljava/lang/String;
    .locals 1

    iget-object v0, p0, Lcom/kwad/sdk/core/response/model/CouponInfo;->displayActionWords:Ljava/lang/String;

    return-object v0
.end method

.method public getDisplayBase()Ljava/lang/String;
    .locals 1

    iget-object v0, p0, Lcom/kwad/sdk/core/response/model/CouponInfo;->displayBase:Ljava/lang/String;

    return-object v0
.end method

.method public getDisplayName()Ljava/lang/String;
    .locals 1

    iget-object v0, p0, Lcom/kwad/sdk/core/response/model/CouponInfo;->displayName:Ljava/lang/String;

    return-object v0
.end method

.method public getDisplayTitle()Ljava/lang/String;
    .locals 1

    iget-object v0, p0, Lcom/kwad/sdk/core/response/model/CouponInfo;->displayTitle:Ljava/lang/String;

    return-object v0
.end method

.method public getDisplayType()Ljava/lang/String;
    .locals 1

    iget-object v0, p0, Lcom/kwad/sdk/core/response/model/CouponInfo;->displayType:Ljava/lang/String;

    return-object v0
.end method

.method public getDisplayValue()Ljava/lang/String;
    .locals 1

    iget-object v0, p0, Lcom/kwad/sdk/core/response/model/CouponInfo;->displayValue:Ljava/lang/String;

    return-object v0
.end method

.method public getFormattedDisplayDiscount()Ljava/lang/String;
    .locals 4

    :try_start_0
    iget-object v0, p0, Lcom/kwad/sdk/core/response/model/CouponInfo;->displayDiscount:Ljava/lang/String;

    invoke-static {v0}, Ljava/lang/Float;->valueOf(Ljava/lang/String;)Ljava/lang/Float;

    move-result-object v0

    invoke-virtual {v0}, Ljava/lang/Float;->floatValue()F

    move-result v0

    const/high16 v1, 0x41200000    # 10.0f

    div-float/2addr v0, v1

    new-instance v1, Ljava/text/DecimalFormat;

    const-string v2, "#.#"

    invoke-direct {v1, v2}, Ljava/text/DecimalFormat;-><init>(Ljava/lang/String;)V

    float-to-double v2, v0

    invoke-virtual {v1, v2, v3}, Ljava/text/DecimalFormat;->format(D)Ljava/lang/String;

    move-result-object v0
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    return-object v0

    :catch_0
    move-exception v0

    invoke-static {v0}, Lcom/kwad/sdk/core/e/c;->printStackTraceOnly(Ljava/lang/Throwable;)V

    const/4 v0, 0x0

    return-object v0
.end method

.method public getFormattedJinniuPrefix()Ljava/lang/String;
    .locals 3

    invoke-virtual {p0}, Lcom/kwad/sdk/core/response/model/CouponInfo;->getDisplayType()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p0}, Lcom/kwad/sdk/core/response/model/CouponInfo;->isNoPreRequirement()Z

    move-result v1

    const-string v2, "\u5238"

    if-eqz v1, :cond_0

    goto :goto_0

    :cond_0
    const-string v1, "1"

    invoke-virtual {v1, v0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_1

    const-string v2, "\u6ee1"

    goto :goto_0

    :cond_1
    const-string v1, "2"

    invoke-virtual {v1, v0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_2

    goto :goto_0

    :cond_2
    const/4 v2, 0x0

    :goto_0
    return-object v2
.end method

.method public isNoPreRequirement()Z
    .locals 3

    iget-object v0, p0, Lcom/kwad/sdk/core/response/model/CouponInfo;->displayBase:Ljava/lang/String;

    const/4 v1, 0x0

    if-nez v0, :cond_0

    return v1

    :cond_0
    :try_start_0
    invoke-static {v0}, Ljava/lang/Float;->parseFloat(Ljava/lang/String;)F

    move-result v0
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    const/4 v2, 0x0

    cmpg-float v0, v0, v2

    if-gtz v0, :cond_1

    const/4 v1, 0x1

    :catch_0
    :cond_1
    return v1
.end method

.method public setDisplayDiscount(Ljava/lang/String;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/sdk/core/response/model/CouponInfo;->displayDiscount:Ljava/lang/String;

    return-void
.end method
