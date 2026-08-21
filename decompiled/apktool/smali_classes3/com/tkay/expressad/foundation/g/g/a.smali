.class public abstract Lcom/tkay/expressad/foundation/g/g/a;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/tkay/expressad/foundation/g/g/a$b;,
        Lcom/tkay/expressad/foundation/g/g/a$a;
    }
.end annotation


# static fields
.field public static b:J


# instance fields
.field public c:Lcom/tkay/expressad/foundation/g/g/a$a;

.field public d:Lcom/tkay/expressad/foundation/g/g/a$b;


# direct methods
.method public constructor <init>()V
    .locals 4

    .line 29
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 7
    sget-object v0, Lcom/tkay/expressad/foundation/g/g/a$a;->a:Lcom/tkay/expressad/foundation/g/g/a$a;

    iput-object v0, p0, Lcom/tkay/expressad/foundation/g/g/a;->c:Lcom/tkay/expressad/foundation/g/g/a$a;

    .line 30
    sget-wide v0, Lcom/tkay/expressad/foundation/g/g/a;->b:J

    const-wide/16 v2, 0x1

    add-long/2addr v0, v2

    sput-wide v0, Lcom/tkay/expressad/foundation/g/g/a;->b:J

    return-void
.end method

.method private a(Lcom/tkay/expressad/foundation/g/g/a$a;)V
    .locals 1

    .line 65
    iput-object p1, p0, Lcom/tkay/expressad/foundation/g/g/a;->c:Lcom/tkay/expressad/foundation/g/g/a$a;

    .line 66
    iget-object v0, p0, Lcom/tkay/expressad/foundation/g/g/a;->d:Lcom/tkay/expressad/foundation/g/g/a$b;

    if-eqz v0, :cond_0

    .line 67
    invoke-interface {v0, p1}, Lcom/tkay/expressad/foundation/g/g/a$b;->a(Lcom/tkay/expressad/foundation/g/g/a$a;)V

    :cond_0
    return-void
.end method

.method private a(Lcom/tkay/expressad/foundation/g/g/a$b;)V
    .locals 0

    .line 72
    iput-object p1, p0, Lcom/tkay/expressad/foundation/g/g/a;->d:Lcom/tkay/expressad/foundation/g/g/a$b;

    return-void
.end method

.method private d()Lcom/tkay/expressad/foundation/g/g/a$a;
    .locals 1

    .line 61
    iget-object v0, p0, Lcom/tkay/expressad/foundation/g/g/a;->c:Lcom/tkay/expressad/foundation/g/g/a$a;

    return-object v0
.end method

.method public static e()J
    .locals 2

    .line 34
    sget-wide v0, Lcom/tkay/expressad/foundation/g/g/a;->b:J

    return-wide v0
.end method


# virtual methods
.method public abstract a()V
.end method

.method public abstract b()V
.end method

.method public abstract c()V
.end method

.method public final f()V
    .locals 2

    .line 42
    iget-object v0, p0, Lcom/tkay/expressad/foundation/g/g/a;->c:Lcom/tkay/expressad/foundation/g/g/a$a;

    sget-object v1, Lcom/tkay/expressad/foundation/g/g/a$a;->d:Lcom/tkay/expressad/foundation/g/g/a$a;

    if-eq v0, v1, :cond_0

    .line 43
    sget-object v0, Lcom/tkay/expressad/foundation/g/g/a$a;->d:Lcom/tkay/expressad/foundation/g/g/a$a;

    invoke-direct {p0, v0}, Lcom/tkay/expressad/foundation/g/g/a;->a(Lcom/tkay/expressad/foundation/g/g/a$a;)V

    :cond_0
    return-void
.end method

.method public final g()V
    .locals 2

    .line 49
    iget-object v0, p0, Lcom/tkay/expressad/foundation/g/g/a;->c:Lcom/tkay/expressad/foundation/g/g/a$a;

    sget-object v1, Lcom/tkay/expressad/foundation/g/g/a$a;->c:Lcom/tkay/expressad/foundation/g/g/a$a;

    if-eq v0, v1, :cond_1

    iget-object v0, p0, Lcom/tkay/expressad/foundation/g/g/a;->c:Lcom/tkay/expressad/foundation/g/g/a$a;

    sget-object v1, Lcom/tkay/expressad/foundation/g/g/a$a;->d:Lcom/tkay/expressad/foundation/g/g/a$a;

    if-eq v0, v1, :cond_1

    iget-object v0, p0, Lcom/tkay/expressad/foundation/g/g/a;->c:Lcom/tkay/expressad/foundation/g/g/a$a;

    sget-object v1, Lcom/tkay/expressad/foundation/g/g/a$a;->e:Lcom/tkay/expressad/foundation/g/g/a$a;

    if-ne v0, v1, :cond_0

    goto :goto_0

    .line 55
    :cond_0
    sget-object v0, Lcom/tkay/expressad/foundation/g/g/a$a;->b:Lcom/tkay/expressad/foundation/g/g/a$a;

    invoke-direct {p0, v0}, Lcom/tkay/expressad/foundation/g/g/a;->a(Lcom/tkay/expressad/foundation/g/g/a$a;)V

    :cond_1
    :goto_0
    return-void
.end method

.method public final run()V
    .locals 2

    .line 19
    :try_start_0
    iget-object v0, p0, Lcom/tkay/expressad/foundation/g/g/a;->c:Lcom/tkay/expressad/foundation/g/g/a$a;

    sget-object v1, Lcom/tkay/expressad/foundation/g/g/a$a;->a:Lcom/tkay/expressad/foundation/g/g/a$a;

    if-ne v0, v1, :cond_0

    .line 20
    sget-object v0, Lcom/tkay/expressad/foundation/g/g/a$a;->b:Lcom/tkay/expressad/foundation/g/g/a$a;

    invoke-direct {p0, v0}, Lcom/tkay/expressad/foundation/g/g/a;->a(Lcom/tkay/expressad/foundation/g/g/a$a;)V

    .line 21
    invoke-virtual {p0}, Lcom/tkay/expressad/foundation/g/g/a;->a()V

    .line 22
    sget-object v0, Lcom/tkay/expressad/foundation/g/g/a$a;->e:Lcom/tkay/expressad/foundation/g/g/a$a;

    invoke-direct {p0, v0}, Lcom/tkay/expressad/foundation/g/g/a;->a(Lcom/tkay/expressad/foundation/g/g/a$a;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :cond_0
    return-void

    :catchall_0
    move-exception v0

    .line 25
    invoke-virtual {v0}, Ljava/lang/Throwable;->printStackTrace()V

    return-void
.end method
