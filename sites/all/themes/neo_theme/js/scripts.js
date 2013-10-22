
(function($) {
$(document).ready(function() {		
			$(window).scroll(function(){
				var scrollTop = $(window).scrollTop();
				if(scrollTop >= 150) {
					$('.states').stop().css({ opacity: 1 });
				}
				else   {
					$('.states').stop().css({ opacity: 0 });
				}
			});
		});
}(jQuery));

(function($) {
$(document).ready(function() {		
			$(window).scroll(function(){
				var scrollTop = $(window).scrollTop();
				if(scrollTop >= 1) {
					$('.zone-user-wrapper').stop().css('box-shadow', '0 0 10px rgba(0, 0, 0, 0.2)');
				}
				else   {
					$('.zone-user-wrapper').stop().css('box-shadow', '0 0 0 rgba(0, 0, 0, 0.5)');
				}
			});
		});
}(jQuery));