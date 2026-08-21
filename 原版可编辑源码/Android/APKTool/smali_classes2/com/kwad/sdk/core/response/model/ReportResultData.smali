.class public Lcom/kwad/sdk/core/response/model/ReportResultData;
.super Lcom/kwad/sdk/core/network/BaseResultData;

# interfaces
.implements Lcom/kwad/sdk/core/b;


# static fields
.field private static final CODE_RESULT_CHEATING_FLOW:I = 0x1adb9


# direct methods
.method public constructor <init>()V
    .locals 0

    invoke-direct {p0}, Lcom/kwad/sdk/core/network/BaseResultData;-><init>()V

    return-void
.end method


# virtual methods
.method public isCheatingFlow()Z
    .locals 2

    iget v0, p0, Lcom/kwad/sdk/core/response/model/ReportResultData;->result:I

    const v1, 0x1adb9

    if-ne v0, v1, :cond_0

    const/4 v0, 0x1

    return v0

    :cond_0
    const/4 v0, 0x0

    return v0
.end method
