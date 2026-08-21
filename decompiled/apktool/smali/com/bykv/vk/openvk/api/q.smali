.class public final Lcom/bykv/vk/openvk/api/q;
.super Ljava/lang/Object;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/bykv/vk/openvk/api/q$rg;
    }
.end annotation


# instance fields
.field private final rg:Landroid/util/SparseArray;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Landroid/util/SparseArray<",
            "Ljava/lang/Object;",
            ">;"
        }
    .end annotation
.end field


# direct methods
.method private constructor <init>(Landroid/util/SparseArray;)V
    .locals 0
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Landroid/util/SparseArray<",
            "Ljava/lang/Object;",
            ">;)V"
        }
    .end annotation

    .line 14
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 15
    iput-object p1, p0, Lcom/bykv/vk/openvk/api/q;->rg:Landroid/util/SparseArray;

    return-void
.end method

.method public static final rg()Lcom/bykv/vk/openvk/api/q;
    .locals 2

    .line 19
    new-instance v0, Lcom/bykv/vk/openvk/api/q;

    new-instance v1, Landroid/util/SparseArray;

    invoke-direct {v1}, Landroid/util/SparseArray;-><init>()V

    invoke-direct {v0, v1}, Lcom/bykv/vk/openvk/api/q;-><init>(Landroid/util/SparseArray;)V

    return-object v0
.end method


# virtual methods
.method public df()Lcom/bykv/vk/openvk/api/proto/ValueSet;
    .locals 3

    .line 131
    new-instance v0, Lcom/bykv/vk/openvk/api/q$rg;

    iget-object v1, p0, Lcom/bykv/vk/openvk/api/q;->rg:Landroid/util/SparseArray;

    const/4 v2, 0x0

    invoke-direct {v0, v1, v2}, Lcom/bykv/vk/openvk/api/q$rg;-><init>(Landroid/util/SparseArray;Lcom/bykv/vk/openvk/api/q$1;)V

    return-object v0
.end method

.method public rg(ILjava/lang/Object;)Lcom/bykv/vk/openvk/api/q;
    .locals 1

    .line 40
    iget-object v0, p0, Lcom/bykv/vk/openvk/api/q;->rg:Landroid/util/SparseArray;

    invoke-virtual {v0, p1, p2}, Landroid/util/SparseArray;->put(ILjava/lang/Object;)V

    return-object p0
.end method

.method public rg(ILjava/lang/String;)Lcom/bykv/vk/openvk/api/q;
    .locals 1

    .line 45
    iget-object v0, p0, Lcom/bykv/vk/openvk/api/q;->rg:Landroid/util/SparseArray;

    invoke-virtual {v0, p1, p2}, Landroid/util/SparseArray;->put(ILjava/lang/Object;)V

    return-object p0
.end method

.method public rg(IZ)Lcom/bykv/vk/openvk/api/q;
    .locals 1

    .line 60
    iget-object v0, p0, Lcom/bykv/vk/openvk/api/q;->rg:Landroid/util/SparseArray;

    invoke-static {p2}, Ljava/lang/Boolean;->valueOf(Z)Ljava/lang/Boolean;

    move-result-object p2

    invoke-virtual {v0, p1, p2}, Landroid/util/SparseArray;->put(ILjava/lang/Object;)V

    return-object p0
.end method
