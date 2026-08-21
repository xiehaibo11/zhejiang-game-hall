.class public Lcom/kwad/sdk/internal/api/a;
.super Lcom/kwad/sdk/core/response/a/a;


# instance fields
.field public ajr:I

.field public ajs:I

.field public ajt:Ljava/lang/String;

.field public aju:Ljava/lang/String;

.field public ajv:Ljava/lang/String;

.field public ajw:Ljava/lang/String;

.field public ajx:Ljava/lang/String;

.field public ajy:J


# direct methods
.method public constructor <init>()V
    .locals 0

    invoke-direct {p0}, Lcom/kwad/sdk/core/response/a/a;-><init>()V

    return-void
.end method


# virtual methods
.method public final FD()Z
    .locals 1

    iget v0, p0, Lcom/kwad/sdk/internal/api/a;->ajr:I

    if-nez v0, :cond_0

    iget v0, p0, Lcom/kwad/sdk/internal/api/a;->ajs:I

    if-nez v0, :cond_0

    iget-object v0, p0, Lcom/kwad/sdk/internal/api/a;->ajt:Ljava/lang/String;

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_0

    const/4 v0, 0x1

    return v0

    :cond_0
    const/4 v0, 0x0

    return v0
.end method

.method public final FE()Z
    .locals 1

    iget-object v0, p0, Lcom/kwad/sdk/internal/api/a;->aju:Ljava/lang/String;

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/kwad/sdk/internal/api/a;->ajv:Ljava/lang/String;

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/kwad/sdk/internal/api/a;->ajx:Ljava/lang/String;

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/kwad/sdk/internal/api/a;->ajw:Ljava/lang/String;

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_0

    const/4 v0, 0x1

    return v0

    :cond_0
    const/4 v0, 0x0

    return v0
.end method
