.class Lcom/bianfeng/seppellita/net/UrlStrategy$UrlBean;
.super Ljava/lang/Object;
.source "UrlStrategy.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/bianfeng/seppellita/net/UrlStrategy;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x2
    name = "UrlBean"
.end annotation


# static fields
.field private static final DEF_MAX_COUNT:I = 0x3


# instance fields
.field volatile count:I

.field private volatile modify:Ljava/util/concurrent/atomic/AtomicInteger;

.field final synthetic this$0:Lcom/bianfeng/seppellita/net/UrlStrategy;

.field private uris:[Ljava/lang/String;

.field url:Ljava/lang/String;


# direct methods
.method public constructor <init>(Lcom/bianfeng/seppellita/net/UrlStrategy;Ljava/lang/String;Ljava/lang/String;)V
    .locals 1

    .line 88
    iput-object p1, p0, Lcom/bianfeng/seppellita/net/UrlStrategy$UrlBean;->this$0:Lcom/bianfeng/seppellita/net/UrlStrategy;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 85
    new-instance p1, Ljava/util/concurrent/atomic/AtomicInteger;

    const/4 v0, 0x0

    invoke-direct {p1, v0}, Ljava/util/concurrent/atomic/AtomicInteger;-><init>(I)V

    iput-object p1, p0, Lcom/bianfeng/seppellita/net/UrlStrategy$UrlBean;->modify:Ljava/util/concurrent/atomic/AtomicInteger;

    const/4 p1, 0x2

    new-array p1, p1, [Ljava/lang/String;

    .line 86
    iput-object p1, p0, Lcom/bianfeng/seppellita/net/UrlStrategy$UrlBean;->uris:[Ljava/lang/String;

    .line 89
    iput-object p2, p0, Lcom/bianfeng/seppellita/net/UrlStrategy$UrlBean;->url:Ljava/lang/String;

    aput-object p2, p1, v0

    const/4 p2, 0x1

    aput-object p3, p1, p2

    return-void
.end method


# virtual methods
.method public getCount()I
    .locals 1

    .line 95
    iget v0, p0, Lcom/bianfeng/seppellita/net/UrlStrategy$UrlBean;->count:I

    return v0
.end method

.method public getUrl()Ljava/lang/String;
    .locals 2

    .line 108
    invoke-virtual {p0}, Lcom/bianfeng/seppellita/net/UrlStrategy$UrlBean;->getCount()I

    move-result v0

    const/4 v1, 0x3

    if-le v0, v1, :cond_0

    .line 109
    iget-object v0, p0, Lcom/bianfeng/seppellita/net/UrlStrategy$UrlBean;->modify:Ljava/util/concurrent/atomic/AtomicInteger;

    invoke-virtual {v0}, Ljava/util/concurrent/atomic/AtomicInteger;->incrementAndGet()I

    move-result v0

    rem-int/lit8 v0, v0, 0x2

    .line 110
    iget-object v1, p0, Lcom/bianfeng/seppellita/net/UrlStrategy$UrlBean;->this$0:Lcom/bianfeng/seppellita/net/UrlStrategy;

    invoke-static {v1}, Lcom/bianfeng/seppellita/net/UrlStrategy;->access$000(Lcom/bianfeng/seppellita/net/UrlStrategy;)Lcom/bianfeng/seppellita/net/UrlStrategy$UrlBean;

    move-result-object v1

    invoke-virtual {v1}, Lcom/bianfeng/seppellita/net/UrlStrategy$UrlBean;->setTo0()V

    .line 111
    iget-object v1, p0, Lcom/bianfeng/seppellita/net/UrlStrategy$UrlBean;->uris:[Ljava/lang/String;

    aget-object v0, v1, v0

    iput-object v0, p0, Lcom/bianfeng/seppellita/net/UrlStrategy$UrlBean;->url:Ljava/lang/String;

    .line 113
    :cond_0
    iget-object v0, p0, Lcom/bianfeng/seppellita/net/UrlStrategy$UrlBean;->url:Ljava/lang/String;

    return-object v0
.end method

.method public increment()V
    .locals 2

    .line 99
    iget v0, p0, Lcom/bianfeng/seppellita/net/UrlStrategy$UrlBean;->count:I

    add-int/lit8 v0, v0, 0x1

    iput v0, p0, Lcom/bianfeng/seppellita/net/UrlStrategy$UrlBean;->count:I

    .line 100
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "\u6b21\u6570--->"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget v1, p0, Lcom/bianfeng/seppellita/net/UrlStrategy$UrlBean;->count:I

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Lcom/bianfeng/seppellita/utils/SeppellitaLogger;->i(Ljava/lang/String;)V

    return-void
.end method

.method public setTo0()V
    .locals 1

    const/4 v0, 0x0

    .line 104
    iput v0, p0, Lcom/bianfeng/seppellita/net/UrlStrategy$UrlBean;->count:I

    return-void
.end method
