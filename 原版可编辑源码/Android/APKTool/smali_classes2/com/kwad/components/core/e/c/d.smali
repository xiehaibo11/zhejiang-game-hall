.class public final Lcom/kwad/components/core/e/c/d;
.super Lcom/kwad/sdk/mvp/a;


# instance fields
.field public Jp:Lcom/kwad/components/core/e/c/b;

.field public Jq:Lcom/kwad/components/core/e/c/b$b;

.field public mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

.field public mApkDownloadHelper:Lcom/kwad/components/core/e/d/c;

.field public mRootContainer:Lcom/kwad/sdk/core/view/AdBaseFrameLayout;


# direct methods
.method public constructor <init>()V
    .locals 0

    invoke-direct {p0}, Lcom/kwad/sdk/mvp/a;-><init>()V

    return-void
.end method


# virtual methods
.method public final release()V
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/core/e/c/d;->mApkDownloadHelper:Lcom/kwad/components/core/e/d/c;

    if-eqz v0, :cond_0

    invoke-virtual {v0}, Lcom/kwad/components/core/e/d/c;->clear()V

    :cond_0
    return-void
.end method
