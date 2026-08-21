.class final Lcom/tkay/expressad/foundation/c/a/a$a;
.super Ljava/lang/Object;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/tkay/expressad/foundation/c/a/a;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0xa
    name = "a"
.end annotation


# static fields
.field private static a:Lcom/tkay/expressad/foundation/c/a/a;


# direct methods
.method static constructor <clinit>()V
    .locals 2

    .line 23
    new-instance v0, Lcom/tkay/expressad/foundation/c/a/a;

    const/4 v1, 0x0

    invoke-direct {v0, v1}, Lcom/tkay/expressad/foundation/c/a/a;-><init>(B)V

    sput-object v0, Lcom/tkay/expressad/foundation/c/a/a$a;->a:Lcom/tkay/expressad/foundation/c/a/a;

    return-void
.end method

.method private constructor <init>()V
    .locals 0

    .line 22
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method static synthetic a()Lcom/tkay/expressad/foundation/c/a/a;
    .locals 1

    .line 22
    sget-object v0, Lcom/tkay/expressad/foundation/c/a/a$a;->a:Lcom/tkay/expressad/foundation/c/a/a;

    return-object v0
.end method
