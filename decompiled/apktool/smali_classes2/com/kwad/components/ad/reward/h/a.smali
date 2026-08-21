.class public final Lcom/kwad/components/ad/reward/h/a;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/kwad/components/ad/reward/e/l;


# instance fields
.field private mContext:Landroid/content/Context;


# direct methods
.method public constructor <init>(Landroid/content/Context;)V
    .locals 0

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    iput-object p1, p0, Lcom/kwad/components/ad/reward/h/a;->mContext:Landroid/content/Context;

    return-void
.end method


# virtual methods
.method public final hc()Z
    .locals 4

    iget-object v0, p0, Lcom/kwad/components/ad/reward/h/a;->mContext:Landroid/content/Context;

    if-eqz v0, :cond_0

    invoke-virtual {v0}, Landroid/content/Context;->getResources()Landroid/content/res/Resources;

    move-result-object v0

    sget v1, Lcom/kwad/sdk/R$string;->ksad_reward_playable_load_error_toast:I

    invoke-virtual {v0, v1}, Landroid/content/res/Resources;->getString(I)Ljava/lang/String;

    move-result-object v0

    iget-object v1, p0, Lcom/kwad/components/ad/reward/h/a;->mContext:Landroid/content/Context;

    const-wide/16 v2, 0x0

    invoke-static {v1, v0, v2, v3}, Lcom/kwad/sdk/utils/v;->c(Landroid/content/Context;Ljava/lang/String;J)V

    :cond_0
    const/4 v0, 0x1

    return v0
.end method
