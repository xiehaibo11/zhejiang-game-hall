.class public interface abstract annotation Lcom/ss/android/downloadlib/addownload/model/OrderDownloadItem$OrderStatus;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/annotation/Annotation;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/ss/android/downloadlib/addownload/model/OrderDownloadItem;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x2609
    name = "OrderStatus"
.end annotation

.annotation runtime Ljava/lang/annotation/Retention;
    value = .enum Ljava/lang/annotation/RetentionPolicy;->SOURCE:Ljava/lang/annotation/RetentionPolicy;
.end annotation


# static fields
.field public static final HANDLE_FAILED:I = -0x2

.field public static final ORDERING:I = 0x0

.field public static final ORDER_CANCEL:I = 0x2

.field public static final ORDER_OVERDUE:I = 0x3

.field public static final QUERY_FAILED:I = -0x1

.field public static final SHELVED:I = 0x1
