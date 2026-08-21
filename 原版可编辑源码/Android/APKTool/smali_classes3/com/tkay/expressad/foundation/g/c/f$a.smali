.class final Lcom/tkay/expressad/foundation/g/c/f$a;
.super Ljava/lang/Object;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/tkay/expressad/foundation/g/c/f;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x1a
    name = "a"
.end annotation


# instance fields
.field public a:Lcom/tkay/expressad/foundation/g/c/c;

.field public b:Ljava/io/File;


# direct methods
.method public constructor <init>(Lcom/tkay/expressad/foundation/g/c/c;Ljava/io/File;)V
    .locals 0

    .line 117
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 118
    iput-object p1, p0, Lcom/tkay/expressad/foundation/g/c/f$a;->a:Lcom/tkay/expressad/foundation/g/c/c;

    .line 119
    iput-object p2, p0, Lcom/tkay/expressad/foundation/g/c/f$a;->b:Ljava/io/File;

    return-void
.end method
