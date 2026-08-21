.class final Lcom/tkay/expressad/foundation/g/f/d$2;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/expressad/foundation/g/f/d;->a(Lcom/tkay/expressad/foundation/g/f/i;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/tkay/expressad/foundation/g/f/i;

.field final synthetic b:Lcom/tkay/expressad/foundation/g/f/d;


# direct methods
.method constructor <init>(Lcom/tkay/expressad/foundation/g/f/d;Lcom/tkay/expressad/foundation/g/f/i;)V
    .locals 0

    .line 41
    iput-object p1, p0, Lcom/tkay/expressad/foundation/g/f/d$2;->b:Lcom/tkay/expressad/foundation/g/f/d;

    iput-object p2, p0, Lcom/tkay/expressad/foundation/g/f/d$2;->a:Lcom/tkay/expressad/foundation/g/f/i;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final run()V
    .locals 1

    .line 44
    iget-object v0, p0, Lcom/tkay/expressad/foundation/g/f/d$2;->a:Lcom/tkay/expressad/foundation/g/f/i;

    invoke-virtual {v0}, Lcom/tkay/expressad/foundation/g/f/i;->o()V

    return-void
.end method
