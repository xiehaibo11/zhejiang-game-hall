.class public Lcom/cmic/gen/sdk/view/b;
.super Ljava/lang/Object;
.source "LoginProxy.java"


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/cmic/gen/sdk/view/b$a;
    }
.end annotation


# static fields
.field private static b:Lcom/cmic/gen/sdk/view/b;


# instance fields
.field public a:I

.field private c:Lcom/cmic/gen/sdk/view/b$a;


# direct methods
.method static constructor <clinit>()V
    .locals 0

    return-void
.end method

.method public constructor <init>()V
    .locals 1

    .line 5
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    const/4 v0, 0x1

    .line 10
    iput v0, p0, Lcom/cmic/gen/sdk/view/b;->a:I

    return-void
.end method

.method public static a()Lcom/cmic/gen/sdk/view/b;
    .locals 2

    .line 13
    sget-object v0, Lcom/cmic/gen/sdk/view/b;->b:Lcom/cmic/gen/sdk/view/b;

    if-nez v0, :cond_1

    .line 14
    const-class v0, Lcom/cmic/gen/sdk/view/b;

    monitor-enter v0

    .line 15
    :try_start_0
    sget-object v1, Lcom/cmic/gen/sdk/view/b;->b:Lcom/cmic/gen/sdk/view/b;

    if-nez v1, :cond_0

    .line 16
    new-instance v1, Lcom/cmic/gen/sdk/view/b;

    invoke-direct {v1}, Lcom/cmic/gen/sdk/view/b;-><init>()V

    sput-object v1, Lcom/cmic/gen/sdk/view/b;->b:Lcom/cmic/gen/sdk/view/b;

    .line 18
    :cond_0
    monitor-exit v0

    goto :goto_0

    :catchall_0
    move-exception v1

    monitor-exit v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    throw v1

    .line 20
    :cond_1
    :goto_0
    sget-object v0, Lcom/cmic/gen/sdk/view/b;->b:Lcom/cmic/gen/sdk/view/b;

    return-object v0
.end method


# virtual methods
.method public a(Lcom/cmic/gen/sdk/view/b$a;)V
    .locals 1

    const/4 v0, 0x1

    .line 39
    iput v0, p0, Lcom/cmic/gen/sdk/view/b;->a:I

    .line 40
    iput-object p1, p0, Lcom/cmic/gen/sdk/view/b;->c:Lcom/cmic/gen/sdk/view/b$a;

    return-void
.end method

.method public b()Lcom/cmic/gen/sdk/view/b$a;
    .locals 1

    .line 24
    iget-object v0, p0, Lcom/cmic/gen/sdk/view/b;->c:Lcom/cmic/gen/sdk/view/b$a;

    return-object v0
.end method

.method public c()V
    .locals 2

    .line 32
    iget-object v0, p0, Lcom/cmic/gen/sdk/view/b;->c:Lcom/cmic/gen/sdk/view/b$a;

    if-eqz v0, :cond_0

    iget v0, p0, Lcom/cmic/gen/sdk/view/b;->a:I

    const/4 v1, 0x1

    if-eq v0, v1, :cond_0

    const/4 v0, 0x0

    .line 33
    iput-object v0, p0, Lcom/cmic/gen/sdk/view/b;->c:Lcom/cmic/gen/sdk/view/b$a;

    const-string v0, "LoginProxy"

    const-string v1, "mLoginAuthProxy == null"

    .line 34
    invoke-static {v0, v1}, Lcom/cmic/gen/sdk/e/c;->b(Ljava/lang/String;Ljava/lang/String;)V

    :cond_0
    return-void
.end method
