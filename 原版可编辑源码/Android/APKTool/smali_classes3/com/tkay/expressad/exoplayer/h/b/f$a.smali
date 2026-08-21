.class public final Lcom/tkay/expressad/exoplayer/h/b/f$a;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/tkay/expressad/exoplayer/h/y;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/tkay/expressad/exoplayer/h/b/f;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x11
    name = "a"
.end annotation


# instance fields
.field public final a:Lcom/tkay/expressad/exoplayer/h/b/f;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Lcom/tkay/expressad/exoplayer/h/b/f<",
            "TT;>;"
        }
    .end annotation
.end field

.field final synthetic b:Lcom/tkay/expressad/exoplayer/h/b/f;

.field private final c:Lcom/tkay/expressad/exoplayer/h/x;

.field private final d:I

.field private e:Z


# direct methods
.method public constructor <init>(Lcom/tkay/expressad/exoplayer/h/b/f;Lcom/tkay/expressad/exoplayer/h/b/f;Lcom/tkay/expressad/exoplayer/h/x;I)V
    .locals 0
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Lcom/tkay/expressad/exoplayer/h/b/f<",
            "TT;>;",
            "Lcom/tkay/expressad/exoplayer/h/x;",
            "I)V"
        }
    .end annotation

    .line 641
    iput-object p1, p0, Lcom/tkay/expressad/exoplayer/h/b/f$a;->b:Lcom/tkay/expressad/exoplayer/h/b/f;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 642
    iput-object p2, p0, Lcom/tkay/expressad/exoplayer/h/b/f$a;->a:Lcom/tkay/expressad/exoplayer/h/b/f;

    .line 643
    iput-object p3, p0, Lcom/tkay/expressad/exoplayer/h/b/f$a;->c:Lcom/tkay/expressad/exoplayer/h/x;

    .line 644
    iput p4, p0, Lcom/tkay/expressad/exoplayer/h/b/f$a;->d:I

    return-void
.end method

.method private a()V
    .locals 3

    .line 690
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/h/b/f$a;->b:Lcom/tkay/expressad/exoplayer/h/b/f;

    invoke-static {v0}, Lcom/tkay/expressad/exoplayer/h/b/f;->a(Lcom/tkay/expressad/exoplayer/h/b/f;)[Z

    move-result-object v0

    iget v1, p0, Lcom/tkay/expressad/exoplayer/h/b/f$a;->d:I

    aget-boolean v0, v0, v1

    invoke-static {v0}, Lcom/tkay/expressad/exoplayer/k/a;->b(Z)V

    .line 691
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/h/b/f$a;->b:Lcom/tkay/expressad/exoplayer/h/b/f;

    invoke-static {v0}, Lcom/tkay/expressad/exoplayer/h/b/f;->a(Lcom/tkay/expressad/exoplayer/h/b/f;)[Z

    move-result-object v0

    iget v1, p0, Lcom/tkay/expressad/exoplayer/h/b/f$a;->d:I

    const/4 v2, 0x0

    aput-boolean v2, v0, v1

    return-void
.end method

.method private d()V
    .locals 8

    .line 695
    iget-boolean v0, p0, Lcom/tkay/expressad/exoplayer/h/b/f$a;->e:Z

    if-nez v0, :cond_0

    .line 696
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/h/b/f$a;->b:Lcom/tkay/expressad/exoplayer/h/b/f;

    invoke-static {v0}, Lcom/tkay/expressad/exoplayer/h/b/f;->e(Lcom/tkay/expressad/exoplayer/h/b/f;)Lcom/tkay/expressad/exoplayer/h/t$a;

    move-result-object v1

    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/h/b/f$a;->b:Lcom/tkay/expressad/exoplayer/h/b/f;

    .line 697
    invoke-static {v0}, Lcom/tkay/expressad/exoplayer/h/b/f;->b(Lcom/tkay/expressad/exoplayer/h/b/f;)[I

    move-result-object v0

    iget v2, p0, Lcom/tkay/expressad/exoplayer/h/b/f$a;->d:I

    aget v2, v0, v2

    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/h/b/f$a;->b:Lcom/tkay/expressad/exoplayer/h/b/f;

    .line 698
    invoke-static {v0}, Lcom/tkay/expressad/exoplayer/h/b/f;->c(Lcom/tkay/expressad/exoplayer/h/b/f;)[Lcom/tkay/expressad/exoplayer/m;

    move-result-object v0

    iget v3, p0, Lcom/tkay/expressad/exoplayer/h/b/f$a;->d:I

    aget-object v3, v0, v3

    const/4 v4, 0x0

    const/4 v5, 0x0

    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/h/b/f$a;->b:Lcom/tkay/expressad/exoplayer/h/b/f;

    .line 701
    invoke-static {v0}, Lcom/tkay/expressad/exoplayer/h/b/f;->d(Lcom/tkay/expressad/exoplayer/h/b/f;)J

    move-result-wide v6

    .line 696
    invoke-virtual/range {v1 .. v7}, Lcom/tkay/expressad/exoplayer/h/t$a;->a(ILcom/tkay/expressad/exoplayer/m;ILjava/lang/Object;J)V

    const/4 v0, 0x1

    .line 702
    iput-boolean v0, p0, Lcom/tkay/expressad/exoplayer/h/b/f$a;->e:Z

    :cond_0
    return-void
.end method


# virtual methods
.method public final a(J)I
    .locals 2

    .line 655
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/h/b/f$a;->b:Lcom/tkay/expressad/exoplayer/h/b/f;

    iget-boolean v0, v0, Lcom/tkay/expressad/exoplayer/h/b/f;->c:Z

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/h/b/f$a;->c:Lcom/tkay/expressad/exoplayer/h/x;

    invoke-virtual {v0}, Lcom/tkay/expressad/exoplayer/h/x;->g()J

    move-result-wide v0

    cmp-long v0, p1, v0

    if-lez v0, :cond_0

    .line 656
    iget-object p1, p0, Lcom/tkay/expressad/exoplayer/h/b/f$a;->c:Lcom/tkay/expressad/exoplayer/h/x;

    invoke-virtual {p1}, Lcom/tkay/expressad/exoplayer/h/x;->k()I

    move-result p1

    goto :goto_0

    .line 658
    :cond_0
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/h/b/f$a;->c:Lcom/tkay/expressad/exoplayer/h/x;

    const/4 v1, 0x1

    invoke-virtual {v0, p1, p2, v1}, Lcom/tkay/expressad/exoplayer/h/x;->a(JZ)I

    move-result p1

    const/4 p2, -0x1

    if-ne p1, p2, :cond_1

    const/4 p1, 0x0

    :cond_1
    :goto_0
    if-lez p1, :cond_2

    .line 664
    invoke-direct {p0}, Lcom/tkay/expressad/exoplayer/h/b/f$a;->d()V

    :cond_2
    return p1
.end method

.method public final a(Lcom/tkay/expressad/exoplayer/n;Lcom/tkay/expressad/exoplayer/c/e;Z)I
    .locals 7

    .line 677
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/h/b/f$a;->b:Lcom/tkay/expressad/exoplayer/h/b/f;

    invoke-virtual {v0}, Lcom/tkay/expressad/exoplayer/h/b/f;->a()Z

    move-result v0

    if-eqz v0, :cond_0

    const/4 p1, -0x3

    return p1

    .line 680
    :cond_0
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/h/b/f$a;->c:Lcom/tkay/expressad/exoplayer/h/x;

    iget-object v1, p0, Lcom/tkay/expressad/exoplayer/h/b/f$a;->b:Lcom/tkay/expressad/exoplayer/h/b/f;

    iget-boolean v4, v1, Lcom/tkay/expressad/exoplayer/h/b/f;->c:Z

    iget-object v1, p0, Lcom/tkay/expressad/exoplayer/h/b/f$a;->b:Lcom/tkay/expressad/exoplayer/h/b/f;

    iget-wide v5, v1, Lcom/tkay/expressad/exoplayer/h/b/f;->b:J

    move-object v1, p1

    move-object v2, p2

    move v3, p3

    .line 681
    invoke-virtual/range {v0 .. v6}, Lcom/tkay/expressad/exoplayer/h/x;->a(Lcom/tkay/expressad/exoplayer/n;Lcom/tkay/expressad/exoplayer/c/e;ZZJ)I

    move-result p1

    const/4 p2, -0x4

    if-ne p1, p2, :cond_1

    .line 684
    invoke-direct {p0}, Lcom/tkay/expressad/exoplayer/h/b/f$a;->d()V

    :cond_1
    return p1
.end method

.method public final b()Z
    .locals 1

    .line 649
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/h/b/f$a;->b:Lcom/tkay/expressad/exoplayer/h/b/f;

    iget-boolean v0, v0, Lcom/tkay/expressad/exoplayer/h/b/f;->c:Z

    if-nez v0, :cond_1

    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/h/b/f$a;->b:Lcom/tkay/expressad/exoplayer/h/b/f;

    invoke-virtual {v0}, Lcom/tkay/expressad/exoplayer/h/b/f;->a()Z

    move-result v0

    if-nez v0, :cond_0

    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/h/b/f$a;->c:Lcom/tkay/expressad/exoplayer/h/x;

    invoke-virtual {v0}, Lcom/tkay/expressad/exoplayer/h/x;->c()Z

    move-result v0

    if-eqz v0, :cond_0

    goto :goto_0

    :cond_0
    const/4 v0, 0x0

    return v0

    :cond_1
    :goto_0
    const/4 v0, 0x1

    return v0
.end method

.method public final c()V
    .locals 0

    return-void
.end method
