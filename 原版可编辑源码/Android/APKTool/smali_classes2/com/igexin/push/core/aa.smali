.class Lcom/igexin/push/core/aa;
.super Ljava/lang/Object;


# static fields
.field private static final a:Lcom/igexin/push/core/x;


# direct methods
.method static constructor <clinit>()V
    .locals 2

    new-instance v0, Lcom/igexin/push/core/x;

    const/4 v1, 0x0

    invoke-direct {v0, v1}, Lcom/igexin/push/core/x;-><init>(Lcom/igexin/push/core/y;)V

    sput-object v0, Lcom/igexin/push/core/aa;->a:Lcom/igexin/push/core/x;

    return-void
.end method

.method static synthetic a()Lcom/igexin/push/core/x;
    .locals 1

    sget-object v0, Lcom/igexin/push/core/aa;->a:Lcom/igexin/push/core/x;

    return-object v0
.end method
