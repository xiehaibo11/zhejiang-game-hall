.class final Lcom/tkay/basead/e/b$a;
.super Ljava/lang/Object;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/tkay/basead/e/b;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0xa
    name = "a"
.end annotation


# static fields
.field private static final a:Lcom/tkay/basead/e/b;


# direct methods
.method static constructor <clinit>()V
    .locals 2

    .line 29
    new-instance v0, Lcom/tkay/basead/e/b;

    const/4 v1, 0x0

    invoke-direct {v0, v1}, Lcom/tkay/basead/e/b;-><init>(B)V

    sput-object v0, Lcom/tkay/basead/e/b$a;->a:Lcom/tkay/basead/e/b;

    return-void
.end method

.method private constructor <init>()V
    .locals 0

    .line 28
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method static synthetic a()Lcom/tkay/basead/e/b;
    .locals 1

    .line 28
    sget-object v0, Lcom/tkay/basead/e/b$a;->a:Lcom/tkay/basead/e/b;

    return-object v0
.end method
