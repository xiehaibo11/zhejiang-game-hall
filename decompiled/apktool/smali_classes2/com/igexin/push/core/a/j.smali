.class public Lcom/igexin/push/core/a/j;
.super Lcom/igexin/push/core/a/a;


# static fields
.field private static final a:Ljava/lang/String;


# direct methods
.method static constructor <clinit>()V
    .locals 1

    sget-object v0, Lcom/igexin/push/config/i;->a:Ljava/lang/String;

    sput-object v0, Lcom/igexin/push/core/a/j;->a:Ljava/lang/String;

    return-void
.end method

.method public constructor <init>()V
    .locals 0

    invoke-direct {p0}, Lcom/igexin/push/core/a/a;-><init>()V

    return-void
.end method


# virtual methods
.method public a(Lcom/igexin/b/a/d/e;)Z
    .locals 0

    const/4 p1, 0x0

    return p1
.end method

.method public a(Ljava/lang/Object;)Z
    .locals 1

    instance-of p1, p1, Lcom/igexin/push/d/c/f;

    if-eqz p1, :cond_0

    invoke-static {}, Lcom/igexin/push/d/b;->a()Lcom/igexin/push/d/b;

    move-result-object p1

    invoke-virtual {p1}, Lcom/igexin/push/d/b;->e()V

    const/4 p1, 0x0

    new-array p1, p1, [Ljava/lang/Object;

    const-string v0, "heartbeatRsp"

    invoke-static {v0, p1}, Lcom/igexin/b/a/c/b;->a(Ljava/lang/String;[Ljava/lang/Object;)V

    invoke-static {}, Lcom/igexin/push/core/h;->a()Lcom/igexin/push/core/h;

    move-result-object p1

    sget-object v0, Lcom/igexin/push/core/j;->a:Lcom/igexin/push/core/j;

    invoke-virtual {p1, v0}, Lcom/igexin/push/core/h;->a(Lcom/igexin/push/core/j;)V

    :cond_0
    const/4 p1, 0x1

    return p1
.end method
