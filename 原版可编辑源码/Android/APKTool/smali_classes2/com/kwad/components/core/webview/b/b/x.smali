.class public Lcom/kwad/components/core/webview/b/b/x;
.super Lcom/kwad/sdk/core/response/a/a;


# instance fields
.field public Xj:Ljava/lang/String;

.field public errorCode:I

.field public errorReason:Ljava/lang/String;

.field public nM:I


# direct methods
.method public constructor <init>()V
    .locals 0

    invoke-direct {p0}, Lcom/kwad/sdk/core/response/a/a;-><init>()V

    return-void
.end method


# virtual methods
.method public final isFailed()Z
    .locals 2

    iget-object v0, p0, Lcom/kwad/components/core/webview/b/b/x;->Xj:Ljava/lang/String;

    const-string v1, "failed"

    invoke-static {v1, v0}, Landroid/text/TextUtils;->equals(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Z

    move-result v0

    return v0
.end method

.method public final rU()Z
    .locals 2

    iget-object v0, p0, Lcom/kwad/components/core/webview/b/b/x;->Xj:Ljava/lang/String;

    const-string v1, "start"

    invoke-static {v1, v0}, Landroid/text/TextUtils;->equals(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Z

    move-result v0

    return v0
.end method

.method public final rV()Z
    .locals 2

    iget-object v0, p0, Lcom/kwad/components/core/webview/b/b/x;->Xj:Ljava/lang/String;

    const-string v1, "end"

    invoke-static {v1, v0}, Landroid/text/TextUtils;->equals(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Z

    move-result v0

    return v0
.end method

.method public final rW()Z
    .locals 2

    iget-object v0, p0, Lcom/kwad/components/core/webview/b/b/x;->Xj:Ljava/lang/String;

    const-string v1, "progress"

    invoke-static {v1, v0}, Landroid/text/TextUtils;->equals(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Z

    move-result v0

    return v0
.end method

.method public final rX()I
    .locals 2

    iget-object v0, p0, Lcom/kwad/components/core/webview/b/b/x;->errorReason:Ljava/lang/String;

    if-eqz v0, :cond_0

    invoke-static {v0}, Ljava/lang/Long;->parseLong(Ljava/lang/String;)J

    move-result-wide v0

    long-to-int v0, v0

    return v0

    :cond_0
    const/4 v0, 0x0

    return v0
.end method
