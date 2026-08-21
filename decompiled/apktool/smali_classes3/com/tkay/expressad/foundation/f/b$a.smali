.class final Lcom/tkay/expressad/foundation/f/b$a;
.super Ljava/lang/Object;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/tkay/expressad/foundation/f/b;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x8
    name = "a"
.end annotation


# static fields
.field private static final a:Lcom/tkay/expressad/foundation/f/b;


# direct methods
.method static constructor <clinit>()V
    .locals 2

    .line 36
    new-instance v0, Lcom/tkay/expressad/foundation/f/b;

    const/4 v1, 0x0

    invoke-direct {v0, v1}, Lcom/tkay/expressad/foundation/f/b;-><init>(B)V

    sput-object v0, Lcom/tkay/expressad/foundation/f/b$a;->a:Lcom/tkay/expressad/foundation/f/b;

    return-void
.end method

.method constructor <init>()V
    .locals 0

    .line 35
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method static synthetic a()Lcom/tkay/expressad/foundation/f/b;
    .locals 1

    .line 35
    sget-object v0, Lcom/tkay/expressad/foundation/f/b$a;->a:Lcom/tkay/expressad/foundation/f/b;

    return-object v0
.end method
