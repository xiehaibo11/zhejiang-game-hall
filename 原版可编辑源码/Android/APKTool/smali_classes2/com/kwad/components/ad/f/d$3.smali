.class final Lcom/kwad/components/ad/f/d$3;
.super Ljava/lang/Object;

# interfaces
.implements Landroid/view/View$OnClickListener;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/kwad/components/ad/f/d;->a(Landroid/app/Activity;Landroid/view/ViewGroup;ILandroid/view/View;Z)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic mF:Lcom/kwad/components/ad/f/d;

.field final synthetic mH:Lcom/kwad/sdk/utils/ac$a;

.field final synthetic mJ:Landroid/app/Activity;

.field final synthetic mK:I

.field final synthetic mL:Z


# direct methods
.method constructor <init>(Lcom/kwad/components/ad/f/d;Landroid/app/Activity;Lcom/kwad/sdk/utils/ac$a;IZ)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/components/ad/f/d$3;->mF:Lcom/kwad/components/ad/f/d;

    iput-object p2, p0, Lcom/kwad/components/ad/f/d$3;->mJ:Landroid/app/Activity;

    iput-object p3, p0, Lcom/kwad/components/ad/f/d$3;->mH:Lcom/kwad/sdk/utils/ac$a;

    iput p4, p0, Lcom/kwad/components/ad/f/d$3;->mK:I

    iput-boolean p5, p0, Lcom/kwad/components/ad/f/d$3;->mL:Z

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final onClick(Landroid/view/View;)V
    .locals 7

    iget-object v0, p0, Lcom/kwad/components/ad/f/d$3;->mF:Lcom/kwad/components/ad/f/d;

    iget-object v1, p0, Lcom/kwad/components/ad/f/d$3;->mJ:Landroid/app/Activity;

    iget-object v3, p0, Lcom/kwad/components/ad/f/d$3;->mH:Lcom/kwad/sdk/utils/ac$a;

    iget v4, p0, Lcom/kwad/components/ad/f/d$3;->mK:I

    iget-boolean v5, p0, Lcom/kwad/components/ad/f/d$3;->mL:Z

    const/4 v6, 0x0

    move-object v2, p1

    invoke-static/range {v0 .. v6}, Lcom/kwad/components/ad/f/d;->a(Lcom/kwad/components/ad/f/d;Landroid/app/Activity;Landroid/view/View;Lcom/kwad/sdk/utils/ac$a;IZI)V

    return-void
.end method
