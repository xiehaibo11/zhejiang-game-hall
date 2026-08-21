.class final Lcom/kwad/components/core/widget/b$1;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/kwad/components/core/widget/a$a;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/kwad/components/core/widget/b;->a(Landroid/view/ViewGroup;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic XV:Lcom/kwad/components/core/widget/b;


# direct methods
.method constructor <init>(Lcom/kwad/components/core/widget/b;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/components/core/widget/b$1;->XV:Lcom/kwad/components/core/widget/b;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final aa()V
    .locals 0

    return-void
.end method

.method public final ab()V
    .locals 5

    iget-object v0, p0, Lcom/kwad/components/core/widget/b$1;->XV:Lcom/kwad/components/core/widget/b;

    iget-object v0, v0, Lcom/kwad/components/core/widget/b;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    iget-boolean v0, v0, Lcom/kwad/sdk/core/response/model/AdTemplate;->mPvReported:Z

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/kwad/components/core/widget/b$1;->XV:Lcom/kwad/components/core/widget/b;

    iget-boolean v0, v0, Lcom/kwad/components/core/widget/b;->mA:Z

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/kwad/components/core/widget/b$1;->XV:Lcom/kwad/components/core/widget/b;

    invoke-virtual {v0}, Lcom/kwad/components/core/widget/b;->getTimerHelper()Lcom/kwad/sdk/utils/bi;

    move-result-object v0

    invoke-virtual {v0}, Lcom/kwad/sdk/utils/bi;->Kd()J

    move-result-wide v0

    iget-object v2, p0, Lcom/kwad/components/core/widget/b$1;->XV:Lcom/kwad/components/core/widget/b;

    invoke-static {v2}, Lcom/kwad/components/core/widget/b;->a(Lcom/kwad/components/core/widget/b;)J

    move-result-wide v3

    add-long/2addr v3, v0

    invoke-static {v2, v3, v4}, Lcom/kwad/components/core/widget/b;->a(Lcom/kwad/components/core/widget/b;J)J

    iget-object v2, p0, Lcom/kwad/components/core/widget/b$1;->XV:Lcom/kwad/components/core/widget/b;

    iget-object v2, v2, Lcom/kwad/components/core/widget/b;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    const/4 v3, 0x0

    invoke-static {v2, v0, v1, v3}, Lcom/kwad/sdk/core/report/a;->a(Lcom/kwad/sdk/core/response/model/AdTemplate;JLorg/json/JSONObject;)V

    iget-object v0, p0, Lcom/kwad/components/core/widget/b$1;->XV:Lcom/kwad/components/core/widget/b;

    const/4 v1, 0x0

    iput-boolean v1, v0, Lcom/kwad/components/core/widget/b;->mA:Z

    :cond_0
    return-void
.end method

.method public final eH()V
    .locals 5

    iget-object v0, p0, Lcom/kwad/components/core/widget/b$1;->XV:Lcom/kwad/components/core/widget/b;

    iget-object v0, v0, Lcom/kwad/components/core/widget/b;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    iget-boolean v0, v0, Lcom/kwad/sdk/core/response/model/AdTemplate;->mPvReported:Z

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/kwad/components/core/widget/b$1;->XV:Lcom/kwad/components/core/widget/b;

    iget-boolean v0, v0, Lcom/kwad/components/core/widget/b;->mA:Z

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/kwad/components/core/widget/b$1;->XV:Lcom/kwad/components/core/widget/b;

    invoke-virtual {v0}, Lcom/kwad/components/core/widget/b;->getTimerHelper()Lcom/kwad/sdk/utils/bi;

    move-result-object v0

    invoke-virtual {v0}, Lcom/kwad/sdk/utils/bi;->Kd()J

    move-result-wide v0

    iget-object v2, p0, Lcom/kwad/components/core/widget/b$1;->XV:Lcom/kwad/components/core/widget/b;

    invoke-static {v2}, Lcom/kwad/components/core/widget/b;->a(Lcom/kwad/components/core/widget/b;)J

    move-result-wide v3

    add-long/2addr v3, v0

    invoke-static {v2, v3, v4}, Lcom/kwad/components/core/widget/b;->a(Lcom/kwad/components/core/widget/b;J)J

    iget-object v2, p0, Lcom/kwad/components/core/widget/b$1;->XV:Lcom/kwad/components/core/widget/b;

    iget-object v2, v2, Lcom/kwad/components/core/widget/b;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    const/4 v3, 0x0

    invoke-static {v2, v0, v1, v3}, Lcom/kwad/sdk/core/report/a;->a(Lcom/kwad/sdk/core/response/model/AdTemplate;JLorg/json/JSONObject;)V

    iget-object v0, p0, Lcom/kwad/components/core/widget/b$1;->XV:Lcom/kwad/components/core/widget/b;

    const/4 v1, 0x0

    iput-boolean v1, v0, Lcom/kwad/components/core/widget/b;->mA:Z

    :cond_0
    return-void
.end method

.method public final k(Landroid/view/View;)V
    .locals 1

    iget-object p1, p0, Lcom/kwad/components/core/widget/b$1;->XV:Lcom/kwad/components/core/widget/b;

    iget-object p1, p1, Lcom/kwad/components/core/widget/b;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    iget-boolean p1, p1, Lcom/kwad/sdk/core/response/model/AdTemplate;->mPvReported:Z

    const/4 v0, 0x1

    if-nez p1, :cond_0

    iget-object p1, p0, Lcom/kwad/components/core/widget/b$1;->XV:Lcom/kwad/components/core/widget/b;

    iget-object p1, p1, Lcom/kwad/components/core/widget/b;->XT:Lcom/kwad/components/core/widget/b$a;

    if-eqz p1, :cond_0

    iget-object p1, p0, Lcom/kwad/components/core/widget/b$1;->XV:Lcom/kwad/components/core/widget/b;

    iput-boolean v0, p1, Lcom/kwad/components/core/widget/b;->mA:Z

    iget-object p1, p0, Lcom/kwad/components/core/widget/b$1;->XV:Lcom/kwad/components/core/widget/b;

    invoke-virtual {p1}, Lcom/kwad/components/core/widget/b;->bt()V

    iget-object p1, p0, Lcom/kwad/components/core/widget/b$1;->XV:Lcom/kwad/components/core/widget/b;

    invoke-virtual {p1}, Lcom/kwad/components/core/widget/b;->getTimerHelper()Lcom/kwad/sdk/utils/bi;

    move-result-object p1

    invoke-virtual {p1}, Lcom/kwad/sdk/utils/bi;->startTiming()V

    :cond_0
    iget-object p1, p0, Lcom/kwad/components/core/widget/b$1;->XV:Lcom/kwad/components/core/widget/b;

    iget-boolean p1, p1, Lcom/kwad/components/core/widget/b;->mA:Z

    if-nez p1, :cond_1

    iget-object p1, p0, Lcom/kwad/components/core/widget/b$1;->XV:Lcom/kwad/components/core/widget/b;

    invoke-virtual {p1}, Lcom/kwad/components/core/widget/b;->getTimerHelper()Lcom/kwad/sdk/utils/bi;

    move-result-object p1

    invoke-virtual {p1}, Lcom/kwad/sdk/utils/bi;->startTiming()V

    :cond_1
    iget-object p1, p0, Lcom/kwad/components/core/widget/b$1;->XV:Lcom/kwad/components/core/widget/b;

    iput-boolean v0, p1, Lcom/kwad/components/core/widget/b;->mA:Z

    return-void
.end method
