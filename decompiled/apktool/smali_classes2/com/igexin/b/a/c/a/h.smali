.class Lcom/igexin/b/a/c/a/h;
.super Ljava/lang/Object;


# static fields
.field private static final a:Lcom/igexin/b/a/c/a/f;


# direct methods
.method static constructor <clinit>()V
    .locals 2

    new-instance v0, Lcom/igexin/b/a/c/a/f;

    const/4 v1, 0x0

    invoke-direct {v0, v1}, Lcom/igexin/b/a/c/a/f;-><init>(Lcom/igexin/b/a/c/a/g;)V

    sput-object v0, Lcom/igexin/b/a/c/a/h;->a:Lcom/igexin/b/a/c/a/f;

    return-void
.end method

.method static synthetic a()Lcom/igexin/b/a/c/a/f;
    .locals 1

    sget-object v0, Lcom/igexin/b/a/c/a/h;->a:Lcom/igexin/b/a/c/a/f;

    return-object v0
.end method
