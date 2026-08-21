.class public final Lcom/kwad/components/ad/feed/d$a;
.super Ljava/lang/Object;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/kwad/components/ad/feed/d;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x9
    name = "a"
.end annotation


# instance fields
.field private dS:Lcom/kwad/components/ad/feed/d$b;

.field private mContext:Landroid/content/Context;


# direct methods
.method public constructor <init>(Lcom/kwad/components/ad/feed/d$b;Landroid/content/Context;)V
    .locals 0

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    iput-object p1, p0, Lcom/kwad/components/ad/feed/d$a;->dS:Lcom/kwad/components/ad/feed/d$b;

    iput-object p2, p0, Lcom/kwad/components/ad/feed/d$a;->mContext:Landroid/content/Context;

    return-void
.end method

.method static synthetic a(Lcom/kwad/components/ad/feed/d$a;)Lcom/kwad/components/ad/feed/d$b;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/ad/feed/d$a;->dS:Lcom/kwad/components/ad/feed/d$b;

    return-object p0
.end method

.method static synthetic b(Lcom/kwad/components/ad/feed/d$a;)Landroid/content/Context;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/ad/feed/d$a;->mContext:Landroid/content/Context;

    return-object p0
.end method
