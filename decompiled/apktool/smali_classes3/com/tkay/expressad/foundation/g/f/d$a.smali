.class final Lcom/tkay/expressad/foundation/g/f/d$a;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/tkay/expressad/foundation/g/f/d;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x2
    name = "a"
.end annotation


# instance fields
.field final synthetic a:Lcom/tkay/expressad/foundation/g/f/d;

.field private final b:Lcom/tkay/expressad/foundation/g/f/i;

.field private final c:Lcom/tkay/expressad/foundation/g/f/k;


# direct methods
.method public constructor <init>(Lcom/tkay/expressad/foundation/g/f/d;Lcom/tkay/expressad/foundation/g/f/i;Lcom/tkay/expressad/foundation/g/f/k;)V
    .locals 0

    .line 114
    iput-object p1, p0, Lcom/tkay/expressad/foundation/g/f/d$a;->a:Lcom/tkay/expressad/foundation/g/f/d;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 115
    iput-object p2, p0, Lcom/tkay/expressad/foundation/g/f/d$a;->b:Lcom/tkay/expressad/foundation/g/f/i;

    .line 116
    iput-object p3, p0, Lcom/tkay/expressad/foundation/g/f/d$a;->c:Lcom/tkay/expressad/foundation/g/f/k;

    return-void
.end method


# virtual methods
.method public final run()V
    .locals 2

    .line 122
    iget-object v0, p0, Lcom/tkay/expressad/foundation/g/f/d$a;->b:Lcom/tkay/expressad/foundation/g/f/i;

    invoke-virtual {v0}, Lcom/tkay/expressad/foundation/g/f/i;->f()Z

    move-result v0

    if-eqz v0, :cond_0

    .line 123
    iget-object v0, p0, Lcom/tkay/expressad/foundation/g/f/d$a;->b:Lcom/tkay/expressad/foundation/g/f/i;

    invoke-virtual {v0}, Lcom/tkay/expressad/foundation/g/f/i;->c()V

    .line 124
    iget-object v0, p0, Lcom/tkay/expressad/foundation/g/f/d$a;->b:Lcom/tkay/expressad/foundation/g/f/i;

    invoke-virtual {v0}, Lcom/tkay/expressad/foundation/g/f/i;->m()V

    return-void

    .line 128
    :cond_0
    iget-object v0, p0, Lcom/tkay/expressad/foundation/g/f/d$a;->c:Lcom/tkay/expressad/foundation/g/f/k;

    .line 1015
    iget-object v0, v0, Lcom/tkay/expressad/foundation/g/f/k;->b:Lcom/tkay/expressad/foundation/g/f/a/a;

    if-nez v0, :cond_1

    const/4 v0, 0x1

    goto :goto_0

    :cond_1
    const/4 v0, 0x0

    :goto_0
    if-eqz v0, :cond_2

    .line 129
    iget-object v0, p0, Lcom/tkay/expressad/foundation/g/f/d$a;->b:Lcom/tkay/expressad/foundation/g/f/i;

    iget-object v1, p0, Lcom/tkay/expressad/foundation/g/f/d$a;->c:Lcom/tkay/expressad/foundation/g/f/k;

    invoke-virtual {v0, v1}, Lcom/tkay/expressad/foundation/g/f/i;->a(Lcom/tkay/expressad/foundation/g/f/k;)V

    goto :goto_1

    .line 131
    :cond_2
    iget-object v0, p0, Lcom/tkay/expressad/foundation/g/f/d$a;->b:Lcom/tkay/expressad/foundation/g/f/i;

    iget-object v1, p0, Lcom/tkay/expressad/foundation/g/f/d$a;->c:Lcom/tkay/expressad/foundation/g/f/k;

    iget-object v1, v1, Lcom/tkay/expressad/foundation/g/f/k;->b:Lcom/tkay/expressad/foundation/g/f/a/a;

    invoke-virtual {v0, v1}, Lcom/tkay/expressad/foundation/g/f/i;->b(Lcom/tkay/expressad/foundation/g/f/a/a;)V

    .line 134
    :goto_1
    iget-object v0, p0, Lcom/tkay/expressad/foundation/g/f/d$a;->b:Lcom/tkay/expressad/foundation/g/f/i;

    invoke-virtual {v0}, Lcom/tkay/expressad/foundation/g/f/i;->c()V

    .line 135
    iget-object v0, p0, Lcom/tkay/expressad/foundation/g/f/d$a;->b:Lcom/tkay/expressad/foundation/g/f/i;

    invoke-virtual {v0}, Lcom/tkay/expressad/foundation/g/f/i;->o()V

    return-void
.end method
