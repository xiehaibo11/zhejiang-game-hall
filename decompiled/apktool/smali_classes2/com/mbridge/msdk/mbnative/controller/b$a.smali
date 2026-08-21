.class public final Lcom/mbridge/msdk/mbnative/controller/b$a;
.super Lcom/mbridge/msdk/mbnative/e/a/b;
.source "NativePreloadController.java"

# interfaces
.implements Lcom/mbridge/msdk/foundation/same/e/d;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/mbridge/msdk/mbnative/controller/b;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x1
    name = "a"
.end annotation


# instance fields
.field final synthetic a:Lcom/mbridge/msdk/mbnative/controller/b;

.field private b:I

.field private c:I

.field private d:I

.field private e:I

.field private f:I

.field private g:Lcom/mbridge/msdk/out/AdMobClickListener;

.field private h:Ljava/util/List;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/List<",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation
.end field

.field private i:Z

.field private j:Ljava/lang/Runnable;

.field private k:Z

.field private l:Lcom/mbridge/msdk/b/a/a;


# direct methods
.method public constructor <init>(Lcom/mbridge/msdk/mbnative/controller/b;I)V
    .locals 0

    .line 803
    iput-object p1, p0, Lcom/mbridge/msdk/mbnative/controller/b$a;->a:Lcom/mbridge/msdk/mbnative/controller/b;

    .line 804
    invoke-direct {p0}, Lcom/mbridge/msdk/mbnative/e/a/b;-><init>()V

    const/4 p1, 0x0

    .line 773
    iput-object p1, p0, Lcom/mbridge/msdk/mbnative/controller/b$a;->h:Ljava/util/List;

    const/4 p1, 0x0

    .line 808
    iput-boolean p1, p0, Lcom/mbridge/msdk/mbnative/controller/b$a;->i:Z

    const/4 p1, 0x1

    .line 812
    iput-boolean p1, p0, Lcom/mbridge/msdk/mbnative/controller/b$a;->k:Z

    .line 805
    iput p2, p0, Lcom/mbridge/msdk/mbnative/controller/b$a;->b:I

    return-void
.end method

.method static synthetic a(Lcom/mbridge/msdk/mbnative/controller/b$a;I)I
    .locals 0

    .line 765
    iput p1, p0, Lcom/mbridge/msdk/mbnative/controller/b$a;->c:I

    return p1
.end method

.method static synthetic a(Lcom/mbridge/msdk/mbnative/controller/b$a;)Ljava/lang/Runnable;
    .locals 0

    .line 765
    iget-object p0, p0, Lcom/mbridge/msdk/mbnative/controller/b$a;->j:Ljava/lang/Runnable;

    return-object p0
.end method

.method static synthetic b(Lcom/mbridge/msdk/mbnative/controller/b$a;)I
    .locals 0

    .line 765
    iget p0, p0, Lcom/mbridge/msdk/mbnative/controller/b$a;->f:I

    return p0
.end method

.method static synthetic c(Lcom/mbridge/msdk/mbnative/controller/b$a;)I
    .locals 0

    .line 765
    iget p0, p0, Lcom/mbridge/msdk/mbnative/controller/b$a;->e:I

    return p0
.end method

.method static synthetic d(Lcom/mbridge/msdk/mbnative/controller/b$a;)I
    .locals 0

    .line 765
    iget p0, p0, Lcom/mbridge/msdk/mbnative/controller/b$a;->d:I

    return p0
.end method

.method static synthetic e(Lcom/mbridge/msdk/mbnative/controller/b$a;)I
    .locals 0

    .line 765
    iget p0, p0, Lcom/mbridge/msdk/mbnative/controller/b$a;->c:I

    return p0
.end method

.method static synthetic f(Lcom/mbridge/msdk/mbnative/controller/b$a;)I
    .locals 0

    .line 765
    iget p0, p0, Lcom/mbridge/msdk/mbnative/controller/b$a;->b:I

    return p0
.end method

.method static synthetic g(Lcom/mbridge/msdk/mbnative/controller/b$a;)Z
    .locals 0

    .line 765
    iget-boolean p0, p0, Lcom/mbridge/msdk/mbnative/controller/b$a;->i:Z

    return p0
.end method

.method static synthetic h(Lcom/mbridge/msdk/mbnative/controller/b$a;)Z
    .locals 0

    .line 765
    iget-boolean p0, p0, Lcom/mbridge/msdk/mbnative/controller/b$a;->k:Z

    return p0
.end method

.method static synthetic i(Lcom/mbridge/msdk/mbnative/controller/b$a;)Lcom/mbridge/msdk/b/a/a;
    .locals 0

    .line 765
    iget-object p0, p0, Lcom/mbridge/msdk/mbnative/controller/b$a;->l:Lcom/mbridge/msdk/b/a/a;

    return-object p0
.end method

.method static synthetic j(Lcom/mbridge/msdk/mbnative/controller/b$a;)Lcom/mbridge/msdk/out/AdMobClickListener;
    .locals 0

    .line 765
    iget-object p0, p0, Lcom/mbridge/msdk/mbnative/controller/b$a;->g:Lcom/mbridge/msdk/out/AdMobClickListener;

    return-object p0
.end method


# virtual methods
.method public final a(I)V
    .locals 0

    .line 784
    iput p1, p0, Lcom/mbridge/msdk/mbnative/controller/b$a;->f:I

    return-void
.end method

.method public final a(ILjava/lang/String;)V
    .locals 2

    .line 965
    new-instance v0, Ljava/lang/Thread;

    new-instance v1, Lcom/mbridge/msdk/mbnative/controller/b$a$2;

    invoke-direct {v1, p0, p2, p1}, Lcom/mbridge/msdk/mbnative/controller/b$a$2;-><init>(Lcom/mbridge/msdk/mbnative/controller/b$a;Ljava/lang/String;I)V

    invoke-direct {v0, v1}, Ljava/lang/Thread;-><init>(Ljava/lang/Runnable;)V

    .line 999
    iget-object p1, p0, Lcom/mbridge/msdk/mbnative/controller/b$a;->a:Lcom/mbridge/msdk/mbnative/controller/b;

    invoke-virtual {p1, v0}, Lcom/mbridge/msdk/mbnative/controller/b;->a(Ljava/lang/Thread;)V

    return-void
.end method

.method public final a(Lcom/mbridge/msdk/b/a/a;)V
    .locals 0

    .line 817
    iput-object p1, p0, Lcom/mbridge/msdk/mbnative/controller/b$a;->l:Lcom/mbridge/msdk/b/a/a;

    return-void
.end method

.method public final a(Lcom/mbridge/msdk/out/AdMobClickListener;)V
    .locals 0

    .line 776
    iput-object p1, p0, Lcom/mbridge/msdk/mbnative/controller/b$a;->g:Lcom/mbridge/msdk/out/AdMobClickListener;

    return-void
.end method

.method public final a(Ljava/lang/Runnable;)V
    .locals 0

    .line 1007
    iput-object p1, p0, Lcom/mbridge/msdk/mbnative/controller/b$a;->j:Ljava/lang/Runnable;

    return-void
.end method

.method public final a(Ljava/util/List;)V
    .locals 0
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/List<",
            "Ljava/lang/String;",
            ">;)V"
        }
    .end annotation

    .line 780
    iput-object p1, p0, Lcom/mbridge/msdk/mbnative/controller/b$a;->h:Ljava/util/List;

    return-void
.end method

.method public final a(Ljava/util/List;Lcom/mbridge/msdk/foundation/entity/CampaignUnit;)V
    .locals 3
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/List<",
            "Lcom/mbridge/msdk/foundation/same/net/c/b;",
            ">;",
            "Lcom/mbridge/msdk/foundation/entity/CampaignUnit;",
            ")V"
        }
    .end annotation

    .line 839
    iget-object p1, p0, Lcom/mbridge/msdk/mbnative/controller/b$a;->a:Lcom/mbridge/msdk/mbnative/controller/b;

    const/4 v0, 0x1

    invoke-static {p1, v0}, Lcom/mbridge/msdk/mbnative/controller/b;->a(Lcom/mbridge/msdk/mbnative/controller/b;Z)Z

    .line 840
    iget-object p1, p0, Lcom/mbridge/msdk/mbnative/controller/b$a;->a:Lcom/mbridge/msdk/mbnative/controller/b;

    iget-object v1, p0, Lcom/mbridge/msdk/mbnative/controller/b$a;->l:Lcom/mbridge/msdk/b/a/a;

    const/4 v2, 0x0

    invoke-virtual {p1, v0, v1, v2}, Lcom/mbridge/msdk/mbnative/controller/b;->a(ZLcom/mbridge/msdk/b/a/a;Ljava/lang/String;)V

    .line 841
    new-instance p1, Ljava/lang/Thread;

    new-instance v0, Lcom/mbridge/msdk/mbnative/controller/b$a$1;

    invoke-direct {v0, p0, p2}, Lcom/mbridge/msdk/mbnative/controller/b$a$1;-><init>(Lcom/mbridge/msdk/mbnative/controller/b$a;Lcom/mbridge/msdk/foundation/entity/CampaignUnit;)V

    invoke-direct {p1, v0}, Ljava/lang/Thread;-><init>(Ljava/lang/Runnable;)V

    .line 960
    iget-object p2, p0, Lcom/mbridge/msdk/mbnative/controller/b$a;->a:Lcom/mbridge/msdk/mbnative/controller/b;

    invoke-virtual {p2, p1}, Lcom/mbridge/msdk/mbnative/controller/b;->a(Ljava/lang/Thread;)V

    return-void
.end method

.method public final a(Z)V
    .locals 0

    .line 829
    iput-boolean p1, p0, Lcom/mbridge/msdk/mbnative/controller/b$a;->i:Z

    return-void
.end method

.method public final b(I)V
    .locals 0

    .line 788
    iput p1, p0, Lcom/mbridge/msdk/mbnative/controller/b$a;->d:I

    return-void
.end method

.method public final b(Ljava/util/List;)V
    .locals 2
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/List<",
            "Lcom/mbridge/msdk/out/Frame;",
            ">;)V"
        }
    .end annotation

    .line 1012
    new-instance v0, Ljava/lang/Thread;

    new-instance v1, Lcom/mbridge/msdk/mbnative/controller/b$a$3;

    invoke-direct {v1, p0, p1}, Lcom/mbridge/msdk/mbnative/controller/b$a$3;-><init>(Lcom/mbridge/msdk/mbnative/controller/b$a;Ljava/util/List;)V

    invoke-direct {v0, v1}, Ljava/lang/Thread;-><init>(Ljava/lang/Runnable;)V

    .line 1050
    iget-object p1, p0, Lcom/mbridge/msdk/mbnative/controller/b$a;->a:Lcom/mbridge/msdk/mbnative/controller/b;

    invoke-virtual {p1, v0}, Lcom/mbridge/msdk/mbnative/controller/b;->a(Ljava/lang/Thread;)V

    return-void
.end method

.method public final b(Z)V
    .locals 0

    .line 824
    iput-boolean p1, p0, Lcom/mbridge/msdk/mbnative/controller/b$a;->k:Z

    return-void
.end method

.method public final c(I)V
    .locals 0

    .line 792
    iput p1, p0, Lcom/mbridge/msdk/mbnative/controller/b$a;->e:I

    return-void
.end method

.method public final d(I)V
    .locals 0

    .line 800
    iput p1, p0, Lcom/mbridge/msdk/mbnative/controller/b$a;->c:I

    return-void
.end method
