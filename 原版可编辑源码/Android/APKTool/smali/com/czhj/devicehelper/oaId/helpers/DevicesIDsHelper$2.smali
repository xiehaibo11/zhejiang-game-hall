.class Lcom/czhj/devicehelper/oaId/helpers/DevicesIDsHelper$2;
.super Ljava/util/LinkedList;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/czhj/devicehelper/oaId/helpers/DevicesIDsHelper;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation

.annotation system Ldalvik/annotation/Signature;
    value = {
        "Ljava/util/LinkedList<",
        "Ljava/lang/String;",
        ">;"
    }
.end annotation


# direct methods
.method constructor <init>()V
    .locals 1

    invoke-direct {p0}, Ljava/util/LinkedList;-><init>()V

    const-string v0, "00000000-0000-0000-0000-000000000000"

    invoke-virtual {p0, v0}, Lcom/czhj/devicehelper/oaId/helpers/DevicesIDsHelper$2;->add(Ljava/lang/Object;)Z

    const-string v0, "00000000000000000000000000000000"

    invoke-virtual {p0, v0}, Lcom/czhj/devicehelper/oaId/helpers/DevicesIDsHelper$2;->add(Ljava/lang/Object;)Z

    return-void
.end method
