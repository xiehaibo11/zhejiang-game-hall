.class Lcom/igexin/b/a/c/a/e;
.super Ljava/lang/Object;


# static fields
.field private static final a:Lcom/igexin/b/a/c/a/c;


# direct methods
.method static constructor <clinit>()V
    .locals 2

    new-instance v0, Lcom/igexin/b/a/c/a/c;

    const/4 v1, 0x0

    invoke-direct {v0, v1}, Lcom/igexin/b/a/c/a/c;-><init>(Lcom/igexin/b/a/c/a/d;)V

    sput-object v0, Lcom/igexin/b/a/c/a/e;->a:Lcom/igexin/b/a/c/a/c;

    return-void
.end method

.method static synthetic a()Lcom/igexin/b/a/c/a/c;
    .locals 1

    sget-object v0, Lcom/igexin/b/a/c/a/e;->a:Lcom/igexin/b/a/c/a/c;

    return-object v0
.end method
