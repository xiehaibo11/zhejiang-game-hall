.class final Lcom/tkay/expressad/foundation/g/f/d$7;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/expressad/foundation/g/f/d;->a(Lcom/tkay/expressad/foundation/g/f/i;JJ)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/tkay/expressad/foundation/g/f/i;

.field final synthetic b:J

.field final synthetic c:J

.field final synthetic d:Lcom/tkay/expressad/foundation/g/f/d;


# direct methods
.method constructor <init>(Lcom/tkay/expressad/foundation/g/f/d;Lcom/tkay/expressad/foundation/g/f/i;JJ)V
    .locals 0

    .line 101
    iput-object p1, p0, Lcom/tkay/expressad/foundation/g/f/d$7;->d:Lcom/tkay/expressad/foundation/g/f/d;

    iput-object p2, p0, Lcom/tkay/expressad/foundation/g/f/d$7;->a:Lcom/tkay/expressad/foundation/g/f/i;

    iput-wide p3, p0, Lcom/tkay/expressad/foundation/g/f/d$7;->b:J

    iput-wide p5, p0, Lcom/tkay/expressad/foundation/g/f/d$7;->c:J

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final run()V
    .locals 5

    .line 104
    iget-object v0, p0, Lcom/tkay/expressad/foundation/g/f/d$7;->a:Lcom/tkay/expressad/foundation/g/f/i;

    iget-wide v1, p0, Lcom/tkay/expressad/foundation/g/f/d$7;->b:J

    iget-wide v3, p0, Lcom/tkay/expressad/foundation/g/f/d$7;->c:J

    invoke-virtual {v0, v1, v2, v3, v4}, Lcom/tkay/expressad/foundation/g/f/i;->a(JJ)V

    return-void
.end method
