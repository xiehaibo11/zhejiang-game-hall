.class final Lcom/tkay/expressad/foundation/g/f/g/f$a;
.super Ljava/lang/Object;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/tkay/expressad/foundation/g/f/g/f;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0xa
    name = "a"
.end annotation


# static fields
.field private static final a:Lcom/tkay/expressad/foundation/g/f/g/f;


# direct methods
.method static constructor <clinit>()V
    .locals 2

    .line 8
    new-instance v0, Lcom/tkay/expressad/foundation/g/f/g/f;

    const/4 v1, 0x0

    invoke-direct {v0, v1}, Lcom/tkay/expressad/foundation/g/f/g/f;-><init>(B)V

    sput-object v0, Lcom/tkay/expressad/foundation/g/f/g/f$a;->a:Lcom/tkay/expressad/foundation/g/f/g/f;

    return-void
.end method

.method private constructor <init>()V
    .locals 0

    .line 7
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method static synthetic a()Lcom/tkay/expressad/foundation/g/f/g/f;
    .locals 1

    .line 7
    sget-object v0, Lcom/tkay/expressad/foundation/g/f/g/f$a;->a:Lcom/tkay/expressad/foundation/g/f/g/f;

    return-object v0
.end method
