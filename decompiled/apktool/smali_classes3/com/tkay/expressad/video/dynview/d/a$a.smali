.class final Lcom/tkay/expressad/video/dynview/d/a$a;
.super Ljava/lang/ref/SoftReference;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/tkay/expressad/video/dynview/d/a;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x2
    name = "a"
.end annotation

.annotation system Ldalvik/annotation/Signature;
    value = {
        "<K:",
        "Ljava/lang/Object;",
        "V:",
        "Ljava/lang/Object;",
        ">",
        "Ljava/lang/ref/SoftReference<",
        "TV;>;"
    }
.end annotation


# instance fields
.field a:Ljava/lang/Object;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "TK;"
        }
    .end annotation
.end field

.field final synthetic b:Lcom/tkay/expressad/video/dynview/d/a;


# direct methods
.method public constructor <init>(Lcom/tkay/expressad/video/dynview/d/a;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/ref/ReferenceQueue;)V
    .locals 0
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(TK;TV;",
            "Ljava/lang/ref/ReferenceQueue;",
            ")V"
        }
    .end annotation

    .line 92
    iput-object p1, p0, Lcom/tkay/expressad/video/dynview/d/a$a;->b:Lcom/tkay/expressad/video/dynview/d/a;

    .line 93
    invoke-direct {p0, p3, p4}, Ljava/lang/ref/SoftReference;-><init>(Ljava/lang/Object;Ljava/lang/ref/ReferenceQueue;)V

    .line 94
    iput-object p2, p0, Lcom/tkay/expressad/video/dynview/d/a$a;->a:Ljava/lang/Object;

    return-void
.end method
