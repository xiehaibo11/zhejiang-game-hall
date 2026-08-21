.class public final Lcom/bykv/vk/openvk/api/df;
.super Ljava/lang/Object;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/bykv/vk/openvk/api/df$rg;
    }
.end annotation


# instance fields
.field private df:I

.field private pt:Lcom/bykv/vk/openvk/api/proto/ValueSet;

.field private q:Ljava/lang/String;

.field private rg:Z


# direct methods
.method private constructor <init>()V
    .locals 1

    .line 13
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    const/4 v0, 0x0

    .line 8
    iput-boolean v0, p0, Lcom/bykv/vk/openvk/api/df;->rg:Z

    const/4 v0, -0x1

    .line 9
    iput v0, p0, Lcom/bykv/vk/openvk/api/df;->df:I

    const/4 v0, 0x0

    .line 10
    iput-object v0, p0, Lcom/bykv/vk/openvk/api/df;->q:Ljava/lang/String;

    .line 11
    iput-object v0, p0, Lcom/bykv/vk/openvk/api/df;->pt:Lcom/bykv/vk/openvk/api/proto/ValueSet;

    return-void
.end method

.method public static final rg()Lcom/bykv/vk/openvk/api/df;
    .locals 1

    .line 15
    new-instance v0, Lcom/bykv/vk/openvk/api/df;

    invoke-direct {v0}, Lcom/bykv/vk/openvk/api/df;-><init>()V

    return-object v0
.end method


# virtual methods
.method public df()Lcom/bykv/vk/openvk/api/proto/Result;
    .locals 7

    .line 39
    new-instance v6, Lcom/bykv/vk/openvk/api/df$rg;

    iget-boolean v1, p0, Lcom/bykv/vk/openvk/api/df;->rg:Z

    iget v2, p0, Lcom/bykv/vk/openvk/api/df;->df:I

    iget-object v3, p0, Lcom/bykv/vk/openvk/api/df;->q:Ljava/lang/String;

    iget-object v0, p0, Lcom/bykv/vk/openvk/api/df;->pt:Lcom/bykv/vk/openvk/api/proto/ValueSet;

    if-nez v0, :cond_0

    invoke-static {}, Lcom/bykv/vk/openvk/api/q;->rg()Lcom/bykv/vk/openvk/api/q;

    move-result-object v0

    invoke-virtual {v0}, Lcom/bykv/vk/openvk/api/q;->df()Lcom/bykv/vk/openvk/api/proto/ValueSet;

    move-result-object v0

    :cond_0
    move-object v4, v0

    const/4 v5, 0x0

    move-object v0, v6

    invoke-direct/range {v0 .. v5}, Lcom/bykv/vk/openvk/api/df$rg;-><init>(ZILjava/lang/String;Lcom/bykv/vk/openvk/api/proto/ValueSet;Lcom/bykv/vk/openvk/api/df$1;)V

    return-object v6
.end method

.method public rg(I)Lcom/bykv/vk/openvk/api/df;
    .locals 0

    .line 24
    iput p1, p0, Lcom/bykv/vk/openvk/api/df;->df:I

    return-object p0
.end method

.method public rg(Lcom/bykv/vk/openvk/api/proto/ValueSet;)Lcom/bykv/vk/openvk/api/df;
    .locals 0

    .line 34
    iput-object p1, p0, Lcom/bykv/vk/openvk/api/df;->pt:Lcom/bykv/vk/openvk/api/proto/ValueSet;

    return-object p0
.end method

.method public rg(Z)Lcom/bykv/vk/openvk/api/df;
    .locals 0

    .line 19
    iput-boolean p1, p0, Lcom/bykv/vk/openvk/api/df;->rg:Z

    return-object p0
.end method
