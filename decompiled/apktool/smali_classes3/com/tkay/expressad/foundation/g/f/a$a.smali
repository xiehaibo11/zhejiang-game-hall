.class final Lcom/tkay/expressad/foundation/g/f/a$a;
.super Ljava/lang/Object;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/tkay/expressad/foundation/g/f/a;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0xa
    name = "a"
.end annotation


# static fields
.field private static a:Lcom/tkay/expressad/foundation/g/f/a;


# direct methods
.method static constructor <clinit>()V
    .locals 2

    .line 16
    new-instance v0, Lcom/tkay/expressad/foundation/g/f/a;

    const/4 v1, 0x0

    invoke-direct {v0, v1}, Lcom/tkay/expressad/foundation/g/f/a;-><init>(B)V

    sput-object v0, Lcom/tkay/expressad/foundation/g/f/a$a;->a:Lcom/tkay/expressad/foundation/g/f/a;

    return-void
.end method

.method private constructor <init>()V
    .locals 0

    .line 15
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method static synthetic a()Lcom/tkay/expressad/foundation/g/f/a;
    .locals 1

    .line 15
    sget-object v0, Lcom/tkay/expressad/foundation/g/f/a$a;->a:Lcom/tkay/expressad/foundation/g/f/a;

    return-object v0
.end method
