.class public final Lcom/tkay/expressad/foundation/f/a/a$a;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/tkay/expressad/widget/a/c;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/tkay/expressad/foundation/f/a/a;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x9
    name = "a"
.end annotation


# instance fields
.field private a:Lcom/tkay/expressad/foundation/f/a;

.field private b:Ljava/lang/String;


# direct methods
.method public constructor <init>(Ljava/lang/String;Lcom/tkay/expressad/foundation/f/a;)V
    .locals 0

    .line 429
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 430
    iput-object p2, p0, Lcom/tkay/expressad/foundation/f/a/a$a;->a:Lcom/tkay/expressad/foundation/f/a;

    .line 431
    iput-object p1, p0, Lcom/tkay/expressad/foundation/f/a/a$a;->b:Ljava/lang/String;

    return-void
.end method


# virtual methods
.method public final a()V
    .locals 1

    const/4 v0, 0x0

    .line 435
    sput-boolean v0, Lcom/tkay/expressad/foundation/f/b;->c:Z

    .line 436
    iget-object v0, p0, Lcom/tkay/expressad/foundation/f/a/a$a;->a:Lcom/tkay/expressad/foundation/f/a;

    if-eqz v0, :cond_0

    .line 437
    invoke-static {}, Lcom/tkay/expressad/foundation/f/a/a;->f()Ljava/lang/String;

    invoke-interface {v0}, Lcom/tkay/expressad/foundation/f/a;->c()V

    :cond_0
    return-void
.end method

.method public final a(Z)V
    .locals 1

    const/4 v0, 0x1

    .line 457
    sput-boolean v0, Lcom/tkay/expressad/foundation/f/b;->c:Z

    .line 458
    iget-object v0, p0, Lcom/tkay/expressad/foundation/f/a/a$a;->a:Lcom/tkay/expressad/foundation/f/a;

    if-eqz v0, :cond_0

    if-eqz p1, :cond_0

    .line 460
    invoke-interface {v0}, Lcom/tkay/expressad/foundation/f/a;->a()V

    :cond_0
    return-void
.end method

.method public final b()V
    .locals 1

    const/4 v0, 0x0

    .line 444
    sput-boolean v0, Lcom/tkay/expressad/foundation/f/b;->c:Z

    .line 445
    iget-object v0, p0, Lcom/tkay/expressad/foundation/f/a/a$a;->a:Lcom/tkay/expressad/foundation/f/a;

    if-eqz v0, :cond_0

    .line 446
    invoke-interface {v0}, Lcom/tkay/expressad/foundation/f/a;->b()V

    :cond_0
    return-void
.end method

.method public final c()V
    .locals 0

    return-void
.end method
