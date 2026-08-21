.class public Lcom/ss/android/downloadlib/addownload/compliance/AppDetailInfoActivity;
.super Landroid/app/Activity;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/ss/android/downloadlib/addownload/compliance/AppDetailInfoActivity$rg;
    }
.end annotation


# instance fields
.field private c:J

.field private df:Landroid/widget/TextView;

.field private fw:Ljava/util/List;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/List<",
            "Landroid/util/Pair<",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            ">;>;"
        }
    .end annotation
.end field

.field private pp:J

.field private pt:Landroid/support/v7/widget/RecyclerView;

.field private q:Landroid/widget/LinearLayout;

.field private rg:Landroid/widget/ImageView;


# direct methods
.method public constructor <init>()V
    .locals 0

    .line 26
    invoke-direct {p0}, Landroid/app/Activity;-><init>()V

    return-void
.end method

.method private df()V
    .locals 3

    .line 67
    sget v0, Lcom/bytedance/sdk/openadsdk/R$id;->iv_detail_back:I

    invoke-virtual {p0, v0}, Lcom/ss/android/downloadlib/addownload/compliance/AppDetailInfoActivity;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/ImageView;

    iput-object v0, p0, Lcom/ss/android/downloadlib/addownload/compliance/AppDetailInfoActivity;->rg:Landroid/widget/ImageView;

    .line 68
    sget v0, Lcom/bytedance/sdk/openadsdk/R$id;->tv_empty:I

    invoke-virtual {p0, v0}, Lcom/ss/android/downloadlib/addownload/compliance/AppDetailInfoActivity;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/TextView;

    iput-object v0, p0, Lcom/ss/android/downloadlib/addownload/compliance/AppDetailInfoActivity;->df:Landroid/widget/TextView;

    .line 69
    sget v0, Lcom/bytedance/sdk/openadsdk/R$id;->permission_list:I

    invoke-virtual {p0, v0}, Lcom/ss/android/downloadlib/addownload/compliance/AppDetailInfoActivity;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/support/v7/widget/RecyclerView;

    iput-object v0, p0, Lcom/ss/android/downloadlib/addownload/compliance/AppDetailInfoActivity;->pt:Landroid/support/v7/widget/RecyclerView;

    .line 70
    sget v0, Lcom/bytedance/sdk/openadsdk/R$id;->ll_download:I

    invoke-virtual {p0, v0}, Lcom/ss/android/downloadlib/addownload/compliance/AppDetailInfoActivity;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/LinearLayout;

    iput-object v0, p0, Lcom/ss/android/downloadlib/addownload/compliance/AppDetailInfoActivity;->q:Landroid/widget/LinearLayout;

    .line 72
    iget-object v0, p0, Lcom/ss/android/downloadlib/addownload/compliance/AppDetailInfoActivity;->fw:Ljava/util/List;

    invoke-interface {v0}, Ljava/util/List;->isEmpty()Z

    move-result v0

    if-eqz v0, :cond_0

    .line 73
    iget-object v0, p0, Lcom/ss/android/downloadlib/addownload/compliance/AppDetailInfoActivity;->pt:Landroid/support/v7/widget/RecyclerView;

    const/16 v1, 0x8

    invoke-virtual {v0, v1}, Landroid/support/v7/widget/RecyclerView;->setVisibility(I)V

    .line 74
    iget-object v0, p0, Lcom/ss/android/downloadlib/addownload/compliance/AppDetailInfoActivity;->df:Landroid/widget/TextView;

    const/4 v1, 0x0

    invoke-virtual {v0, v1}, Landroid/widget/TextView;->setVisibility(I)V

    goto :goto_0

    .line 76
    :cond_0
    new-instance v0, Landroid/support/v7/widget/LinearLayoutManager;

    invoke-direct {v0, p0}, Landroid/support/v7/widget/LinearLayoutManager;-><init>(Landroid/content/Context;)V

    const/4 v1, 0x1

    .line 77
    invoke-virtual {v0, v1}, Landroid/support/v7/widget/LinearLayoutManager;->setOrientation(I)V

    .line 78
    iget-object v1, p0, Lcom/ss/android/downloadlib/addownload/compliance/AppDetailInfoActivity;->pt:Landroid/support/v7/widget/RecyclerView;

    invoke-virtual {v1, v0}, Landroid/support/v7/widget/RecyclerView;->setLayoutManager(Landroid/support/v7/widget/RecyclerView$LayoutManager;)V

    .line 79
    iget-object v0, p0, Lcom/ss/android/downloadlib/addownload/compliance/AppDetailInfoActivity;->pt:Landroid/support/v7/widget/RecyclerView;

    new-instance v1, Lcom/ss/android/downloadlib/addownload/compliance/AppDetailInfoActivity$rg;

    const/4 v2, 0x0

    invoke-direct {v1, p0, v2}, Lcom/ss/android/downloadlib/addownload/compliance/AppDetailInfoActivity$rg;-><init>(Lcom/ss/android/downloadlib/addownload/compliance/AppDetailInfoActivity;Lcom/ss/android/downloadlib/addownload/compliance/AppDetailInfoActivity$1;)V

    invoke-virtual {v0, v1}, Landroid/support/v7/widget/RecyclerView;->setAdapter(Landroid/support/v7/widget/RecyclerView$Adapter;)V

    .line 82
    :goto_0
    iget-object v0, p0, Lcom/ss/android/downloadlib/addownload/compliance/AppDetailInfoActivity;->rg:Landroid/widget/ImageView;

    new-instance v1, Lcom/ss/android/downloadlib/addownload/compliance/AppDetailInfoActivity$1;

    invoke-direct {v1, p0}, Lcom/ss/android/downloadlib/addownload/compliance/AppDetailInfoActivity$1;-><init>(Lcom/ss/android/downloadlib/addownload/compliance/AppDetailInfoActivity;)V

    invoke-virtual {v0, v1}, Landroid/widget/ImageView;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 89
    iget-object v0, p0, Lcom/ss/android/downloadlib/addownload/compliance/AppDetailInfoActivity;->q:Landroid/widget/LinearLayout;

    new-instance v1, Lcom/ss/android/downloadlib/addownload/compliance/AppDetailInfoActivity$2;

    invoke-direct {v1, p0}, Lcom/ss/android/downloadlib/addownload/compliance/AppDetailInfoActivity$2;-><init>(Lcom/ss/android/downloadlib/addownload/compliance/AppDetailInfoActivity;)V

    invoke-virtual {v0, v1}, Landroid/widget/LinearLayout;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    return-void
.end method

.method static synthetic rg(Lcom/ss/android/downloadlib/addownload/compliance/AppDetailInfoActivity;)J
    .locals 2

    .line 26
    iget-wide v0, p0, Lcom/ss/android/downloadlib/addownload/compliance/AppDetailInfoActivity;->c:J

    return-wide v0
.end method

.method public static rg(Landroid/app/Activity;J)V
    .locals 2

    .line 50
    new-instance v0, Landroid/content/Intent;

    const-class v1, Lcom/ss/android/downloadlib/addownload/compliance/AppDetailInfoActivity;

    invoke-direct {v0, p0, v1}, Landroid/content/Intent;-><init>(Landroid/content/Context;Ljava/lang/Class;)V

    const-string v1, "app_info_id"

    .line 51
    invoke-virtual {v0, v1, p1, p2}, Landroid/content/Intent;->putExtra(Ljava/lang/String;J)Landroid/content/Intent;

    .line 52
    invoke-virtual {p0, v0}, Landroid/app/Activity;->startActivity(Landroid/content/Intent;)V

    return-void
.end method

.method private rg()Z
    .locals 4

    .line 56
    invoke-virtual {p0}, Lcom/ss/android/downloadlib/addownload/compliance/AppDetailInfoActivity;->getIntent()Landroid/content/Intent;

    move-result-object v0

    const-string v1, "app_info_id"

    const-wide/16 v2, 0x0

    invoke-virtual {v0, v1, v2, v3}, Landroid/content/Intent;->getLongExtra(Ljava/lang/String;J)J

    move-result-wide v0

    iput-wide v0, p0, Lcom/ss/android/downloadlib/addownload/compliance/AppDetailInfoActivity;->pp:J

    .line 57
    invoke-static {}, Lcom/ss/android/downloadlib/addownload/compliance/q;->rg()Lcom/ss/android/downloadlib/addownload/compliance/q;

    move-result-object v0

    iget-wide v1, p0, Lcom/ss/android/downloadlib/addownload/compliance/AppDetailInfoActivity;->pp:J

    invoke-virtual {v0, v1, v2}, Lcom/ss/android/downloadlib/addownload/compliance/q;->rg(J)Lcom/ss/android/downloadlib/addownload/model/df;

    move-result-object v0

    if-nez v0, :cond_0

    const/4 v0, 0x0

    return v0

    .line 61
    :cond_0
    iget-wide v1, v0, Lcom/ss/android/downloadlib/addownload/model/df;->df:J

    iput-wide v1, p0, Lcom/ss/android/downloadlib/addownload/compliance/AppDetailInfoActivity;->c:J

    .line 62
    iget-object v0, v0, Lcom/ss/android/downloadlib/addownload/model/df;->ux:Ljava/util/List;

    iput-object v0, p0, Lcom/ss/android/downloadlib/addownload/compliance/AppDetailInfoActivity;->fw:Ljava/util/List;

    const/4 v0, 0x1

    return v0
.end method


# virtual methods
.method public onBackPressed()V
    .locals 3

    .line 102
    iget-wide v0, p0, Lcom/ss/android/downloadlib/addownload/compliance/AppDetailInfoActivity;->c:J

    const-string v2, "lp_app_detail_click_close"

    invoke-static {v2, v0, v1}, Lcom/ss/android/downloadlib/addownload/compliance/pp;->rg(Ljava/lang/String;J)V

    .line 103
    invoke-super {p0}, Landroid/app/Activity;->onBackPressed()V

    return-void
.end method

.method protected onCreate(Landroid/os/Bundle;)V
    .locals 0

    .line 39
    invoke-super {p0, p1}, Landroid/app/Activity;->onCreate(Landroid/os/Bundle;)V

    .line 40
    sget p1, Lcom/bytedance/sdk/openadsdk/R$layout;->ttdownloader_activity_app_detail_info:I

    invoke-virtual {p0, p1}, Lcom/ss/android/downloadlib/addownload/compliance/AppDetailInfoActivity;->setContentView(I)V

    .line 42
    invoke-direct {p0}, Lcom/ss/android/downloadlib/addownload/compliance/AppDetailInfoActivity;->rg()Z

    move-result p1

    if-eqz p1, :cond_0

    .line 43
    invoke-direct {p0}, Lcom/ss/android/downloadlib/addownload/compliance/AppDetailInfoActivity;->df()V

    goto :goto_0

    .line 45
    :cond_0
    invoke-static {p0}, Lcom/ss/android/socialbase/appdownloader/q;->rg(Landroid/app/Activity;)V

    :goto_0
    return-void
.end method
