.class final Lcom/kwad/components/ad/interstitial/d/c$3;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/kwad/components/core/e/d/a$b;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/kwad/components/ad/interstitial/d/c;->a(Landroid/content/Context;III)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic jw:Lcom/kwad/components/ad/interstitial/d/c;

.field final synthetic jx:I

.field final synthetic jy:I

.field final synthetic jz:Landroid/content/Context;


# direct methods
.method constructor <init>(Lcom/kwad/components/ad/interstitial/d/c;IILandroid/content/Context;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/components/ad/interstitial/d/c$3;->jw:Lcom/kwad/components/ad/interstitial/d/c;

    iput p2, p0, Lcom/kwad/components/ad/interstitial/d/c$3;->jx:I

    iput p3, p0, Lcom/kwad/components/ad/interstitial/d/c$3;->jy:I

    iput-object p4, p0, Lcom/kwad/components/ad/interstitial/d/c$3;->jz:Landroid/content/Context;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final onAdClicked()V
    .locals 4

    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/d/c$3;->jw:Lcom/kwad/components/ad/interstitial/d/c;

    iget v1, p0, Lcom/kwad/components/ad/interstitial/d/c$3;->jx:I

    iget v2, p0, Lcom/kwad/components/ad/interstitial/d/c$3;->jy:I

    iget-object v3, p0, Lcom/kwad/components/ad/interstitial/d/c$3;->jz:Landroid/content/Context;

    invoke-static {v0, v1, v2, v3}, Lcom/kwad/components/ad/interstitial/d/c;->a(Lcom/kwad/components/ad/interstitial/d/c;IILandroid/content/Context;)V

    return-void
.end method
