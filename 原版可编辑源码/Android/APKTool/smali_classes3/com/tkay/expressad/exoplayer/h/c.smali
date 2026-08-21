.class public abstract Lcom/tkay/expressad/exoplayer/h/c;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/tkay/expressad/exoplayer/h/s;


# instance fields
.field private final a:Ljava/util/ArrayList;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/ArrayList<",
            "Lcom/tkay/expressad/exoplayer/h/s$b;",
            ">;"
        }
    .end annotation
.end field

.field private final b:Lcom/tkay/expressad/exoplayer/h/t$a;

.field private c:Lcom/tkay/expressad/exoplayer/h;

.field private d:Lcom/tkay/expressad/exoplayer/ae;

.field private e:Ljava/lang/Object;


# direct methods
.method public constructor <init>()V
    .locals 2

    .line 44
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 45
    new-instance v0, Ljava/util/ArrayList;

    const/4 v1, 0x1

    invoke-direct {v0, v1}, Ljava/util/ArrayList;-><init>(I)V

    iput-object v0, p0, Lcom/tkay/expressad/exoplayer/h/c;->a:Ljava/util/ArrayList;

    .line 46
    new-instance v0, Lcom/tkay/expressad/exoplayer/h/t$a;

    invoke-direct {v0}, Lcom/tkay/expressad/exoplayer/h/t$a;-><init>()V

    iput-object v0, p0, Lcom/tkay/expressad/exoplayer/h/c;->b:Lcom/tkay/expressad/exoplayer/h/t$a;

    return-void
.end method

.method private a(Lcom/tkay/expressad/exoplayer/h/s$a;J)Lcom/tkay/expressad/exoplayer/h/t$a;
    .locals 2

    const/4 v0, 0x0

    if-eqz p1, :cond_0

    const/4 v1, 0x1

    goto :goto_0

    :cond_0
    move v1, v0

    .line 104
    :goto_0
    invoke-static {v1}, Lcom/tkay/expressad/exoplayer/k/a;->a(Z)V

    .line 105
    iget-object v1, p0, Lcom/tkay/expressad/exoplayer/h/c;->b:Lcom/tkay/expressad/exoplayer/h/t$a;

    invoke-virtual {v1, v0, p1, p2, p3}, Lcom/tkay/expressad/exoplayer/h/t$a;->a(ILcom/tkay/expressad/exoplayer/h/s$a;J)Lcom/tkay/expressad/exoplayer/h/t$a;

    move-result-object p1

    return-object p1
.end method


# virtual methods
.method protected final a(ILcom/tkay/expressad/exoplayer/h/s$a;)Lcom/tkay/expressad/exoplayer/h/t$a;
    .locals 3

    .line 120
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/h/c;->b:Lcom/tkay/expressad/exoplayer/h/t$a;

    const-wide/16 v1, 0x0

    invoke-virtual {v0, p1, p2, v1, v2}, Lcom/tkay/expressad/exoplayer/h/t$a;->a(ILcom/tkay/expressad/exoplayer/h/s$a;J)Lcom/tkay/expressad/exoplayer/h/t$a;

    move-result-object p1

    return-object p1
.end method

.method protected final a(Lcom/tkay/expressad/exoplayer/h/s$a;)Lcom/tkay/expressad/exoplayer/h/t$a;
    .locals 4

    .line 90
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/h/c;->b:Lcom/tkay/expressad/exoplayer/h/t$a;

    const/4 v1, 0x0

    const-wide/16 v2, 0x0

    invoke-virtual {v0, v1, p1, v2, v3}, Lcom/tkay/expressad/exoplayer/h/t$a;->a(ILcom/tkay/expressad/exoplayer/h/s$a;J)Lcom/tkay/expressad/exoplayer/h/t$a;

    move-result-object p1

    return-object p1
.end method

.method protected abstract a()V
.end method

.method public final a(Landroid/os/Handler;Lcom/tkay/expressad/exoplayer/h/t;)V
    .locals 1

    .line 125
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/h/c;->b:Lcom/tkay/expressad/exoplayer/h/t$a;

    invoke-virtual {v0, p1, p2}, Lcom/tkay/expressad/exoplayer/h/t$a;->a(Landroid/os/Handler;Lcom/tkay/expressad/exoplayer/h/t;)V

    return-void
.end method

.method protected final a(Lcom/tkay/expressad/exoplayer/ae;Ljava/lang/Object;)V
    .locals 2

    .line 73
    iput-object p1, p0, Lcom/tkay/expressad/exoplayer/h/c;->d:Lcom/tkay/expressad/exoplayer/ae;

    .line 74
    iput-object p2, p0, Lcom/tkay/expressad/exoplayer/h/c;->e:Ljava/lang/Object;

    .line 75
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/h/c;->a:Ljava/util/ArrayList;

    invoke-virtual {v0}, Ljava/util/ArrayList;->iterator()Ljava/util/Iterator;

    move-result-object v0

    :goto_0
    invoke-interface {v0}, Ljava/util/Iterator;->hasNext()Z

    move-result v1

    if-eqz v1, :cond_0

    invoke-interface {v0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/tkay/expressad/exoplayer/h/s$b;

    .line 76
    invoke-interface {v1, p0, p1, p2}, Lcom/tkay/expressad/exoplayer/h/s$b;->a(Lcom/tkay/expressad/exoplayer/h/s;Lcom/tkay/expressad/exoplayer/ae;Ljava/lang/Object;)V

    goto :goto_0

    :cond_0
    return-void
.end method

.method public final a(Lcom/tkay/expressad/exoplayer/h/s$b;)V
    .locals 1

    .line 148
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/h/c;->a:Ljava/util/ArrayList;

    invoke-virtual {v0, p1}, Ljava/util/ArrayList;->remove(Ljava/lang/Object;)Z

    .line 149
    iget-object p1, p0, Lcom/tkay/expressad/exoplayer/h/c;->a:Ljava/util/ArrayList;

    invoke-virtual {p1}, Ljava/util/ArrayList;->isEmpty()Z

    move-result p1

    if-eqz p1, :cond_0

    const/4 p1, 0x0

    .line 150
    iput-object p1, p0, Lcom/tkay/expressad/exoplayer/h/c;->c:Lcom/tkay/expressad/exoplayer/h;

    .line 151
    iput-object p1, p0, Lcom/tkay/expressad/exoplayer/h/c;->d:Lcom/tkay/expressad/exoplayer/ae;

    .line 152
    iput-object p1, p0, Lcom/tkay/expressad/exoplayer/h/c;->e:Ljava/lang/Object;

    .line 153
    invoke-virtual {p0}, Lcom/tkay/expressad/exoplayer/h/c;->a()V

    :cond_0
    return-void
.end method

.method public final a(Lcom/tkay/expressad/exoplayer/h/t;)V
    .locals 1

    .line 130
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/h/c;->b:Lcom/tkay/expressad/exoplayer/h/t$a;

    invoke-virtual {v0, p1}, Lcom/tkay/expressad/exoplayer/h/t$a;->a(Lcom/tkay/expressad/exoplayer/h/t;)V

    return-void
.end method

.method protected abstract a(Lcom/tkay/expressad/exoplayer/h;Z)V
.end method

.method public final a(Lcom/tkay/expressad/exoplayer/h;ZLcom/tkay/expressad/exoplayer/h/s$b;)V
    .locals 1

    .line 136
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/h/c;->c:Lcom/tkay/expressad/exoplayer/h;

    if-eqz v0, :cond_1

    if-ne v0, p1, :cond_0

    goto :goto_0

    :cond_0
    const/4 v0, 0x0

    goto :goto_1

    :cond_1
    :goto_0
    const/4 v0, 0x1

    :goto_1
    invoke-static {v0}, Lcom/tkay/expressad/exoplayer/k/a;->a(Z)V

    .line 137
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/h/c;->a:Ljava/util/ArrayList;

    invoke-virtual {v0, p3}, Ljava/util/ArrayList;->add(Ljava/lang/Object;)Z

    .line 138
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/h/c;->c:Lcom/tkay/expressad/exoplayer/h;

    if-nez v0, :cond_2

    .line 139
    iput-object p1, p0, Lcom/tkay/expressad/exoplayer/h/c;->c:Lcom/tkay/expressad/exoplayer/h;

    .line 140
    invoke-virtual {p0, p1, p2}, Lcom/tkay/expressad/exoplayer/h/c;->a(Lcom/tkay/expressad/exoplayer/h;Z)V

    return-void

    .line 141
    :cond_2
    iget-object p1, p0, Lcom/tkay/expressad/exoplayer/h/c;->d:Lcom/tkay/expressad/exoplayer/ae;

    if-eqz p1, :cond_3

    .line 142
    iget-object p2, p0, Lcom/tkay/expressad/exoplayer/h/c;->e:Ljava/lang/Object;

    invoke-interface {p3, p0, p1, p2}, Lcom/tkay/expressad/exoplayer/h/s$b;->a(Lcom/tkay/expressad/exoplayer/h/s;Lcom/tkay/expressad/exoplayer/ae;Ljava/lang/Object;)V

    :cond_3
    return-void
.end method
