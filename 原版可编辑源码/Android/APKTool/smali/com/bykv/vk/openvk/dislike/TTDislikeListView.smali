.class public Lcom/bykv/vk/openvk/dislike/TTDislikeListView;
.super Landroid/widget/ListView;


# instance fields
.field private mDislikeController:Lcom/bykv/vk/openvk/TTDislikeController;

.field private mOnItemClickBridge:Lcom/bykv/vk/openvk/api/proto/EventListener;

.field private mOnItemClickListener:Landroid/widget/AdapterView$OnItemClickListener;

.field private mOnItemClickListenerInner:Landroid/widget/AdapterView$OnItemClickListener;


# direct methods
.method public constructor <init>(Landroid/content/Context;)V
    .locals 0

    .line 27
    invoke-direct {p0, p1}, Landroid/widget/ListView;-><init>(Landroid/content/Context;)V

    .line 58
    new-instance p1, Lcom/bykv/vk/openvk/dislike/TTDislikeListView$1;

    invoke-direct {p1, p0}, Lcom/bykv/vk/openvk/dislike/TTDislikeListView$1;-><init>(Lcom/bykv/vk/openvk/dislike/TTDislikeListView;)V

    iput-object p1, p0, Lcom/bykv/vk/openvk/dislike/TTDislikeListView;->mOnItemClickListenerInner:Landroid/widget/AdapterView$OnItemClickListener;

    .line 28
    invoke-direct {p0}, Lcom/bykv/vk/openvk/dislike/TTDislikeListView;->init()V

    return-void
.end method

.method public constructor <init>(Landroid/content/Context;Landroid/util/AttributeSet;)V
    .locals 0

    .line 32
    invoke-direct {p0, p1, p2}, Landroid/widget/ListView;-><init>(Landroid/content/Context;Landroid/util/AttributeSet;)V

    .line 58
    new-instance p1, Lcom/bykv/vk/openvk/dislike/TTDislikeListView$1;

    invoke-direct {p1, p0}, Lcom/bykv/vk/openvk/dislike/TTDislikeListView$1;-><init>(Lcom/bykv/vk/openvk/dislike/TTDislikeListView;)V

    iput-object p1, p0, Lcom/bykv/vk/openvk/dislike/TTDislikeListView;->mOnItemClickListenerInner:Landroid/widget/AdapterView$OnItemClickListener;

    .line 33
    invoke-direct {p0}, Lcom/bykv/vk/openvk/dislike/TTDislikeListView;->init()V

    return-void
.end method

.method public constructor <init>(Landroid/content/Context;Landroid/util/AttributeSet;I)V
    .locals 0

    .line 37
    invoke-direct {p0, p1, p2, p3}, Landroid/widget/ListView;-><init>(Landroid/content/Context;Landroid/util/AttributeSet;I)V

    .line 58
    new-instance p1, Lcom/bykv/vk/openvk/dislike/TTDislikeListView$1;

    invoke-direct {p1, p0}, Lcom/bykv/vk/openvk/dislike/TTDislikeListView$1;-><init>(Lcom/bykv/vk/openvk/dislike/TTDislikeListView;)V

    iput-object p1, p0, Lcom/bykv/vk/openvk/dislike/TTDislikeListView;->mOnItemClickListenerInner:Landroid/widget/AdapterView$OnItemClickListener;

    .line 38
    invoke-direct {p0}, Lcom/bykv/vk/openvk/dislike/TTDislikeListView;->init()V

    return-void
.end method

.method static synthetic access$000(Lcom/bykv/vk/openvk/dislike/TTDislikeListView;)Lcom/bykv/vk/openvk/TTDislikeController;
    .locals 0

    .line 21
    iget-object p0, p0, Lcom/bykv/vk/openvk/dislike/TTDislikeListView;->mDislikeController:Lcom/bykv/vk/openvk/TTDislikeController;

    return-object p0
.end method

.method static synthetic access$100(Lcom/bykv/vk/openvk/dislike/TTDislikeListView;)Landroid/widget/AdapterView$OnItemClickListener;
    .locals 0

    .line 21
    iget-object p0, p0, Lcom/bykv/vk/openvk/dislike/TTDislikeListView;->mOnItemClickListener:Landroid/widget/AdapterView$OnItemClickListener;

    return-object p0
.end method

.method static synthetic access$200(Lcom/bykv/vk/openvk/dislike/TTDislikeListView;)Lcom/bykv/vk/openvk/api/proto/EventListener;
    .locals 0

    .line 21
    iget-object p0, p0, Lcom/bykv/vk/openvk/dislike/TTDislikeListView;->mOnItemClickBridge:Lcom/bykv/vk/openvk/api/proto/EventListener;

    return-object p0
.end method

.method private init()V
    .locals 1

    .line 46
    iget-object v0, p0, Lcom/bykv/vk/openvk/dislike/TTDislikeListView;->mOnItemClickListenerInner:Landroid/widget/AdapterView$OnItemClickListener;

    invoke-super {p0, v0}, Landroid/widget/ListView;->setOnItemClickListener(Landroid/widget/AdapterView$OnItemClickListener;)V

    return-void
.end method


# virtual methods
.method public setDislikeInfo(Lcom/bykv/vk/openvk/TTDislikeController;)V
    .locals 0

    .line 42
    iput-object p1, p0, Lcom/bykv/vk/openvk/dislike/TTDislikeListView;->mDislikeController:Lcom/bykv/vk/openvk/TTDislikeController;

    return-void
.end method

.method public setOnItemClickListener(Landroid/widget/AdapterView$OnItemClickListener;)V
    .locals 1

    .line 51
    instance-of v0, p1, Lcom/bykv/vk/openvk/api/proto/EventListener;

    if-eqz v0, :cond_0

    .line 52
    check-cast p1, Lcom/bykv/vk/openvk/api/proto/EventListener;

    iput-object p1, p0, Lcom/bykv/vk/openvk/dislike/TTDislikeListView;->mOnItemClickBridge:Lcom/bykv/vk/openvk/api/proto/EventListener;

    goto :goto_0

    .line 54
    :cond_0
    iput-object p1, p0, Lcom/bykv/vk/openvk/dislike/TTDislikeListView;->mOnItemClickListener:Landroid/widget/AdapterView$OnItemClickListener;

    :goto_0
    return-void
.end method
