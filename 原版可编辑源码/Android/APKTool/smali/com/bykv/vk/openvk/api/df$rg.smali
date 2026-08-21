.class final Lcom/bykv/vk/openvk/api/df$rg;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/bykv/vk/openvk/api/proto/Result;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/bykv/vk/openvk/api/df;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x1a
    name = "rg"
.end annotation


# instance fields
.field private final df:I

.field private final pt:Lcom/bykv/vk/openvk/api/proto/ValueSet;

.field private final q:Ljava/lang/String;

.field private final rg:Z


# direct methods
.method private constructor <init>(ZILjava/lang/String;Lcom/bykv/vk/openvk/api/proto/ValueSet;)V
    .locals 0

    .line 48
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 49
    iput-boolean p1, p0, Lcom/bykv/vk/openvk/api/df$rg;->rg:Z

    .line 50
    iput p2, p0, Lcom/bykv/vk/openvk/api/df$rg;->df:I

    .line 51
    iput-object p3, p0, Lcom/bykv/vk/openvk/api/df$rg;->q:Ljava/lang/String;

    .line 52
    iput-object p4, p0, Lcom/bykv/vk/openvk/api/df$rg;->pt:Lcom/bykv/vk/openvk/api/proto/ValueSet;

    return-void
.end method

.method synthetic constructor <init>(ZILjava/lang/String;Lcom/bykv/vk/openvk/api/proto/ValueSet;Lcom/bykv/vk/openvk/api/df$1;)V
    .locals 0

    .line 42
    invoke-direct {p0, p1, p2, p3, p4}, Lcom/bykv/vk/openvk/api/df$rg;-><init>(ZILjava/lang/String;Lcom/bykv/vk/openvk/api/proto/ValueSet;)V

    return-void
.end method


# virtual methods
.method public code()I
    .locals 1

    .line 62
    iget v0, p0, Lcom/bykv/vk/openvk/api/df$rg;->df:I

    return v0
.end method

.method public isSuccess()Z
    .locals 1

    .line 57
    iget-boolean v0, p0, Lcom/bykv/vk/openvk/api/df$rg;->rg:Z

    return v0
.end method

.method public message()Ljava/lang/String;
    .locals 1

    .line 67
    iget-object v0, p0, Lcom/bykv/vk/openvk/api/df$rg;->q:Ljava/lang/String;

    return-object v0
.end method

.method public values()Lcom/bykv/vk/openvk/api/proto/ValueSet;
    .locals 1

    .line 72
    iget-object v0, p0, Lcom/bykv/vk/openvk/api/df$rg;->pt:Lcom/bykv/vk/openvk/api/proto/ValueSet;

    return-object v0
.end method
